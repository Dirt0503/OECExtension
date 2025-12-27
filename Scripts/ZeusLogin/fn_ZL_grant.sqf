params ["_player"];

if(isServer) then {

	if(!OEC_ZL_Enabled) exitWith{ diag_log "ZL Disabled"; };

	private _curModule = missionnamespace getVariable ["OEC_ZL_curatorModule", objNull];

	if(isNull _curModule) then {
		diag_log text (["[OEC]", "[ZEUS LOGIN]", "DEBUG:", "No curator object found, spawning new one."] joinString " ");

		_curModule = (createGroup west) createUnit ["ModuleCurator_F", position _player, [], 0, "CAN_COLLIDE"];
		missionnamespace setVariable ["OEC_ZL_curatorModule", _curModule, true];
	};

	diag_log text (["[OEC]", "[ZEUS LOGIN]", "DEBUG:", "Assigning", _player, "to curator object", _curModule] joinString " ");

	_player assignCurator _curModule;
	["OEC_3DEN_event_ZM_setMarkerVisibilty", [1], _player] call CBA_fnc_targetEvent;

	[_player, "logged into zeus."] remoteExecCall ["OEC_fnc_ZL_globalMessage", 0];
};