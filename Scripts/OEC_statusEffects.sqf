params ["_unit"];

_unit setVariable ["stunMeter", 100, true]; 
_refreshed_StunMeter = 75;
_unitClassName = typeOf _unit;

systemChat (str _unitClassName);

_stunResist = getNumber (configFile >> "cfgVehicles" >> _unitClassName  >> "stunResistance");
if (_stunResist == nil) then
{
    _stunResist = 2;
};

systemChat ("Script Initialized. Unit Stun Resist:" + (str _stunResist));
_unit removeAllEventHandlers "HitPart";
_unit addEventHandler ["HitPart",
{
    _x params ["_target", "_shooter", "_projectile", "_position", "_velocity","_selection", "_ammo", "_vector", "_radius", "_surfaceType","_isDirect", "_instigator"];
    _target = _x select 0;
    _shooter = _x select 1;
    _selection = _x select 5;
    _ammo = _x select 6;

    systemChat("Target: " + (str _target));

    if ((_target == _shooter) or !(alive _target)) exitWith {};
    _ammoClassName = _ammo select 4;
    systemChat ("ammo CLASS NAME:" + (str _ammoClassName));
    _stunValue = getNumber (configFile >> "cfgAmmo" >> _ammoClassName >> "stunValue");
    systemChat ("ammo stun value:" + (str _stunValue));
    if !(_stunValue == nil) then  
    {
        systemChat ("ammo stun value:" + (str _stunValue));
        if ((_selection select 0) in ["head","neck"]) then 
        {
            _new_StunMeter = (_target getVariable "stunMeter") - ((_stunValue / _stunResist) * 2);
        } else {
            _new_StunMeter = (_target getVariable "stunMeter") - (_stunValue / _stunResist);
        };
        if (_new_StunMeter <= 0) exitWith 
        {
            [_target, [_shooter vectorModelToWorld [0,500,50], _target selectionPosition (_selection select 0), false]] remoteExec ["addForce", _target];
            [_unit, true] call ace_medical_fnc_setUnconscious;
        };
        systemChat ("stun DAMAGE:" + (str _new_StunMeter));
        _target setVariable ["stunMeter",_new_StunMeter,true];
       // systemChat ("stun HP:" + (str (_target getVariable "stunMeter")));
    };
}];

_stunRefresh = [{
    if (((_target getVariable "stunMeter") <= 0) && (_unit getVariable ["ACE_isUnconscious", false])) then
    {
        systemchat "refreshing unit stunMeter";
        _target setVariable ["stunMeter",_refreshed_StunMeter,true];
        [_unit, false] call ace_medical_fnc_setUnconscious;
    };
}, 120, [_unit, _refreshed_StunMeter]] call CBA_fnc_addPerFrameHandler;

waitUntil {sleep 100; 
if (isNull _unit) then {true} else {false};
};
[_stunRefresh] call CBA_fnc_removePerFrameHandler;