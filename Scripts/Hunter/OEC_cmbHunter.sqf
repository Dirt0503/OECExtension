_unitWithSword = _this;

if (isPlayer _unitWithSword) exitWith 
{
	systemChat ":3";
	_unitWithSword setSpeaker "NoVoice";
	_unitWithSword setVariable ["dam_ignore_hit0",true,true];
	_unitWithSword setVariable ["dam_ignore_effect0",true,true];
	_unitWithSword disableConversation true;
	_unitWithSword setVariable ['IMS_IsUnitInvicibleScripted',1,true];
	_unitWithSword setVariable ["WBK_StriderRounds",20];
	_unitWithSword setVariable ["WBK_StriderArmor",200];
	_unitWithSword setVariable ["WBK_HunterCanCharge",nil];
	_unitWithSword setVariable ["WBK_HunterCanScan",nil];
	_unitWithSword allowDamage false;

	_SynthmainGun = "WBK_Strider_MainCanon" createVehicle [0,0,0];
	_SynthmainGun attachTo [_unitWithSword,[-0.08,1.2,1.75]]; 
	_SynthmainGun setDir 90;
	_SynthmainGun1 = "WBK_Strider_MainCanon" createVehicle [0,0,0];
	_SynthmainGun1 attachTo [_unitWithSword,[-0.08,1.2,1.45]]; 
	_SynthmainGun1 setDir 90;
	[_SynthmainGun, true] remoteExec ["hideObject", 0,true]; 
	[_SynthmainGun1, true] remoteExec ["hideObject", 0,true]; 
	_unitWithSword setVariable ["WBK_SynthObjects",[_SynthmainGun,_SynthmainGun1]];

	_unitWithSword removeAllEventHandlers "Killed";
	_unitWithSword addEventHandler ["Killed", 
	{
		_zombie = _this select 0;
		_zombie spawn WBK_HunterPlayDeathAnim;
	}];

	_unitWithSword removeAllEventHandlers "Explosion";
	_unitWithSword addEventHandler ["Explosion", 
	{
		_unit = _this select 0;
		_source = _this select 3;

		systemChat "EXPLOSION TRIGGERED!";
		systemChat str _source;
	}];

	_unitWithSword removeAllEventHandlers "HandleDamage";
	_unitWithSword addEventHandler ["HandleDamage", 
	{
		_unit = _this select 0;
		_hitter = _this select 3;
		_projectile = _this select 4;
		_directHit = _this select 8;
		if(_projectile == "") exitWith
		{
		};
		if(_directHit) exitWith
		{
			systemChat "damage was dealt by " + (str _projectile);
			systemChat str _directHit;

			_ammoConfig = configFile >> "CfgAmmo" >> _projectile >> "caliber";
			_ammoConfigHit = configFile >> "CfgAmmo" >> _projectile >> "hit";
			if(!isNumber(_ammoConfig) || !isNumber(_ammoConfigHit)) then
			{
				systemChat "HEEEEELP!!! HELP ME!!";
			};
			_damage = getNumber (_ammoConfigHit);
			_caliber = getNumber (_ammoConfig);
			if (_caliber <= 0) then {_caliber = 2};
			if (_caliber > 6) then {_caliber = 6};
			if ((animationState _unit == "hunter_die_2") or (animationState _unit == "hunter_die_1")) exitWith {};

			if(_ammoConfigHit == nil) exitWith
			{
				hint "WE'RE ALL GONNA DIE!";
			};

			if (!(_unit == _hitter) and !(isNull _hitter)) exitWith 
			{
				systemChat str _damage;

				if (currentWeapon _hitter == secondaryWeapon _hitter) exitWith 
				{
					_vv = _unit getVariable "WBK_StriderArmor";
					_new_vv = _vv - (_damage * 1.75);
					if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
					_unit setVariable ["WBK_StriderArmor",_new_vv];
					[_unit, selectRandom ["hunter_stagger","hunter_hitHard"]] remoteExec ["switchMove", 0];
					systemChat str(_unit getVariable "WBK_StriderArmor");
				};
				
				_vv = _unit getVariable "WBK_StriderArmor";
				_caliberCoef = 3 / _caliber;
				_damageModified = _damage / _caliberCoef;
				_new_vv = _vv - _damageModified;
				if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
				if (_damage >= 25) then {[_unit, selectRandom ["hunter_stagger","hunter_hitHard"]] remoteExec ["switchMove", 0];};
				_unit setVariable ["WBK_StriderArmor",_new_vv];
				systemChat str(_unit getVariable "WBK_StriderArmor");
			};
		};
		systemChat "indirect hit.. skipping direct hit logic";
		_ammoConfigExplosiveHit = configFile >> "CfgAmmo" >> _projectile >> "indirectHit";
		_damage = getNumber (_ammoConfigExplosiveHit);

		if (!(_unit == _hitter) and !(isNull _hitter)) exitWith
		{
			systemChat str _damage;
				
			_vv = _unit getVariable "WBK_StriderArmor";
			_new_vv = _vv - _damage;
			if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
			if (_damage >= 25) then {[_unit, selectRandom ["hunter_stagger","hunter_hitHard"]] remoteExec ["switchMove", 0];};
			_unit setVariable ["WBK_StriderArmor",_new_vv];
			systemChat str(_unit getVariable "WBK_StriderArmor");
		};
	}];
};


