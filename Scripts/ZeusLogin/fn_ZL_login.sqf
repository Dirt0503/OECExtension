params ["_target", "_player", "_params"];

if(!OEC_ZL_Enabled) exitWith{ diag_log "ZL Disabled"; };

private _curZeus = missionnamespace getVariable ["OEC_ZL_activeZeusUser", false];

diag_log text (["[OEC]", "[ZEUS LOGIN]", "DEBUG:", "Attempting login to Zeus with player", _player, "| is there a current zeus?", _curZeus] joinString " ");

if (!_curZeus) then {
	missionNamespace setVariable ["OEC_ZL_activeZeusUser", true, true];
	missionNamespace setVariable ["OEC_ZL_activeZeusUserObject", _player, true];

	[_player] remoteExecCall ["OEC_fnc_ZL_grant", 2];
};