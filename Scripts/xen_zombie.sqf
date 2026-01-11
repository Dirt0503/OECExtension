params ["_unitWithSword","_isForced"];
if ((isPlayer _unitWithSword) or !(isNil {_unitWithSword getVariable "WBK_AI_ISZombie"}) or !(alive _unitWithSword)) exitWith {};
if (primaryWeapon _unitWithSword != "") then {
	{
		_unitWithSword removeWeapon _x;
	} forEach [primaryWeapon _unitWithSword,handGunWeapon _unitWithSword,secondaryWeapon _unitWithSword];
};
_unitWithSword setUnitPos "UP";
_unitWithSword setVariable ["WBK_AI_ISZombie",true,true];
_rndMoveset = selectRandom ["WBK_Middle_Idle","WBK_Middle_Idle_1"];
_unitWithSword setVariable ["WBK_AI_ZombieMoveSet",_rndMoveset,true];
if (_isForced) then {
    
	[_unitWithSword, "WBK_Walker_GetUpUnconscious_1"] remoteExec ["switchMove",0];
	[_unitWithSword, "WBK_Walker_Idle_1"] remoteExec ["playMoveNow",0];
}else{
	[_unitWithSword, _rndMoveset] remoteExec ["switchMove",0];
	removeUniform _unitWithSword;
	_uni = getText (configfile >> "CfgVehicles" >> typeOf _unitWithSword >> "uniformClass");
	_unitWithSword forceAddUniform _uni;
};

_uniformPool =
[
	"OEC_Rebel_Civ_Uniform_White",
    "OEC_Rebel_Civ_Uniform_Blue"
];
_unitWithSword forceAddUniform (selectRandom _uniformPool);

_unitWithSword setVariable ["WBK_SynthHP",150,true];
_unitWithSword setSpeaker "NoVoice";
_unitWithSword disableConversation true;
removeAllWeapons _unitWithSword;
removeAllAssignedItems _unitWithSword;
removeGoggles _unitWithSword;
removeHeadgear _unitWithSword;
_unitWithSword setVariable ["WBK_Zombie_CustomSounds",
[
["WBK_HL_Zombie_breath_long_01","WBK_HL_Zombie_breath_long_02","WBK_HL_Zombie_breath_long_03","WBK_HL_Zombie_breath_long_04","WBK_HL_Zombie_breath_long_05","WBK_HL_Zombie_breath_long_06","WBK_HL_Zombie_breath_long_07","WBK_HL_Zombie_breath_long_08","WBK_HL_Zombie_breath_long_09","WBK_HL_Zombie_breath_long_10","WBK_HL_Zombie_breath_long_11","WBK_HL_Zombie_breath_long_12","WBK_HL_Zombie_breath_long_13","WBK_HL_Zombie_breath_long_14"],
["WBK_HL_Zombie_idle_moan_dry_01","WBK_HL_Zombie_idle_moan_dry_02","WBK_HL_Zombie_idle_moan_dry_03","WBK_HL_Zombie_idle_moan_dry_04","WBK_HL_Zombie_idle_moan_dry_05","WBK_HL_Zombie_idle_moan_dry_06","WBK_HL_Zombie_idle_moan_dry_07","WBK_HL_Zombie_idle_moan_dry_08","WBK_HL_Zombie_idle_moan_dry_09","WBK_HL_Zombie_idle_moan_dry_10","WBK_HL_Zombie_idle_moan_dry_11","WBK_HL_Zombie_idle_moan_dry_12","WBK_HL_Zombie_idle_moan_dry_13","WBK_HL_Zombie_idle_moan_dry_14"],
["WBK_HL_Zombie_attack_grunt_01","WBK_HL_Zombie_attack_grunt_02","WBK_HL_Zombie_attack_grunt_03","WBK_HL_Zombie_attack_grunt_04","WBK_HL_Zombie_attack_grunt_05","WBK_HL_Zombie_attack_grunt_06"],
["WBK_HL_Zombie_death_01","WBK_HL_Zombie_death_02","WBK_HL_Zombie_death_03","WBK_HL_Zombie_death_04","WBK_HL_Zombie_death_05","WBK_HL_Zombie_death_06","WBK_HL_Zombie_death_07","WBK_HL_Zombie_death_08","WBK_HL_Zombie_death_09"],
["WBK_HL_Zombie_death_01","WBK_HL_Zombie_death_02","WBK_HL_Zombie_death_03","WBK_HL_Zombie_death_04","WBK_HL_Zombie_death_05","WBK_HL_Zombie_death_06","WBK_HL_Zombie_death_07","WBK_HL_Zombie_death_08","WBK_HL_Zombie_death_09"]
]];


