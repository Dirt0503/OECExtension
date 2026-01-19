["OEC_Extension_addAmmo", {
    player addItem OEC_Extension_currencyItem;
}] call CBA_fnc_addEventHandler;

["OEC_Extension_removeAmmo", {
    player removeItem OEC_Extension_currencyItem;
}] call CBA_fnc_addEventHandler;

[OEC_deployHandler] call acex_fortify_fnc_addDeployHandler;
["acex_fortify_objectPlaced", OEC_handleObjectPlaced] call CBA_fnc_addEventHandler;
["acex_fortify_objectDeleted", OEC_handleObjectDeleted] call CBA_fnc_addEventHandler;

[OEC_Extension_placeableObjects] call OEC_registerPreset;