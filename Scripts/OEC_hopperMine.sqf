params ["_unit", "_friendlySide"];


private _hopperLight = "#lightpoint" createVehicleLocal [0, 0, 0];
_hopperLight attachTo [_unit,[0,0,0.5]];
_hopperLight setLightColor [1, 0.55, 0];
_hopperLight setLightUseFlare true;
_hopperLight setLightFlareSize 0.25;
_hopperLight setLightFlareMaxDistance 30;
_hopperLight setLightDayLight true;
_hopperLight setLightIntensity 3000;



_mineIFF = [{
    _array = _this select 0;
    _mine = _array select 0;
    private _x = side _mine;
	
    private _nearbyUnits = _mine nearEntities ["Man", 12.5];
    {
        if (side _nearbyUnits == _friendlySide) then 
        {
            _hopperLight setLightColor [0, 0.75, 0];
            _mine enableSimulation false;
            break;
        };
    } forEach _nearbyUnits;

    private _isFriendlyNearby = false;
    {
        if (side _nearbyUnits == _friendlySide) then
        {
            _isFriendlyNearby = true;
            break;
        };
    } forEach _nearbyUnits;

    if (_isFriendlyNearby) then 
    {
        _hopperLight setLightColor [0, 0.75, 0];
        _mine enableSimulation false;
    } else {
        _hopperLight setLightColor [1, 0.55, 0];
        _mine enableSimulation true;
    }
}, 0.25, [_unit]] call CBA_fnc_addPerFrameHandler;



waitUntil {sleep 0.5; 
if (isNull _mine) exitWith { true };
!(alive _mine)
};
[_mineIFF] call CBA_fnc_removePerFrameHandler;