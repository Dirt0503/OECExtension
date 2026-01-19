params["_placeableObjects"];

if (OEC_Extension_usePreset) then
{
    [west, 0, _placeableObjects] call ace_fortify_fnc_registerObjects;  
} else
{
    [west, 0, []] call ace_fortify_fnc_registerObjects;
};