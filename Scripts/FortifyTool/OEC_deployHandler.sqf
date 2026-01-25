params ["_unit", "_object", "_cost"];

if (OEC_Extension_useAmmo) exitWith
{
    private _objectStr = typeOf _object;
    private _objectConfig = configFile >> "CfgVehicles" >> _objectStr;
    private _objectName = getText (_objectConfig >> "displayName");
    private _itemMap = _unit call ace_common_fnc_uniqueUnitItems;
    private _containsCurrency = OEC_Extension_currencyItem in _itemMap;
    private _numCurrency = _itemMap get OEC_Extension_currencyItem;
    private _can_fortify = true;
    private _config = configFile >> "CfgWeapons" >> OEC_Extension_currencyItem;

    if!(istext (_config >> "displayName")) exitWith {};
    private _item_name = getText (_config >> "displayName");

    if(_objectName == "Barricade") then 
    {
        if(!_containsCurrency) then
        {
            _can_fortify = false;
        };
        if(_can_fortify == false) then
        {
            systemChat format ["You need at least 1 %1 to deploy this fortification!", _item_name];
        };
    };

    if(_objectName == "Booth (Small)") then
    {
        if(_numCurrency < 2) then
        {
            _can_fortify = false;
        };
        if(_can_fortify == false) then
        {
            systemChat format ["You need at least 2 %1 to deploy this fortification!", _item_name];
        };
    };
    _can_fortify;
};
true