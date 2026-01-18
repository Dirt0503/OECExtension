params ["_drone", "_unit"];

if (!(alive _unit)) exitWith {false;};
if (!(isPlayer _unit)) exitWith {false;};
if (!alive _drone) exitWith {false;};
if (isRemoteControlling _unit) exitWith {false;}; //Check if the player is remote controlling a drone.
if (unitIsUAV _unit) exitWith {false;};
if !(isNull objectParent _unit) exitWith {false;};
if (side _unit != side _drone) exitWith {false;};
if (abs (speed _drone) > 5) exitWith {false;};

private _anim = ["AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon", "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] select (stance _unit == "STAND");
[_unit, _anim] remoteExec ["switchMove", 0];	

_drone_class_undeployed = "OEC_Floor_Turret_Folded";


if ((secondaryWeapon _unit) == "") then 
{
	_unit addWeapon _drone_class_undeployed;
} 
else 
{
	private _item_holders = nearestObjects [_unit, ["WeaponHolder_Single_F","WeaponHolder","GroundWeaponHolder"], 5];
	private _item_holder = objNull;
	if (_item_holders isNotEqualTo []) then 
	{
		_item_holder = _item_holders select 0;
	};

	if (!isNull _item_holder) then 
	{
		_item_holder addWeaponCargo [_drone_class_undeployed, 1];
	} else {
		_item_holder = createVehicle ["WeaponHolder_Single_F", _unit modelToWorld [0,1,0.025], [], 0, "CAN_COLLIDE"];
		_item_holder setDir (getDir _unit);
		_item_holder addWeaponCargo [_drone_class_undeployed, 1];
	};
};

_magArray = magazinesAmmo _drone;
if (count _magArray > 0) then {
    _mag = _magArray select 0;
	_magAmmo = _mag select 1;


	if (_unit canAdd "OEC_Magazine_Turret") then {
		_unit addMagazine ["OEC_Magazine_Turret", _magAmmo];
	} else {
		private _item_holders = nearestObjects [_unit, ["WeaponHolder_Single_F","WeaponHolder","GroundWeaponHolder"], 5];
		private _item_holder = objNull;
		if (_item_holders isNotEqualTo []) then {
			_item_holder = _item_holders select 0;
		};
		
		if (!isNull _item_holder) then {
			_item_holder addMagazineAmmoCargo ["OEC_Magazine_Turret", 1, _magAmmo];
		} else {
			_item_holder = createVehicle ["WeaponHolder_Single_F", _unit modelToWorld [0,1,0.025], [], 0, "CAN_COLLIDE"];
			_item_holder setDir (getDir _unit);
			_item_holder addMagazineAmmoCargo ["OEC_Magazine_Turret", 1, _magAmmo];
		};
	};
};

if (isUAVConnected _drone) then
{
    private _user = UAVControl _drone;
    _user # 0 connectTerminalToUAV objNull;
};

// Delete the vehicle.
deleteVehicleCrew _drone;
deleteVehicle _drone;

true;
