params ["_player", "_side", "_objectPlaced"];
if!(local _player) exitWith {};
if (OEC_Extension_useAmmo) then
{

    private _objectPlacedStr = typeOf _objectPlaced;
    private _config = configFile >> "CfgVehicles" >> _objectPlacedStr;
    if(!istext (_config >> "displayName")) exitWith {};
    private _item_name = getText (_config >> "displayName");
    if(_item_name == "Barricade") then
    {
        ["OEC_Extension_removeAmmo", [_player]] call CBA_fnc_localEvent;
    };
    if(_item_name == "Booth (Small)") then
    {
        ["OEC_Extension_removeAmmo", [_player]] call CBA_fnc_localEvent;
        ["OEC_Extension_removeAmmo", [_player]] call CBA_fnc_localEvent;
    };

};