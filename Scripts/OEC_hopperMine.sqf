params ["_unit"];

_hopperOrange = [1, 0.55, 0];
private _hopperLight = "#lightpoint" createVehicleLocal (getPos _unit);
_hopperLight lightAttachObject [_unit,[0,0,0.5]];
_hopperLight setLightColor _hopperOrange;
_hopperLight setLightUseFlare true;
_hopperLight setLightFlareSize 0.25;
_hopperLight setLightFlareMaxDistance 100;
_hopperLight setLightDayLight true;
_hopperLight setLightIntensity 3000;



_mineIFF = [{
    _array = _this select 0;
    _mine = _array select 0;
    _hopperLight = _array select 1;

    _hopperGreen = [0, 0.75, 0];
    _hopperOrange = [1, 0.55, 0];
    _hopperRed = [0.75, 0, 0];
	
    _nearbyUnits = _mine nearEntities [["Man"], 12];
    {
        _currentUnit = _nearbyUnits select _forEachIndex;
        if ((side _currentUnit) == west) then 
        {            
            _hopperLight setLightColor _hopperGreen;
            _mine enableSimulation false;
            break;
        };
    } forEach _nearbyUnits;


    private _isEnemyNearby = false;
    {
        _currentUnit = _nearbyUnits select _forEachIndex;
        if ((side _currentUnit) != west) then
        {
            _isEnemyNearby = true;
            break;
        };
    } forEach _nearbyUnits;

    if (_isEnemyNearby) then 
    {
        _hopperLight setLightColor _hopperRed;
        _mine enableSimulation true;
    } else {
        _hopperLight setLightColor _hopperOrange;
        _mine enableSimulation true;
    };


    private _isFriendlyNearby = false;
    {
        _currentUnit = _nearbyUnits select _forEachIndex;
        if ((side _currentUnit) == west) then
        {
            _isFriendlyNearby = true;
            break;
        };
    } forEach _nearbyUnits;

    if (_isFriendlyNearby) then 
    {
        _hopperLight setLightColor _hopperGreen;
        _mine enableSimulation false;
    };


}, 0.3, [_unit, _hopperLight]] call CBA_fnc_addPerFrameHandler;



waitUntil {sleep 0.5; 
if (isNull _unit) then {true} else {false};
};
deleteVehicle _hopperLight;
[_mineIFF] call CBA_fnc_removePerFrameHandler;