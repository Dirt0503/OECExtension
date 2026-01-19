params ["_player", "_side", "_objectPlaced"];
if!(local _player) exitWith {};
if (OEC_Extension_useAmmo) then
{
    ["OEC_Extension_removeAmmo", [_player]] call CBA_fnc_localEvent;
};