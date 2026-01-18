params ["_drone", "_unit"];

_neededAmmo = 200;

private _onFinish = {
	(_this select 0) params ["_unit", "_drone"];

	private _magPresent = false;
	if ("OEC_Magazine_Turret" in (magazines _unit)) then 
    {
        private _bestAmmoToSend = -1;
		{
			_x params ["_xMag", "_xAmmo"];

			if (_xMag == "OEC_Magazine_Turret") then 
			{
				if ((_bestAmmoToSend == -1) || {(_xAmmo > _bestAmmoToSend) && {_xAmmo <= _neededAmmo}}) then 
				{
					_bestAmmoToSend = _xAmmo;
				};
			};
		} forEach (magazinesAmmo _unit);

		_magArray = magazinesAmmo _drone;
		if (count _magArray > 0) then 
		{
			_mag = _magArray select 0;
			_magAmmo = _mag select 1;
			if (_unit canAdd "OEC_Magazine_Turret") then 
			{
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
		_drone removeMagazine "OEC_Magazine_Turret";
        _drone addMagazineTurret ["OEC_Magazine_Turret",[0], _bestAmmoToSend];
	    _unit removeMagazine "OEC_Magazine_Turret";
		_magPresent = true;
	};

	if (!_magPresent) exitWith {false;};

	private _anim = ["AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon", "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] select (stance _unit == "STAND");
	[_unit, _anim] remoteExec ["switchMove", 0];	

	true;
};

private _onFailure = {
	(_this select 0) params ["_unit", "_drone"];
	[_unit, "AmovPknlMstpSrasWrflDnon"] remoteExec ["switchMoveNow", 0];	
};

_mags = magazines _unit;
if ("OEC_Magazine_Turret" in (magazines _unit)) then 
{
    [1, [_unit, _drone], _onFinish, _onFailure, "Reloading Sterilizer..."] call ace_common_fnc_progressBar;
};