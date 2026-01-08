_unitWithSword = _this;
if ((isPlayer _unitWithSword) or !(isNil {_unitWithSword getVariable "WBK_AI_ISZombie"}) or !(alive _unitWithSword)) exitWith {};
removeAllWeapons _unitWithSword;
_unitWithSword setUnitPos "UP";
_unitWithSword setVariable ["WBK_AI_ISZombie",true,true];
_unitWithSword setVariable ["WBK_AI_ZombieMoveSet","WBK_CustomCreature",true];
_unitWithSword setVariable ["WBK_SynthHP",70,true];
_unitWithSword setSpeaker "NoVoice";
_unitWithSword disableConversation true;

_unitWithSword spawn {
	uisleep 0.5;
	_this doMove (ASLtoAGL getPosASLVisual _this);
};


WBK_Antlion_Explode = {
	[_this, {
		if (isDedicated) exitWith {};
		_object = _this;
		_this hideObject true;
		_breath = "#particlesource" createVehicleLocal (getposATL _object);                      
		_breath setParticleParams            
			[            
				["\a3\Data_f\ParticleEffects\Universal\meat_ca", 1, 0, 1],      
				"",          
				"spaceObject",        
				0.5, 12,        
				[0, 0, 0],    
				[0, 0, random 3],
				1,1.275,0.2,0,          
				[5.6,0],     
				[[1,0.5,0,1],[1,0.2,0,1],[1,0.2,0,1]],      
				[1000],     
				1,         
				0.1,        
				"",    
				"",     
				"",         
				0,       
				false,          
				0.1,
				[[255,102,0,1],[255,102,0,1],[255,102,0,1]]
			];            
		_breath setParticleRandom [0.5, [0, 0, 0], [5.25, 5.25, 2.25], 1, 0.5, [0, 0, 0, 0.1], 0, 0, 10];      
		_breath setDropInterval 0.01;     
		_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
		_fulgi setPosATL (getPosATL _this);
		_fulgi setParticleRandom  [0.5, [0, 0, 0], [5.25, 5.25, 4.25], 1, 0.5, [0, 0, 0, 0.1], 0, 0, 10];  
		_fulgi setDropInterval 0.025;
		_fulgi setParticleCircle [0, [0, 0, 0]];
		_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,17,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[1,0.4,0,1]],[1],0,0,"","",_fulgi, 0, false, 0.1, [[255,102,0,1],[255,102,0,1],[255,102,0,1]]]; 
		_fulgi say3D [selectRandom ["WBK_antlion_explode_1","WBK_antlion_explode_2","WBK_antlion_explode_3"],300];
		_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
		_smlfirelight setPosATL (getPosATL _this);
		_smlfirelight setLightAmbient [1, 0.4, 0.1];
		_smlfirelight setLightColor [1, 0.4, 0.1];
		_smlfirelight setLightBrightness 0.51;
		_smlfirelight setLightUseFlare true;
		_smlfirelight setLightDayLight true;
		_smlfirelight setLightFlareSize 2;
		_smlfirelight setLightFlareMaxDistance 400; 
		_blood = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood attachTo [_object,[0,0,0],"pilot"];  
		_blood setParticleParams [ 
				["\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke",4,0,15,1],          
				"",   
				"billboard",  
				0.01, 2,        
				[0, 0, 0],    

				[10 + random -6, 10 + random -6, random 15],         
				5, 6, 0.4, 0.4,         
				[0.05, 1.4],       
				[[1,0.5,0,1],[1,0.2,0,1],[1,0.2,0,1]],    
				[1],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360,        
				false,          
				-1,  
				[[255,102,0,1],[255,102,0,1],[255,102,0,1]]
			];
		_blood setdropinterval 1;   
		_blood2 = "#particlesource" createVehicleLocal (getposATL _object);          
		_blood2 attachTo [_object,[0,0,0],"pilot"];  
		_blood2 setParticleParams [ 
				["\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke",4,0,15,1],           
				"",          
				"billboard",     
				0.01, 2,        
				[0, 0, 0],         

				[random -6, random -8, random 6],           
				5, 6, 0.4, 0.4,           
				[0.05, 1.4],   
				[[1,0.5,0,1],[1,0.2,0,1],[1,0.2,0,1]],    
				[1],    
				0.4,    
				0.4,    
				"",    
				"",    
				"",   
				360,        
				false,        
				-1,
				[[255,102,0,1],[255,102,0,1],[255,102,0,1]]
			];
		_blood2 setdropinterval 1;  
		{
			_x attachTo [_this,[0,0,0],"pilot"];
		} forEach [_breath,_smlfirelight,_blood,_blood2,_fulgi];
		uisleep 0.2;
		deleteVehicle _breath;
		deleteVehicle _smlfirelight; 
		uisleep 0.2;
		deleteVehicle _blood; 
		deleteVehicle _blood2; 
		uiSleep 0.5;
		deleteVehicle _fulgi; 
	}] remoteExec ["spawn", [0,-2] select isDedicated,false];
	{
		if (!(animationState _x in ["antlion_sync_main_1","antlion_sync_main_2"]) and (alive _x) and (isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr')) then {
			[_x,2,_this] remoteExec ["concentrationToZero", _x, false];
		};
	} forEach nearestObjects [_this,["MAN"],4];
	_gib1 = createVehicle ["WBK_Antlion_Gib_1",ASLToATL eyePos _this, [], 0, "CAN_COLLIDE"];
	_gib2 = createVehicle ["WBK_Antlion_Gib_2",ASLToATL eyePos _this, [], 0, "CAN_COLLIDE"];
	_gib3 = createVehicle ["WBK_Antlion_Gib_3",ASLToATL eyePos _this, [], 0, "CAN_COLLIDE"];
	_gib4 = createVehicle ["WBK_Antlion_Gib_4",ASLToATL eyePos _this, [], 0, "CAN_COLLIDE"];
	_gib4 setVelocityModelSpace [0, 10, 3];
	_gib3 setVelocityModelSpace [0, -10, 3];
	_gib2 setVelocityModelSpace [10, 0, 3];
	_gib1 setVelocityModelSpace [-10, 0, 3];
	uiSleep 5;
	deleteVehicle _this;
	uiSleep 60;
	{
		deleteVehicle _x;
	} forEach [_gib1,_gib2,_gib3,_gib4];
};


