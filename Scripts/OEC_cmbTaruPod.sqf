params ["_unit"];

_unit setMass 1000;
/*_chuteDeployed = 0;
_pos = getPosATL _unit;
_towParent = getTowParent _unit;
while {true} do
{
	sleep 1;
	if (_chuteDeployed == 0 && _pos select 2 > 15) then 
	{
		_chuteDeployed = 1;
		_pos = getPosATL _unit;
		_chute = createVehicle ["B_Parachute_02_F", _pos, [], 0, "CAN_COLLIDE"];
		_chute disableCollisionWith _unit;
		_unit attachTo [_chute,[0,0,1.8]];
	};
};*/
