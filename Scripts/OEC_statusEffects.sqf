params ["_unit"];

_unit setVariable ["stunMeter", 100, true];
_refreshed_StunMeter = 75;
_unitClassName = typeOf _unit;

systemChat str _unitClassName;

_noExistingEntry = isNil {(configFile >> "cfgVehicles" >> _unitClassName >> "stunResistance") call BIS_fnc_getCfgData};


if (_noExistingEntry) then
{
    _unit setVariable ["stunResist", 2, true];
}else{
    _config = (configFile >> "cfgVehicles" >> _unitClassName >> "stunResistance") call BIS_fnc_getCfgData;
    _unit setVariable ["stunResist", _config, true];
};

systemChat ("Script Initialized. Unit Stun Resist: " + (str (_unit getVariable "stunResist")));

_unit removeAllEventHandlers "HitPart";
_unit addEventHandler ["HitPart", {
    (_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];

    _stunMunition = _ammo select 4;
    systemChat (str _stunMunition);
    _stunMunitionValue = getNumber (configFile >> "cfgAmmo" >> _stunMunition >> "stunValue");
    systemChat (str _stunMunitionValue);

    if (_target == _shooter || (!alive _target) or _stunMunitionValue <= 0) exitWith {};
    systemChat "I have passed the if check! Yippee!!";
    systemChat ("stunResist is: " + (str (_target getVariable "stunResist")));

    _curStun = _target getVariable "stunMeter";
    systemChat ("curStun is: " + (str _curStun));
    _stunEffect = (_stunMunitionValue / (_target getVariable "stunResist"));
    systemChat ("stunEffect is: " + (str _stunEffect));
    _finalStun = (_curStun - _stunEffect);
    systemChat ("finalStun is: " + (str _finalStun));
    systemChat ("I am about to set stunMeter to " + (str _finalStun));
    _target setVariable["stunMeter", _finalStun, true];
    systemChat ("Yowza! That hurt me " + str _stunEffect + " much!");

    if(_target getVariable "stunMeter" <= 0) then
    {
        [_target, true] call ace_medical_fnc_setUnconscious;
        systemChat "mimimimi.... hooonk shuuu... zzz";
    } else
    {
        systemChat "light work no reaction";
    };
}];

systemChat "Beep!";

_stunRefresh = [{
    _test = isNil (_unit getVariable "stunMeter");

    systemChat str _test; 

    if (((_unit getVariable "stunMeter") <= 0) && (_unit getVariable ["ACE_isUnconscious", false])) then
    {
        systemchat "refreshing unit stunMeter";
        _unit setVariable ["stunMeter",_refreshed_StunMeter,true];
        [_unit, false] call ace_medical_fnc_setUnconscious;
    };
    systemChat "IM WORKIN HERE!";
}, 120, [_unit, _refreshed_StunMeter]] call CBA_fnc_addPerFrameHandler;

waitUntil {sleep 100; 
if (isNull _unit) then {true} else {false};
};
[_stunRefresh] call CBA_fnc_removePerFrameHandler;