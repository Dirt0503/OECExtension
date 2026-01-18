params ["_player"];

_drone_class = "OEC_Floor_Turret";
_drone_class_undeployed = "OEC_Floor_Turret_Folded";

if (secondaryWeapon _player == _drone_class_undeployed) then
{

	_player removeWeapon _drone_class_undeployed;

	_anim = ["AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon", "AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"] select (stance _player == "STAND");
	[_player, _anim] remoteExec ["switchMove", 0];	

	_player_pos = _player getPos [ 2.0 , getDir _player ]; 
	_drone_pos = [_player_pos select 0, _player_pos select 1, ((getPosASL _player) select 2)];

	_drone = createVehicle [_drone_class, _drone_pos, [], 0, "CAN_COLLIDE"];

	if ((_drone_pos select 2) < (getTerrainHeightASL _drone_pos)) then 
	{
		// Adjust the position to be above the terrain, this is a bit of a hack but it works
		_drone_pos = [_player_pos select 0, _player_pos select 1, (getTerrainHeightASL _drone_pos) + 0.05];
	};

	_drone setPosASL _drone_pos;
	_drone setVectorDirAndUp [vectorDir _player, vectorUp _player];

	createVehicleCrew _drone;
	crew _drone join createGroup (WEST);
	{
		_x setBehaviour AWARE;
		_x setSkill ["general", 0.85];
		_x setSkill ["spotTime", 0.85];
		_x setSkill ["aimingSpeed", 0.85];
		_x setSkill ["aimingAccuracy", 1];
		_x setSkill ["spotDistance", 0.85];
	} forEach (crew _drone);

	if (isNull (remoteControlled _player)) then 
	{
		[_player, _drone] spawn 
		{
			params ["_player", "_drone"];
			
			sleep 0.5;

			_player connectTerminalToUAV _drone;
		};
	};
	true;
};

/*