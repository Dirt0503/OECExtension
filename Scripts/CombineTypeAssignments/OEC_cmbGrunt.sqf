params ["_unit"];

_unit setVariable ["WBK_CombineType", " grunt_", true];

["ace_unconscious", {
    (_unit) setCaptive (_this select 1);
}] call CBA_fnc_addEventHandler;