_unitWithSword spawn {
	_rndFace = selectRandom ["Bloody_Neck"];
	[_this, _rndFace] remoteExec ["setFace", 0];
	_this addHeadgear "OEC_Misc_Helmet_Headcrab";
	uisleep 0.5;
	_this doMove (getPos _this);
	if (uniform _this == "HL_RES_U_HEV_MK5") then {
		_this addEventHandler ["Killed", {
			[(_this select 0), selectRandom ["hzv_death_1","hzv_death_2"], 35, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		}];
		while {alive _this} do {
			[_this, selectRandom ["hzv03","hzv04","hzv05","hzv06","hzv07","hzv08","hzv09","hzv10","hzv11","hzv12","hzv13","hzv14"], 30, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			uiSleep 10;
		};
	};
    while {alive _this} do {
        if (stance _this == "PRONE") then {
            _this setDamage 1;
            
            break;
        };
        uiSleep 1;
    };
};
_unitWithSword addEventHandler ["Killed", {
	_this spawn {
		_zombie = _this select 0;
		_zombie spawn {
			uiSleep (0.3 + random 0.1);
			if (isNull _this) exitWith {};
			[_this, selectRandom ["zombie_fall_1","zombie_fall_2","zombie_fall_3"], 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
		_killer = _this select 1;
		uiSleep 0.2;
		if (isNull _zombie) exitWith {};
		if ((face _zombie in ["WBK_DecapatedHead_Zombies_Normal","WBK_DosHead_BackHole","WBK_DosHead_FrontHole"])) exitWith {
			_zombie unlinkItem hmd _zombie;
			removeGoggles _zombie;
			removeHeadgear _zombie;
		};
		if ((random 100) >= 50) then {
			_zombie unlinkItem hmd _zombie;
			removeGoggles _zombie;
			removeHeadgear _zombie;
		};
		if (!(isNil {_zombie getVariable "WBK_Zombie_CustomSounds"})) then {
			[_zombie, selectRandom ((_zombie getVariable "WBK_Zombie_CustomSounds") select 3), 30, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		}else{
			[_zombie, selectRandom ["plagued_death_1","plagued_death_2","plagued_death_3","plagued_death_4","plagued_death_5","plagued_death_6","plagued_death_7","plagued_death_8","plagued_death_9"], 40, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
		};
	};
}];


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

			[_x, _damage, "body", "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart2 = ["head","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [5,10,10,10,10];
			[_x, _damage, _bodyPart2, "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart3 = ["head","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [5,10,10,10,10];
			while {_bodyPart3 == _bodyPart2} do 
			{
				_bodyPart3 = ["head","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [5,10,10,10,10];
			};
			[_x, _damage, _bodyPart3, "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			[_x, selectRandom ["sword_hit_1","sword_hit_2","sword_hit_3","sword_hit_4","sword_hit_5","sword_hit_6"], 60, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
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


_unitWithSword addEventHandler ["AnimStateChanged", { 
	_this spawn {
		 params ["_unit", "_anim"]; 
		 switch _anim do {
				case "wbk_walker_idle_1_attack": {
					uiSleep 0.6;
					if (animationState _unit != "wbk_walker_idle_1_attack") exitWith {};
					[_unit,1.1,3,true] call OEC_aceDamage;
				};
				case "wbk_walker_idle_2_attack": {
					uiSleep 0.6;
					if (animationState _unit != "wbk_walker_idle_2_attack") exitWith {};
					[_unit,1.1,3,true] call OEC_aceDamage;
				};
		 };
	};
}];
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


[_unitWithSword, {
_this removeAllEventHandlers "HitPart";
_this addEventHandler [
    "HitPart",
    {
		(_this select 0) params ["_target","_shooter","_bullet","_position","_velocity","_selection","_ammo","_direction","_radius","_surface","_direct"];
		if ((_target == _shooter) or !(alive _target)) exitWith {};
		switch true do {
			case ((_ammo select 3) >= 0.7): {
				_new_vv = (_target getVariable "WBK_SynthHP") - ((_ammo select 0) * 1.6);
				if (_new_vv <= 0) exitWith {
					[_target, [_shooter vectorModelToWorld [random 500,random 500,100], _target selectionPosition "head", false]] remoteExec ["addForce", _target];
					_target removeAllEventHandlers "HitPart"; 
					[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
				};
				_target setVariable ["WBK_SynthHP",_new_vv,true];
			};
			case ((_selection select 0) in ["head","neck"]): {
				_new_vv = (_target getVariable "WBK_SynthHP") - ((_ammo select 0) * 1.6);
				if (_new_vv <= 0) exitWith {
					[_target, [_shooter vectorModelToWorld [0,500,50], _target selectionPosition "head", false]] remoteExec ["addForce", _target];
					_target removeAllEventHandlers "HitPart"; 
					[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
					if ((_ammo select 0) >= 10.5) then {
						_target call WBK_Zombies_CreateBloodParticle;
						[_target, selectRandom ["decapetadet_sound_1","decapetadet_sound_2"], 80, 4] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
						switch true do {
							case ((_ammo select 0) >= 14): {
								[_target, "WBK_DecapatedHead_Zombies_Normal"] remoteExec ["setFace",0];
							};
							case (((_target worldToModel (_shooter modelToWorld [0, 0, 0])) select 1) < 0): {
								[_target, "WBK_DosHead_BackHole"] remoteExec ["setFace",0];
							};
							default {
								[_target, "WBK_DosHead_FrontHole"] remoteExec ["setFace",0];
							};
						};
					};
				};
				_target setVariable ["WBK_SynthHP",_new_vv,true];
			};
			default {
				_new_vv = (_target getVariable "WBK_SynthHP") - (_ammo select 0);
				if (_new_vv <= 0) exitWith {
					[_target, [_shooter vectorModelToWorld [0,500,50], _target selectionPosition (_selection select 0), false]] remoteExec ["addForce", _target];
					_target removeAllEventHandlers "HitPart"; 
					[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
				};
				_target setVariable ["WBK_SynthHP",_new_vv,true];
				[_target, selectRandom ["WBK_ZombieHitGest_1","WBK_ZombieHitGest_2","WBK_ZombieHitGest_3"]] remoteExec ["playActionNow",_target];
			};
		};
	}
];
}] remoteExec ["spawn",0,true];


_actFr = [{
    _array = _this select 0;
    _mutant = _array select 0;
	if (alive _mutant != isAwake _mutant) exitWith {_mutant setDamage 1;};
	_mutant allowDamage false;
	if (animationState _mutant in ["wbk_middle_hit_b_1","wbk_middle_hit_f_2_1","wbk_middle_hit_f_1_1","wbk_middle_hit_b_2","wbk_middle_hit_f_2_2","wbk_middle_hit_f_1_2","wbk_middle_shoved_b","wbk_middle_shoved_f","wbk_middle_shoved_b_1","wbk_middle_shoved_f_1"]) exitWith {
		_insCount = lineIntersectsSurfaces [
			_mutant modelToWorldWorld (_mutant selectionPosition "pelvis"),
			_mutant modelToWorldWorld (_mutant selectionPosition "pelvis"),
			_mutant,
			objNull,
			true,
			1,
			"GEOM",
			"FIRE"
		];
		if (count _insCount != 0) then {
			[_mutant, "dobi_fall_2", 40, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
			if (_mutant getVariable "WBK_AI_ZombieMoveSet" == "WBK_Middle_Idle") then {
				_mutant playMoveNow "WBK_Middle_Shoved_B_Stunned";
				_mutant playMove "WBK_Middle_Idle";
			}else{
				_mutant playMoveNow "WBK_Middle_Shoved_B_Stunned_1";
				_mutant playMove "WBK_Middle_Idle_1";
			};;
		};
	};
	if (
	!(simulationEnabled _mutant) || 
	!(isTouchingGround _mutant) || 
	!(alive _mutant) ||
	!(isNull attachedTo _mutant) ||
	!(animationState _mutant in ["wbk_crawler_idle","wbk_crawler_walk","wbk_middle_idle","wbk_middle_idle_1","wbk_middle_run","wbk_middle_run_1"])
	) exitWith {};
	if (primaryWeapon _mutant != "") then {
		{
			_mutant removeWeapon _x;
		} forEach [primaryWeapon _mutant,handGunWeapon _mutant,secondaryWeapon _mutant];
	};
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
	if (((_en distance _mutant) <= 2) and (count _ins == 0) and !(gestureState _mutant in ["wbk_zombine_grenade_loop","wbk_zombine_grenade_in","wbk_zombie_attack_left","wbk_zombie_attack_right"])) then {
		switch true do {
			default {
				if (!(isNil {_mutant getVariable "WBK_Zombie_CustomSounds"})) then {
					[_mutant, selectRandom ((_mutant getVariable "WBK_Zombie_CustomSounds") select 2), 55, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
				}else{
					[_mutant, selectRandom ["middle_attack_1","middle_attack_2","middle_attack_3","middle_attack_4","middle_attack_5","middle_attack_6"], 45, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
				};
				_mutant spawn {
					_this playActionNow selectRandom ["wbk_zombie_attack_left","wbk_zombie_attack_right"];
					uiSleep 0.25;
					if !(gestureState _this in ["wbk_zombie_attack_left","wbk_zombie_attack_right"]) exitWith {};
					[_this,1.1,3,true] call OEC_aceDamage;
				};
			};
		};
	};
}, 0.1, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;

_loopPathfind = [{
    _array = _this select 0;
    _unit = _array select 0;
	_isStriderTaked = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	_nearEnemy = _unit findNearestEnemy _unit; 
	if (!(simulationEnabled _unit) || (_unit == _isStriderTaked) || (isNull _nearEnemy) or !(alive _nearEnemy) or !(alive _unit) or !(isNull attachedTo _unit) or (lifeState _unit == "INCAPACITATED") or (_unit distance _nearEnemy >= 600)) exitWith {
		_unit setVariable ["WBK_IsUnitLocked",nil];
	};
	if !(animationState _unit in ["wbk_middle_idle","wbk_middle_idle_1","wbk_middle_run","wbk_middle_run_1"]) exitWith {
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
			_currentAnimationToPlay = getText (configfile >> _skeletalType >> "Actions" >> _currentMoveset >> "stop");
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
	if (!(simulationEnabled _unit) || !(alive _unit) || !(isNull attachedTo _unit) || (lifeState _unit == "INCAPACITATED")) exitWith {};
		if ((isNull _nearEnemy) or !(alive _nearEnemy) or !(alive _unit) or (_unit distance _nearEnemy >= 600)) exitWith {
			if (!(isNil {_unit getVariable "WBK_Zombie_CustomSounds"})) then {
				[_unit, selectRandom ((_unit getVariable "WBK_Zombie_CustomSounds") select 0), 20] call CBA_fnc_GlobalSay3D;
			}else{
				[_unit, selectRandom ["plagued_idle_1","plagued_idle_2","plagued_idle_3","plagued_idle_4","plagued_idle_5"], 25] call CBA_fnc_GlobalSay3D;
			};
		};
		_pos = ASLtoAGL getPosASLVisual _nearEnemy;
		_unit doMove _pos;
		if (!(isNil {_unit getVariable "WBK_Zombie_CustomSounds"})) then {
			[_unit, selectRandom ((_unit getVariable "WBK_Zombie_CustomSounds") select 1), 20] call CBA_fnc_GlobalSay3D;
		}else{
			[_unit, selectRandom ["plagued_attack_9","plagued_attack_8","plagued_attack_3","plagued_attack_2","plagued_idle_1","plagued_idle_2","plagued_idle_3","plagued_idle_4","plagued_idle_5"], 25] call CBA_fnc_GlobalSay3D;
		};
}, 2.4, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;


waitUntil {sleep 0.5; 
if (isNull _unitWithSword) exitWith { true };
!(alive _unitWithSword)
};
[_actFr] call CBA_fnc_removePerFrameHandler;
[_loopPathfindDoMove] call CBA_fnc_removePerFrameHandler;
[_loopPathfind] call CBA_fnc_removePerFrameHandler;