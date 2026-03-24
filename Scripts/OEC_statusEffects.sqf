params ["_unit"];

_unit setVariable ["stunMeter", 100, true];
_refreshed_StunMeter = 75;
_unitClassName = str _unit;
_stunResist = getNumber (configFile >> "cfgVehicles" >> _unitClassName  >> "stunResistance");
if (_stunResist = nil) then
{
    _stunResist = 2;
};

systemChat "Script Initialized. Unit Stun Resist:" + (str _stunResist);

[_unit, {
_this removeAllEventHandlers "HitPart";
_this addEventHandler ["HitPart",
    {
		(_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
		if ((_target == _shooter) or !(alive _target)) exitWith {};
		switch true do 
        {
            _ammoClassName = _this select 4;
            systemChat "Ammo Classname:" + (str _ammoClassName);

            _stunValue = getNumber (configFile >> "cfgAmmo" >> _ammoClassName >> "stunValue");
            systemChat "stun Value:" + (str _stunValue);

			If !(_stunValue = nil) then  
            {
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
				_target setVariable ["stunMeter",_new_StunMeter,true];
			};
		};
	}];
}] remoteExec ["spawn",0,true];

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