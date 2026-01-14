/* =================================================
   Author: 
      	HBTurpin
	Description:
		This function will make the player place a drone as their feet based on if they have the item in their inventory or if its on the floor (WeaponHolder/GroundWeaponHolder)
	Arguments:
		0: Object - WeaponHolder / Player
		1: String - Magazine / Item
		2: Object - Player
		3: String - Method (GROUND/FLY/THROW) (Defaults to GROUND)
		4: Boolean - Auto Connect (Defaults to true) (If the player should be auto connected to the drone if possible)
	Return:
		Boolean
* =================================================*/

params ["_item_holder", "_item", "_unit", ["_method", "DEFAULT"], ["_auto_connect", true], ["_magazine_count", -1]];


// No item specified, lets not spawn anything.
if (_item == "") exitWith {false;};

// Set item config to be magazine or weapons depending if it exists or not
private	_item_config = (configFile >> "cfgWeapons" >> _item);

// No item found in config, exit function.
if (!isClass (_item_config)) exitWith {false;};

// See if drone class can be found from the magazine/item config
private _drone_class = getText (_item_config >> "GX_Drone");

// Adjust DEFAULT to correct method based on settings
if (_method == "DEFAULT") then {
	_method = getText (_item_config >> "GX_DroneDefaultDeployMethod");
	if (_method == "") then {
		_method = "GROUND"; // Fallback to GROUND if nothing set.
	};
};

// Check if the player has an available magazine, if not ensure we return no drone class...
if(typeOf _item_holder in ["WeaponHolder", "GroundWeaponHolder","WeaponHolder_Single_F"]) then {
	private _cargo = magazineCargo _item_holder;
	// Ensure single item in holder...
	if (count _cargo > 1) exitWith {
		_drone_class = "";
	};
	// hasItem doesn't work with weaponholders....
	if !(_item in _cargo) exitWith {
		_drone_class = "";
	};
} else {
	// Check if the item exists in the players inventory.
	private _cargo = (magazines _item_holder);
	if !(_item in _cargo) exitWith {
		_drone_class = "";
	};
};

// Stop if no drone class has been found
if (_drone_class == "") exitWith {false;}; 

// Remove magazine or item from inventory
private	_magazine_count_max = getNumber (_item_config >> "count");
if(typeOf _item_holder in ["WeaponHolder", "GroundWeaponHolder","WeaponHolder_Single_F"]) then {
	_magazine_count = (((magazinesAmmo _item_holder) # 0) # 1);
	deleteVehicle _item_holder;
} else {
	if (_magazine_count == -1) then {
		_item_holder removeMagazine _item; 
		_magazine_count = _magazine_count_max;
	} else {
		[_item_holder, _item, _magazine_count] call GX_fnc_drone_removeMagazineOfCount;
	};
};

// Calculate fuel amount based on config
private _drone_fuel = _magazine_count / _magazine_count_max;

// Spawn the drone based on the selected method
private _return = [_unit, _drone_class, _method, _auto_connect, _drone_fuel] call GX_fnc_drone_deploy;

// Return true as drone has been spawned
_return;
