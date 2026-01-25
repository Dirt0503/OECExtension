params ["_player", "_side", "_objectDeleted"];
if!(local _player) exitWith{};
if (OEC_Extension_useAmmo) then
{
    
    private _objectDeletedStr = typeOf _objectDeleted;
    private _config = configFile >> "CfgVehicles" >> _objectDeletedStr;
    if!(istext (_config >> "displayName")) exitWith 
    {
        systemChat "Error getting barricade name!";
    };
    private _item_name = getText (_config >> "displayName");
    if(_item_name == "Barricade") then
    {
        ["OEC_Extension_addAmmo", [_player]] call CBA_fnc_localEvent;
    };
    if(_item_name == "Booth (Small)") then
    {
        ["OEC_Extension_addAmmo", [_player]] call CBA_fnc_localEvent;
        ["OEC_Extension_addAmmo", [_player]] call CBA_fnc_localEvent;
    };
    
};