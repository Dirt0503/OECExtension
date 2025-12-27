params ["_target", "_player", "_params"];

private _curZeus = missionnamespace getVariable ["OEC_ZL_activeZeusUserObject", objNull];

diag_log text (["[OEC]", "[ZEUS LOGIN]", "DEBUG:", "Attempting logout from Zeus with player", _player, "and current zeus", _curZeus, "with logic gate", _res] joinString " ");

missionNamespace setVariable ["OEC_ZL_activeZeusUser", false, true];
missionNamespace setVariable ["OEC_ZL_activeZeusUserObject", objNull, true];

[_curZeus] remoteExecCall ["OEC_fnc_ZL_revoke", 2];