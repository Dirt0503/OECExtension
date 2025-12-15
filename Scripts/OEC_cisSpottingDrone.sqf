params ["_unit"];

if(!local _unit)exitWith{};

if(isPlayer _unit)exitWith{};

_unit setPosATL [getPosATL _unit select 0, getPosATL _unit select 1, (getPosATL _unit select 2) + 100];
_unit engineOn true;
_unit flyInHeight [100, true];