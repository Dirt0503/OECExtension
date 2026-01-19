params ["_player", "_side", "_objectDeleted"];
if!(local _player) exitWith{};
if (OEC_Extension_useAmmo) then
{
    ["OEC_Extension_addAmmo", [_player]] call CBA_fnc_localEvent;
};