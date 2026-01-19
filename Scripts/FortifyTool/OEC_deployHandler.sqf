params ["_unit", "_object", "_cost"];

if (OEC_Extension_useAmmo) exitWith
{
    private _can_fortify = OEC_Extension_currencyItem in (_unit call ace_common_fnc_uniqueItems);
    if(!_can_fortify) then
    {
        private _config = configFile >> "CfgWeapons" >> OEC_Extension_currencyItem;
        if!(istext (_config >> "displayName")) exitWith {};
        private _item_name = getText (_config >> "displayName");
        systemChat format ["You need at least 1 %1 to use the Fortify Tool!", _item_name];
    };
    _can_fortify
};
true
