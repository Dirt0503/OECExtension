params ["_unit"];

_unit setVariable ["WBK_CombineType", " apf_", true];

["ace_unconscious", {
    (_unit) setCaptive (_this select 1);
}] call CBA_fnc_addEventHandler;