_unitWithSword setUnitPos "UP";
_unitWithSword setVariable ["WBK_AI_ISZombie",0, true];
_unitWithSword setVariable ['isMutant', true];
_unitWithSword setSpeaker "NoVoice";
_unitWithSword setVariable ["dam_ignore_hit0",true,true];
_unitWithSword setVariable ["dam_ignore_effect0",true,true];
_unitWithSword disableConversation true;
_unitWithSword setVariable ['IMS_IsUnitInvicibleScripted',1,true];
_unitWithSword setVariable ["WBK_StriderRounds",2];
_unitWithSword allowFleeing 0;
_unitWithSword setVariable ["WBK_SynthHP",100];



_SynthmainGun = "WBK_Strider_MainCanon" createVehicle [0,0,0];
_SynthmainGun attachTo [_unitWithSword,[-0.08,1.2,1.75]]; 
_SynthmainGun setDir 90;
_SynthmainGun1 = "WBK_Strider_MainCanon" createVehicle [0,0,0];
_SynthmainGun1 attachTo [_unitWithSword,[-0.08,1.2,1.45]]; 
_SynthmainGun1 setDir 90;
[_SynthmainGun, true] remoteExec ["hideObject", 0,true]; 
[_SynthmainGun1, true] remoteExec ["hideObject", 0,true]; 
_unitWithSword setVariable ["WBK_SynthObjects",[_SynthmainGun,_SynthmainGun1]];



_unitWithSword addEventHandler ["Suppressed", {
params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
if (!(alive _unit)) exitWith {};
_unit reveal [_instigator, 4];
}];


_unitWithSword addEventHandler ["FiredNear", {
params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];
if (!(alive _unit)) exitWith {};
_unit reveal [_firer, 4];
}];


_unitWithSword addEventHandler ["Killed", {
_zombie = _this select 0;
_zombie spawn WBK_HunterPlayDeathAnim;
}];

_unitWithSword addEventHandler ["HandleDamage", {
_unit = _this select 0;
if ((animationState _unit == "hunter_die_2") or (animationState _unit == "hunter_die_1")) exitWith {};
_hitter = _this select 3;
_projectile = _this select 4;
if (!(_unit == _hitter) and !(isNull _hitter)) then {
if (currentWeapon _hitter == secondaryWeapon _hitter) exitWith {
_unit spawn WBK_HunterPlayDeathAnim;
};
if (_projectile == "HL_CMB_G_Comball") exitWith {
_vv = _unit getVariable "WBK_SynthHP";
_new_vv = _vv - 30;
if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
_unit setVariable ["WBK_SynthHP",_new_vv];
[_unit, selectRandom ["hunter_stagger","hunter_hitHard"]] remoteExec ["switchMove", 0]; 
_unit enableAI "MOVE";
};
if (!((vehicle _hitter) isKindOf "MAN")) exitWith {
_vv = _unit getVariable "WBK_SynthHP";
_new_vv = _vv - 10;
if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
_unit setVariable ["WBK_SynthHP",_new_vv];
};
if (_projectile == "HL_CMB_B_Pulse_Ball") exitWith {
_vv = _unit getVariable "WBK_SynthHP";
_new_vv = _vv - 4;
if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
_unit setVariable ["WBK_SynthHP",_new_vv];
};

if ((_projectile == "B_12Gauge_Pellets") and ((_unit distance _hitter) <= 10)) exitWith {
_vv = _unit getVariable "WBK_SynthHP";
_new_vv = _vv - 4;
if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
_unit setVariable ["WBK_SynthHP",_new_vv];
[_unit, selectRandom ["hunter_stagger","hunter_hitHard"]] remoteExec ["switchMove", 0];
_unit enableAI "MOVE";
};

_vv = _unit getVariable "WBK_SynthHP";
_new_vv = _vv - 2;
if (_new_vv <= 0) exitWith {_unit spawn WBK_HunterPlayDeathAnim;};
_unit setVariable ["WBK_SynthHP",_new_vv];
};
}];

