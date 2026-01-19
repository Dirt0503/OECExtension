private _addonConfig = configFile >> "CfgPatches" >> "OEC_Extension_Overwatch_Items_FortifyTool";
private _version = getArray(_addonConfig >> "version");

#include "OEC_XEHprep.sqf";

if!(isText (_addonConfig >> "currencyItem")) exitWith {};

OEC_Extension_currencyItem = getText(_addonConfig >> "currencyItem");

private _propertyName = "OEC_Extension_placeable";
private _placeableObjectsFilter = format["getNumber(x >> '%1') > 0", _propertyName];

OEC_Extension_placeableObjects = _placeableObjectsFilter configClasses (configFile >> "CfgVehicles") apply { [_x, 0] };

private _configSpecified = getArray(_addonConfig >> "externalPlaceables") apply { [_x,0] };
OEC_Extension_placeableObjects append _configSpecified;

private _placeableCount = count OEC_Extension_placeableObjects;

private _itemName = (configFile >> "CfgWeapons" >> OEC_Extension_currencyItem >> "displayName") call BIS_fnc_getCfgData;
[
    "OEC_Extension_useAmmo",
    "CHECKBOX",
    ["Use item as Ammo", format["Additionally to Money, require 1 %1 to use the Fortify Tool", _itemName]],
    ["OECExtension", "ACE(X) Fortify Tool"],
    false,
	1
] call CBA_settings_fnc_init;

[
    "OEC_Extension_usePreset",
    "CHECKBOX",
    ["Use OECExtension Fortify Preset", "If this box is checked, the OEC Extension Fortify Preset is loaded on mission start"],
    ["OECExtension", "ACE(X) Fortify Tool"],
    false,
    1,
    { [OEC_Extension_placeableObjects] call OEC_registerPreset}
] call CBA_settings_fnc_init;