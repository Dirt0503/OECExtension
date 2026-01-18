params ["_drone", "_unit"];

_neededAmmo = 200;
_carryMag = "OEC_Magazine_Turret";

private _onFinish = {
	(_this select 0) params ["_unit", "_drone"];

	private _magPresent = false;
	if ("OEC_Magazine_Turret" in (magazines _unit)) then 
    {
        private _bestAmmoToSend = -1;
		{
			_x params ["_xMag", "_xAmmo"];
			if (_xMag == _carryMag) then {
				if ((_bestAmmoToSend == -1) || {(_xAmmo > _bestAmmoToSend) && {_xAmmo <= _neededAmmo}}) then {
					_bestAmmoToSend = _xAmmo;
				};
			};
		} forEach {magazinesAmmo _unit};

        _drone addMagazine ["OEC_Magazine_Turret", _bestAmmoToSend];
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
/*
_mags = magazines _unit;
if ("OEC_Magazine_Turret" in (magazines _unit)) then 
{
    [5, [_unit, _drone], _onFinish, _onFailure, "Reloading Sterilizer..."] call ace_common_fnc_progressBar;
};