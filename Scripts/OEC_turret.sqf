params ["_unit"];

 
_turretDisableDamage = [{
    _array = _this select 0;
    _turret = _array select 0;
    _turret allowDamage false;
}, 2.5, [_unit]] call CBA_fnc_addPerFrameHandler;


waitUntil {sleep 2.5; 
if (isNull _unit) then {true} else {false};
};
[_turretDisableDamage] call CBA_fnc_removePerFrameHandler;