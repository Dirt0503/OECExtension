params ["_unit"];

_unit setVariable ["stunMeter", 100, true];
_refreshed_StunMeter = 70;
_unitClassName = typeOf _unit;

_noExistingEntry = isNil {(configFile >> "cfgVehicles" >> _unitClassName >> "stunResistance") call BIS_fnc_getCfgData};

if (_noExistingEntry) then
{
    _unit setVariable ["stunResist", 1, true];
}else{
    _config = (configFile >> "cfgVehicles" >> _unitClassName >> "stunResistance") call BIS_fnc_getCfgData;
    _unit setVariable ["stunResist", _config, true];
};


_unit removeAllEventHandlers "HitPart";
_unit addEventHandler ["HitPart", {
    (_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
    _stunMunition = _ammo select 4;
    _stunMunitionValue = getNumber (configFile >> "cfgAmmo" >> _stunMunition >> "stunValue");
    if (_target == _shooter || (!alive _target) or _stunMunitionValue <= 0) exitWith {};
    _curStun = _target getVariable "stunMeter";
    _finalStun = ((_target getVariable "stunMeter") - (_stunMunitionValue / (_target getVariable "stunResist")));
    _target setVariable["stunMeter", _finalStun, true];

    if((_target getVariable "stunMeter") <= 0) then
    {
        [_target, true] call ace_medical_fnc_setUnconscious;
    };
}];



while {alive _unit} do 
{
    uiSleep 60;
    waitUntil {if ((_unit getVariable "stunMeter") <= 0) exitWith {true};};

    uiSleep 10;
    _unit setVariable ["stunMeter",_refreshed_StunMeter,true];
    [_unit, false] call ace_medical_fnc_setUnconscious;
};