_actFr = [{
    _array = _this select 0;
    _mutant = _array select 0;
	_mutant allowDamage false;
	if ((animationState _mutant == "hunter_charge_crash") or (animationState _mutant == "hunter_charge_loop") or (animationState _mutant == "hunter_charge_start") or (animationState _mutant == "hunter_charge_finish") or (animationState _mutant == "hunter_die_1") or (animationState _mutant == "hunter_die_2") or (animationState _mutant == "hunter_SyncAnim") or (animationState _mutant == "hunter_melee") or !(isTouchingGround _mutant) or (animationState _mutant == "hunter_stagger") or (animationState _mutant == "hunter_hitHard") or (animationState _mutant == "hunter_FirePosition_Out") or (animationState _mutant == "hunter_FirePosition_Fire") or (animationState _mutant == "hunter_FirePosition_Pre") or !(alive _mutant)) exitWith {};
    _mutant action ["SwitchWeapon", _mutant, _mutant, 100]; 
	removeAllWeapons _mutant;
	_mutant disableAI "MINEDETECTION";
	_mutant disableAI "WEAPONAIM";
	_mutant disableAI "SUPPRESSION";
	_mutant disableAI "COVER";
	_mutant disableAI "AIMINGERROR";
	_mutant disableAI "TARGET";
	_mutant disableAI "AUTOCOMBAT";
	_mutant disableAI "FSM";
	_mutant setBehaviour "CARELESS";
	_en = _mutant call WBK_Combine_FindTarget;
	_ins = lineIntersectsSurfaces [
		aimPos _mutant,
		aimPos _en,
		_mutant,
		_en,
		true,
		1,
		"GEOM",
		"NONE"
    ];
	if (((isNull _en) or !(alive _en) or (count _ins > 0) or ((_mutant getVariable "WBK_StriderRounds") <= 0) or ((_en distance _mutant) <= 10)) and (animationState _mutant == "hunter_FirePosition_Loop")) then {
	_mutant enableAI "MOVE";
	[_mutant, "hunter_FirePosition_Out"] remoteExec ["switchMove", 0]; 
	};
	if ((count _ins == 0) and ((_mutant getVariable "WBK_StriderRounds") > 0) and ((_en distance _mutant) > 10) and ((_en distance _mutant) <= 220) and (animationState _mutant == "hunter_FirePosition_Loop") and !(isNull _en) and (alive _en)) then {
	_mutant setFormDir (_mutant getDir _en);
	[_mutant,_mutant getVariable "WBK_SynthObjects",_en] spawn WBK_SynthFire_AI_Hunter;
	};
	if (((_mutant getVariable "WBK_StriderRounds") > 0) and ((_en distance _mutant) > 10) and ((_en distance _mutant) <= 220) and (count _ins == 0) and !(isNull _en) and (alive _en) and !(animationState _mutant == "hunter_FirePosition_Loop") and !(animationState _mutant == "hunter_FirePosition_Fire")) then {
	_mutant setFormDir (_mutant getDir _en);
	[_mutant, "hunter_FirePosition_Pre"] remoteExec ["switchMove", 0]; 
	[_mutant,selectRandom ["WBK_hunter_alert1","WBK_hunter_alert2","WBK_hunter_alert3"],100] call CBA_fnc_GlobalSay3D;
	};
	if ((count _ins == 0) and (getText (configfile >> 'CfgVehicles' >> typeOf _en >> 'moves') == 'CfgMovesMaleSdr') and (isNil {_mutant getVariable "WBK_HunterCanCharge"}) and ((_en distance _mutant) <= 15) and ((_en distance _mutant) > 7) and !(isNull _en) and (alive _en)) then {
	_mutant setFormDir (_mutant getDir _en);
	_mutant spawn WBK_HunterCharge;
	};
    if ((count _ins == 0) and ((_en distance _mutant) <= 3.5) and (alive _mutant) and !(lifeState _en == "INCAPACITATED")) then {
	if ((((damage _en) >= 0.4) or !(isPlayer _en)) and (getText (configfile >> 'CfgVehicles' >> typeOf _en >> 'moves') == 'CfgMovesMaleSdr')) exitWith {
	[_mutant, _en] spawn WBK_HumanSynthHunter_Execution;
	};
	[_mutant, _en] spawn WBK_HunterCloseAttack;
	};
}, 0.4, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;



_actFr_Loop = [{
    _array = _this select 0;
    _unit = _array select 0;
	_nearEnemy = _unit call WBK_Combine_FindTarget;
	if (((_nearEnemy distance _unit) <= 320) and ((animationState _unit == "hunter_charge_start") or (animationState _unit == "hunter_charge_loop") or (animationState _unit == "hunter_FirePosition_Pre") or (animationState _unit == "hunter_FirePosition_Loop") or (animationState _unit == "hunter_FirePosition_Fire")) and !(isNull _nearEnemy) and (alive _nearEnemy)) then {
	_ins = lineIntersectsSurfaces [
		AGLToASL (_unit modelToWorld [0,0,0.5]), 
		AGLToASL (_unit modelToWorld [0,1,0.5]), 
		_unit,
		_nearEnemy,
		true,
		1,
		"GEOM",
		"NONE"
    ];
	if ((animationState _unit == "hunter_charge_loop") and (count _ins > 0)) exitWith {
	[_unit, "hunter_charge_crash"] remoteExec ["switchMove", 0];
	_unit spawn {uiSleep 3; _this enableAI "ANIM"; _this enableAI "MOVE";};
	[_unit, selectRandom ["WBK_hunter_pain_1","WBK_hunter_pain_2"], 85, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
	[_unit, "dobi_CriticalHit", 125, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
	};
	if ((animationState _unit == "hunter_charge_loop") and ((_unit distance _nearEnemy) <= 2.1)) exitWith {
	if !(isNil {_nearEnemy getVariable "IMS_IsUnitInvicibleScripted"}) exitWith {
	[_unit, "hunter_charge_finish"] remoteExec ["switchMove", 0];
	_unit enableAI "MOVE";
	_unit enableAI "ANIM";
	};
	[_nearEnemy, [_unit vectorModelToWorld [0,2000,400], _nearEnemy selectionPosition "head"]] remoteExec ["addForce", _nearEnemy];
	[_unit, "hunter_charge_finish"] remoteExec ["switchMove", 0];
	[_unit, selectRandom ["WBK_hunter_foundenemy1","WBK_hunter_foundenemy2","WBK_hunter_foundenemy3"], 85, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
	[_nearEnemy, "dobi_CriticalHit", 155, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
	[_nearEnemy, "leg_hit1", 155, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
	[_nearEnemy, 0.5, _unit] remoteExec ["WBK_CreateDamage", _nearEnemy];
	_nearEnemy spawn {uiSleep 9; [_this, false] remoteExec ["setUnconscious", _this];};
	_unit enableAI "MOVE";
	_unit enableAI "ANIM";
	};
	_dir = [[0,1,0], -([_unit, _nearEnemy] call BIS_fnc_dirTo)] call BIS_fnc_rotateVector2D;
    _unit setVelocityTransformation [ 
        getPosASL _unit,  
        getPosASL _unit,  
        [0,0,(velocity _unit select 2)],  
        [(velocity _unit select 0),(velocity _unit select 1),(velocity _unit select 2)-1], 
        vectorDir _unit,  
        _dir,  
        vectorUp _unit,  
        vectorUp _unit, 
        0.1
    ]; 
	};
}, 0.01, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;




_loopPathfindDoMove = [{
    _array = _this select 0;
    _unit = _array select 0;
	if ((lifeState _unit == "INCAPACITATED") or !(alive _unit)) exitWith {};
	_nearEnemy = _unit call WBK_Combine_FindTarget;
    if ((isNull _nearEnemy) or !(alive _nearEnemy) or !(alive _unit) or !(_unit checkAIFeature "MOVE")) exitWith {};
		if ((alive leader group _unit) and !(_unit == leader group _unit) and ((_unit distance (leader group _unit)) <= 40)) then {
		_pos = _nearEnemy modelToWorldVisual [40,25,0]; 
        _unit doMove _pos;
		}else{
		_pos = ASLtoAGL getPosASLVisual _nearEnemy;
		_unit doMove _pos;
		};
}, 3.5, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;

waitUntil {sleep 0.5; 
if (isNull _unitWithSword) exitWith { true };
(!(alive _unitWithSword) or (animationState _unitWithSword == "hunter_die_2") or (animationState _unitWithSword == "hunter_die_1"))
};
[_actFr] call CBA_fnc_removePerFrameHandler;
[_loopPathfindDoMove] call CBA_fnc_removePerFrameHandler;
[_actFr_Loop] call CBA_fnc_removePerFrameHandler;
