params ["_player"];

if(isServer) then {

	private _curModule = missionnamespace getVariable ["OEC_ZL_curatorModule", objNull];

	if(isNull _curModule) then {
		_curModule = (createGroup west) createUnit ["ModuleCurator_F", position _player, [], 0, "CAN_COLLIDE"];
		missionnamespace setVariable ["OEC_ZL_curatorModule", _curModule, true];
	};

	diag_log text (["[OEC]", "[ZEUS LOGIN]", "DEBUG:", "Revoking access from", _curModule] joinString " ");

	unassignCurator _curModule;
	
	// We check in case they are assigned to multiple zeus modules.
	if (isNull (getAssignedCuratorLogic _player)) then {
		["OEC_3DEN_event_ZM_setMarkerVisibilty", [0], _player] call CBA_fnc_targetEvent;
	};

	[_player, "logged out of zeus."] remoteExecCall ["OEC_fnc_ZL_globalMessage", 0];
};