WBK_AntlionSyncKill_1 = {
_antlion = _this select 0;
_victim = _this select 1;
[_victim, "ALL"] remoteExec ["disableAI", _victim]; 
_antlion setDamage 0;
_victim setVariable ["canMakeAttack",1,true];
_victim setVariable ["AI_CanTurn",1,true];
_victim setVariable ["actualSwordBlock",0,true];
_antlion attachTo [_victim,[0,0.72,0]];
[_antlion, 180] remoteExec ["setDir", 0]; 
[_antlion, "antlion_sync_main_1"] remoteExec ["switchMove", 0,false]; 
[_victim, "antlion_sync_main_1"] remoteExec ["switchMove", 0,true]; 
[_victim, ["","nearPanic_1","nearPanic_2","nearPanic_3","nearPanic_4"], 100, false] call WBK_MakeVoiceOver_Combine;
[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
uisleep 0.1;
[_victim, selectRandom ["leg_hit1","leg_hit2","leg_hit3"], 40, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
uisleep 0.5;
if (!(alive _antlion) or !(animationState _antlion == "antlion_sync_main_1") or !(animationState _victim == "antlion_sync_main_1")) exitWith {
	[_victim, [_victim vectorModelToWorld [0,100,40], _victim selectionPosition "head", false]] remoteExec ["addForce", _victim];
	_victim setVariable ["canMakeAttack",0,true];
	_victim setVariable ["AI_CanTurn",0,true];
};
[_victim, selectRandom ["WBK_antlion_attack_double_1","WBK_antlion_attack_double_2","WBK_antlion_attack_double_3"], 35, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
uisleep 0.5;
if (!(alive _antlion) or !(animationState _antlion == "antlion_sync_main_1") or !(animationState _victim == "antlion_sync_main_1")) exitWith {
	[_victim, [_victim vectorModelToWorld [0,100,40], _victim selectionPosition "head", false]] remoteExec ["addForce", _victim];
	_victim setVariable ["canMakeAttack",0,true];
	_victim setVariable ["AI_CanTurn",0,true];
};
removeGoggles _victim;
[_victim, selectRandom ["WBK_antlion_breakHead_1","WBK_antlion_breakHead_2","WBK_antlion_breakHead_3"], 60, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
_victim setDamage 1;
_victim spawn WBK_OB_FriendlyDown_Combine;
[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0]; 
[_victim, "WBK_DosHead_FrontHole"] remoteExec ["setFace",0];
_victim call WBK_Smasher_CreateBloodParticle;
uisleep 1;
[_victim, selectRandom ["WBK_antlion_attack_1","WBK_antlion_attack_2","WBK_antlion_attack_3","WBK_antlion_attack_4","WBK_antlion_attack_5"], 35, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 40, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
_victim call WBK_Smasher_CreateBloodParticle;
uisleep 1.5;
detach _antlion;
};



WBK_AntlionSyncKill_2 = {
_antlion = _this select 0;
_victim = _this select 1;
_antlion setDamage 0;
[_victim, "ALL"] remoteExec ["disableAI", _victim]; 
_victim setVariable ["canMakeAttack",1,true];
_victim setVariable ["AI_CanTurn",1,true];
_victim setVariable ["actualSwordBlock",0,true];
_antlion attachTo [_victim,[0.47,0.9,0]];
[_antlion, 180] remoteExec ["setDir", 0]; 
[_antlion, "antlion_sync_main_2"] remoteExec ["switchMove", 0,false]; 
[_victim, "antlion_sync_main_2"] remoteExec ["switchMove", 0,true]; 
[_victim, ["","nearPanic_1","nearPanic_2","nearPanic_3","nearPanic_4"], 100, false] call WBK_MakeVoiceOver_Combine;
[_victim, "Disable_Gesture"] remoteExec ["playActionNow", _victim];
uisleep 0.4;
if (!(alive _antlion) or !(animationState _antlion == "antlion_sync_main_2") or !(animationState _victim == "antlion_sync_main_2")) exitWith {
	[_victim, [_victim vectorModelToWorld [0,100,40], _victim selectionPosition "head", false]] remoteExec ["addForce", _victim];
	_victim setVariable ["canMakeAttack",0,true];
	_victim setVariable ["AI_CanTurn",0,true];
};
[_antlion, selectRandom ["WBK_antlion_attack_double_1","WBK_antlion_attack_double_2","WBK_antlion_attack_double_3"], 35, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
uisleep 0.3;
if (!(alive _antlion) or !(animationState _antlion == "antlion_sync_main_2") or !(animationState _victim == "antlion_sync_main_2")) exitWith {
	[_victim, [_victim vectorModelToWorld [0,100,40], _victim selectionPosition "head", false]] remoteExec ["addForce", _victim];
	_victim setVariable ["canMakeAttack",0,true];
	_victim setVariable ["AI_CanTurn",0,true];
};
_victim setDamage 1;
_victim spawn WBK_OB_FriendlyDown_Combine;
[_victim, selectRandom ["WBK_antlion_breakBody_1","WBK_antlion_breakBody_2","WBK_antlion_breakBody_3"], 60, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
[_victim, 1.2] remoteExec ["setAnimSpeedCoef", 0]; 
_victim call WBK_Smasher_CreateBloodParticle;
uisleep 0.3;
[_victim, 1.3] remoteExec ["setAnimSpeedCoef", 0]; 
[_victim, selectRandom ["sword_headgore_1","sword_headgore_2","sword_headgore_3","sword_headgore_4"], 40, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
uisleep 0.8;
[_victim, "dobi_fall", 40, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
uisleep 0.2;
detach _antlion;
};

WBK_AntLionJump = {
	_zombie = _this select 0;
	if !(alive _zombie) exitWith {};
	_enemy = _this select 1;
	_dist = _this select 2;
	_positions = [
		getPosASLVisual _zombie,
		getPosASLVisual _enemy
	];
	_centroid = _positions call QS_fnc_geomPolygonCentroid;
	_arrow = "#particlesource" createVehicleLocal [0,0,0];  
	_arrow setPosASL [_centroid select 0, _centroid select 1, (getPosASLVisual _enemy select 2) + 2.5];
	_geometryForward = lineIntersectsSurfaces [
		getPosASLVisual _zombie, 
		getPosASLVisual _arrow, 
		_zombie,
		_arrow,
		true,
		1,
		"GEOM",
		"FIRE"
		];
	_geometryForward_1 = lineIntersectsSurfaces [
		getPosASLVisual _arrow, 
		getPosASLVisual _enemy, 
		_enemy,
		_arrow,
		true,
		1,
		"GEOM",
		"FIRE"
		];
	if ((count _geometryForward > 0) or (count _geometryForward_1 > 0)) exitWith {
		_zombie setVariable ["CanFly",1];
		deleteVehicle _arrow;
		uiSleep 1;
		_zombie setVariable ["CanFly",nil];
	};
	_zombie disableAI "MOVE";
	_zombie setVariable ["CanFly",1];
	[_zombie, "antlion_jump_in"] remoteExec ["switchMove", 0];
	[_zombie, "antlion_jump_loop"] remoteExec ["playMove", 0];
	[_zombie, selectRandom ["WBK_antlion_death_wing_1","WBK_antlion_death_wing_2"], 40, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	_zombie setFormDir (_zombie getDir _enemy);
	doStop _zombie;
	_loopPathfindDoMove = [{
		_array = _this select 0;
		_unit = _array select 0;
		_nearEnemy = _array select 1;
		_anim = _array select 2;
		if (!(animationState _unit == _anim) or (lifeState _unit == "INCAPACITATED") or !(alive _unit)) exitWith {};
		_dir = [[0,1,0], -([_unit, _nearEnemy] call BIS_fnc_dirTo)] call BIS_fnc_rotateVector2D;
		_unit setVelocityTransformation [ 
			getPosASL _unit,  
			getPosASL _unit,  
			[0,0,(velocity _unit select 2)],  
			[(velocity _unit select 0),(velocity _unit select 1),(velocity _unit select 2)], 
			vectorDir _unit,  
			_dir,  
			vectorUp _unit,  
			vectorUp _unit, 
			0.1
		]; 
	}, 0.01, [_zombie, _enemy, "antlion_jump_in"]] call CBA_fnc_addPerFrameHandler;
	uiSleep 0.55;
	[_loopPathfindDoMove] call CBA_fnc_removePerFrameHandler;
	if (!(alive _zombie)) exitWith {
		deleteVehicle _arrow;
		[_zombie, selectRandom ["antlion_die_4","antlion_die_5","antlion_die_6"]] remoteExec ["switchMove",0]; 
	};
	uiSleep 0.1;
	if (!(alive _zombie)) exitWith {
		deleteVehicle _arrow;
		[_zombie, selectRandom ["antlion_die_4","antlion_die_5","antlion_die_6"]] remoteExec ["switchMove",0]; 
	};
	_zombie setDir (_zombie getDir _enemy);
	_pos1 = (getPosATL _enemy select 2);
	_pos2 = (getPosATL _zombie select 2);
	_result1 = (_pos1 - _pos2) + 7.5;
	[_zombie, [0,(_zombie distance _enemy) * 0.65,_result1]] remoteExec ["setVelocityModelSpace", _zombie];
	uiSleep 0.3;
	deleteVehicle _arrow;
	if (!(alive _zombie)) exitWith {
		[_zombie, selectRandom ["antlion_die_4","antlion_die_5","antlion_die_6"]] remoteExec ["switchMove",0]; 
	};
	waitUntil {
		if ((isNull _zombie) or !(alive _zombie)) exitWith { true };
		(isTouchingGround _zombie)
	};
	if (!(alive _zombie)) exitWith {
		[_zombie, selectRandom ["antlion_die_4","antlion_die_5","antlion_die_6"]] remoteExec ["switchMove",0]; 
	};
	_zombie enableAI "MOVE";
	[_zombie, "antlion_jump_out"] remoteExec ["switchMove", 0];
	[_zombie, selectRandom ["WBK_antlion_flyEnd_1","WBK_antlion_flyEnd_2","WBK_antlion_flyEnd_3"], 95, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	{
		if (!(animationState _x in ["antlion_sync_main_1","antlion_sync_main_2"]) and (alive _x) and (isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) and (getText (configfile >> 'CfgVehicles' >> typeOf _x >> 'moves') == 'CfgMovesMaleSdr')) then {
			[_x,2,_zombie] remoteExec ["concentrationToZero", _x, false];
		};
	} forEach nearestObjects [_zombie,["MAN"],3];
	uiSleep (5 + random 5);
	_zombie setVariable ["CanFly",nil];
};

OEC_aceDamage = {
	params ["_zombie","_damage","_dist","_isMetal"];
	if !(alive _zombie) exitWith {};
	_x = _zombie findNearestEnemy _zombie;
	if ((_zombie distance _x) <= _dist) then {
		switch true do 
		{
			case ((_x == _zombie) || (side _zombie == side _x) || (((_zombie worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0)): {};
			case (!(isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) || (animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") || (animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") || (animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") || (animationState _x == "starWars_landRoll") || (animationState _x == "starWars_landRoll_b") || ((typeOf _x isKindOf "WBK_SpecialZombie_Smasher_1") && (side _x == side _zombie)) || ((typeOf _x isKindOf "WBK_Goliaph_1") && (side _x == side _zombie)) || ((_x == _zombie) || !(alive _zombie) || !(alive _x) || (animationState _x == "WBK_Smasher_Execution"))): {};
			case (lifeState _x == "INCAPACITATED"): {};

			_bodyPart1 = ["head","body","arm_r","arm_l","leg_r","leg_l"] selectRandomWeighted [4,10,8,8,9,9];
			[_x, _damage, _bodyPart1, "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart2 = "body";
			while {_bodyPart2 == _bodyPart1} do 
			{
				_bodyPart2 = ["head","body","arm_r","arm_l","leg_r","leg_l"] selectRandomWeighted [4,10,9,9,9,9];
			};
			[_x, _damage, _bodyPart2, "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart3 = "body";
			while {_bodyPart3 == _bodyPart1 || _bodyPart3 == _bodyPart2} do 
			{
				_bodyPart3 = ["head","body","arm_r","arm_l","leg_r","leg_l"] selectRandomWeighted [4,10,9,9,9,9];
			};
			[_x, _damage, _bodyPart3, "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			if (_isMetal) then 
			{
				[_x, selectRandom ["sword_hit_1","sword_hit_2","sword_hit_3","sword_hit_4","sword_hit_5","sword_hit_6"], 60, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
			}
			else
			{
				[_x, selectRandom ["PF_Hit_1","PF_Hit_2"], 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			};
			if (isPlayer _x) then
			{
				[_x, {
					[30] call BIS_fnc_bloodEffect;
					["ChromAberration", 200, [0.04, 0.04, true]] spawn {
						AddChromAbber = true;
						params["_name", "_priority", "_effect", "_handle"];
						while {
							_handle = ppEffectCreate[_name, _priority];
							_handle < 0
						}
						do {
							_priority = _priority + 1;
						};
						_handle ppEffectEnable true;
						_handle ppEffectAdjust _effect;
						_handle ppEffectCommit 0.4;
						uiSleep 0.4;
						_handle ppEffectAdjust[0, 0, false];
						_handle ppEffectCommit 0.4;
						uiSleep 0.5;
						ppEffectDestroy _handle;
						AddChromAbber = nil;
					};
				}] remoteExec ["spawn",_x];
			};
		};
	};
};


_unitWithSword addEventHandler ["Killed", {
	_this spawn {
		_zombie = _this select 0;
		_killer = _this select 1;
		detach _zombie;
		switch true do {
			case ((animationState _zombie == "antlion_die_3") or !(isTouchingGround _zombie)): {
				_zombie spawn WBK_Antlion_Explode;
			};
			case (((_zombie worldToModel (_killer modelToWorld [0, 0, 0])) select 1) < 0): {
				_zombie spawn WBK_Antlion_Explode;
			};
			default {
				[_zombie, selectRandom ["antlion_die_4","antlion_die_5","antlion_die_6"], 75, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
				[_zombie, selectRandom ["antlion_die_4","antlion_die_5","antlion_die_6"]] remoteExec ["switchMove", 0,true]; 
			};
		};
	};
}];


_unitWithSword addEventHandler ["Suppressed", {
params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
if !(alive _unit) exitWith {};
_unit reveal [_instigator, 4];
}];
_unitWithSword addEventHandler ["FiredNear", {
params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];
if !(alive _unit) exitWith {};
_unit reveal [_firer, 4];
}];

_unitWithSword addEventHandler ["AnimStateChanged",
{ 
	_this spawn 
	{
		params ["_unit", "_anim"]; 
		switch _anim do 
		{
			case "antlion_attack_1": 
			{
				[_unit, selectRandom ["WBK_antlion_attack_1","WBK_antlion_attack_2","WBK_antlion_attack_3","WBK_antlion_attack_4","WBK_antlion_attack_5"], 45, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
				uiSleep 0.6;
				if (animationState _unit != "antlion_attack_1") exitWith {};
				[_unit,0.8,3.3,true] call OEC_aceDamage;
			};
			case "antlion_attack_2": 
			{
				[_unit, selectRandom ["WBK_antlion_attack_double_1","WBK_antlion_attack_double_2","WBK_antlion_attack_double_3"], 45, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
				uiSleep 0.6;
				if (animationState _unit != "antlion_attack_2") exitWith {};
				[_unit,0.8,3.3,true] call OEC_aceDamage;
			};
		};
	};
}];


[_unitWithSword, {
_this removeAllEventHandlers "HitPart";
_this addEventHandler [
    "HitPart",
    {
		(_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
		if ((_target == _shooter) or !(alive _target)) exitWith {};
		switch true do {
			case ((_ammo select 3) >= 0.7): {
				_new_vv = (_target getVariable "WBK_SynthHP") - ((_ammo select 0) * 2);
				if ((_new_vv <= 0) || (animationState _target == "antlion_die_3")) exitWith {
					_target removeAllEventHandlers "HitPart"; 
					[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
				};
				_target setVariable ["WBK_SynthHP",_new_vv,true];
				[_target, "antlion_die_3"] remoteExec ["switchMove", 0]; 
			};
			default {
				_new_vv = (_target getVariable "WBK_SynthHP") - (_ammo select 0);
				if (_new_vv <= 0) exitWith {
					_target removeAllEventHandlers "HitPart"; 
					[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
				};
				_target setVariable ["WBK_SynthHP",_new_vv,true];
			};
		};
	}
];
}] remoteExec ["spawn",0,true];

_actFr = [{
    _array = _this select 0;
    _mutant = _array select 0;
	_mutant allowDamage false;
	if (
	!(simulationEnabled _mutant) || 
	!(isTouchingGround _mutant) || 
	!(alive _mutant) ||
	!(isNull attachedTo _mutant) ||
	!(animationState _mutant in ["antlion_idle","antlion_idle_1","antlion_run","antlion_walk","antlion_walk_b","antlion_turn_l","antlion_turn_r"])
	) exitWith {};
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
	_en = _mutant findNearestEnemy _mutant;
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
	if (((_mutant distance _en) < 50) and ((_mutant distance _en) > 8) and (isNil {_mutant getVariable "CanFly"})) exitWith {
		[_mutant,_en] spawn WBK_AntLionJump;
	};
	if (((_en distance _mutant) <= 2) and (count _ins == 0)) then {
		if (((damage _en) >= 0.4) and (getText (configfile >> 'CfgVehicles' >> typeOf _en >> 'moves') == 'CfgMovesMaleSdr')) exitWith {
			[_en,(_en getDir _mutant)] remoteExec ["setDir",_en];
			[_mutant, _en] spawn selectRandom [WBK_AntlionSyncKill_1,WBK_AntlionSyncKill_2];
		};
		[_mutant, selectRandom ["antlion_attack_1","antlion_attack_2"]] remoteExec ["switchMove",0];
	};
}, 0.1, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;

_loopPathfind = [{
    _array = _this select 0;
    _unit = _array select 0;
	_isStriderTaked = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	_nearEnemy = _unit findNearestEnemy _unit; 
	if ((animationState _unit in ["antlion_jump_in","antlion_jump_loop"]) || !(simulationEnabled _unit) || (_unit == _isStriderTaked) || (isNull _nearEnemy) or !(alive _nearEnemy) or !(alive _unit) or !(isNull attachedTo _unit) or (lifeState _unit == "INCAPACITATED") or (_unit distance _nearEnemy >= 600)) exitWith {
		_unit setVariable ["WBK_IsUnitLocked",nil];
	};
	if !(animationState _unit in ["antlion_idle","antlion_idle_1","antlion_run","antlion_walk","antlion_walk_b","antlion_turn_l","antlion_turn_r"]) exitWith {
		_unit setVariable ["WBK_IsUnitLocked",0];
		_unit enableAI "ANIM";
		_unit disableAI "MOVE";
		_dir = [[0,1,0], -([_unit, _nearEnemy] call BIS_fnc_dirTo)] call BIS_fnc_rotateVector2D;
        _unit setVelocityTransformation [ 
          getPosASL _unit,  
          getPosASL _unit,  
          [0,0,(velocity _unit select 2) - 1],  
          [(velocity _unit select 0),(velocity _unit select 1),(velocity _unit select 2) - 1], 
          vectorDir _unit,  
          _dir,  
          vectorUp _unit,  
          vectorUp _unit, 
          0.01
        ]; 
	};
	_ifInter = lineIntersectsSurfaces [
		AGLToASL (_nearEnemy modelToWorld [0,0,0.5]), 
		AGLToASL (_unit modelToWorld [0,0,0.5]), 
		_unit,
		_nearEnemy,
		true,
		1,
		"FIRE",
		"NONE"
	];
    _pos1 = (getPosATL _unit select 2);
	_pos2 = (getPosATL _nearEnemy select 2);
	_result1 = _pos1 - _pos2;
      if (
	  (count _ifInter == 0) and 
	  (_result1 < 1.45) and
	  (_result1 > (-1.45)) and
	  !(lifeState _unit == "INCAPACITATED")
      ) exitWith {
		_unit setVariable ["WBK_IsUnitLocked",0];
	    _unit disableAI "MOVE";
	    _unit disableAI "ANIM";
		doStop _unit;
		if  ((_unit distance _nearEnemy) > 2) then {
			_skeletalType = getText (configfile >> "CfgVehicles" >> typeOf _unit >> "moves");
			_currentMoveset = getText (configfile >> _skeletalType >> "States" >> animationState _unit >> "actions");
			_currentAnimationToPlay = getText (configfile >> _skeletalType >> "Actions" >> _currentMoveset >> "FastF");
			_unit playMoveNow _currentAnimationToPlay;
		}else{
			_skeletalType = getText (configfile >> "CfgVehicles" >> typeOf _unit >> "moves");
			_currentMoveset = getText (configfile >> _skeletalType >> "States" >> animationState _unit >> "actions");
			_currentAnimationToPlay = getText (configfile >> _skeletalType >> "Actions" >> _currentMoveset >> "default");
			_unit playMoveNow _currentAnimationToPlay;
		};
        _dir = [[0,1,0], -([_unit, _nearEnemy] call BIS_fnc_dirTo)] call BIS_fnc_rotateVector2D;
        _unit setVelocityTransformation [ 
          getPosASL _unit,  
          getPosASL _unit,  
          [0,0,(velocity _unit select 2) - 1],  
          [(velocity _unit select 0),(velocity _unit select 1),(velocity _unit select 2) - 1], 
          vectorDir _unit,  
          _dir,  
          vectorUp _unit,  
          vectorUp _unit, 
          0.1
        ]; 
      };
	  _unit setVariable ["WBK_IsUnitLocked",nil];
	  _unit enableAI "ANIM";
	  _unit enableAI "MOVE";
}, 0.01, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;


_loopPathfindDoMove = [{
    _array = _this select 0;
    _unit = _array select 0;
	_nearEnemy = _unit findNearestEnemy _unit; 
	_unit enableAI "MOVE";
	_unit enableAI "ANIM";
	if (!(simulationEnabled _unit) || !(alive _unit) || !(isNull attachedTo _unit) || (lifeState _unit == "INCAPACITATED") || (isNull _nearEnemy) || !(alive _nearEnemy) || !(alive _unit) || (_unit distance _nearEnemy >= 600)) exitWith {};
		_pos = ASLtoAGL getPosASLVisual _nearEnemy;
		_unit doMove _pos;
}, 2.4, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;


waitUntil {sleep 0.5; 
if (isNull _unitWithSword) exitWith { true };
!(alive _unitWithSword)
};
[_actFr] call CBA_fnc_removePerFrameHandler;
[_loopPathfindDoMove] call CBA_fnc_removePerFrameHandler;
[_loopPathfind] call CBA_fnc_removePerFrameHandler;