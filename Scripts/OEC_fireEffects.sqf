params ["_unit"];

_unit setVariable ["fireMeter", -6, true];

//_unit removeAllEventHandlers "HitPart";
_unit addEventHandler ["HitPart", {
    (_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
    _munition = _ammo select 4;
    _isMunitionIncendiary = getNumber (configFile >> "cfgAmmo" >> _munition >> "incendiary");
    if (_target == _shooter || (!alive _target) || _isMunitionIncendiary != 1) exitWith {};
    _finalFlammable = ((_target getVariable "fireMeter") + 1);
    _target setVariable["fireMeter", _finalFlammable, true];
    systemchat ("new flammable:" + (str _finalFlammable));

    if((_target getVariable "fireMeter") > 0) then
    {
        [_target, (_target getVariable "fireMeter")] call ace_fire_fnc_burn;
    };
}]; 


while {(alive _unit) && !(isNull _unit)} do 
{
    uiSleep 20;
    _currentFlammable = (_unit getVariable "fireMeter");

    waitUntil 
    {
        if (_currentFlammable > -5) exitWith {true};
        !(alive _unit)
    };

    _newFlammable = _currentFlammable - 2;
    _unit setVariable ["fireMeter",_newFlammable,true];
    systemchat ("refreshed Flammable:" + (str _newFlammable));
};