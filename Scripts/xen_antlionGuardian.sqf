_unitWithSword = _this;
if ((isPlayer _unitWithSword) or !(isNil {_unitWithSword getVariable "WBK_AI_ISZombie"}) or !(alive _unitWithSword)) exitWith {};
removeAllWeapons _unitWithSword;
_unitWithSword setUnitPos "UP";
_unitWithSword setVariable ["WBK_AI_ISZombie",true,true];
_unitWithSword setVariable ["WBK_AI_ZombieMoveSet","WBK_CustomCreature",true];
_unitWithSword setVariable ["WBK_SynthHP",1800,true];
_unitWithSword setSpeaker "NoVoice";
_unitWithSword disableConversation true;

_unitWithSword spawn {
	uisleep 0.5;
	_this doMove (ASLtoAGL getPosASLVisual _this);
};


_unitWithSword addEventHandler ["Killed", {
	[(_this select 0), "antlionGuardian_Death"] remoteExec ["switchMove", 0]; 
	[(_this select 0), selectRandom ["WBK_AG_die_1","WBK_AG_die_2"], 125, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
	(_this select 0) spawn {uisleep 3.9; [_this, selectRandom ["WBK_AG_shell_crack_1","WBK_AG_shell_crack_2"], 55, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; };
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


OEC_aceDamage_Guard = {
	params ["_zombie","_damage","_dist","_isMetal"];
	if !(alive _zombie) exitWith {};
	_x = _zombie findNearestEnemy _zombie;
	if ((_zombie distance _x) <= _dist) then {
		switch true do 
		{
			case ((_x == _zombie) || (side _zombie == side _x) || (((_zombie worldToModel (_x modelToWorld [0, 0, 0])) select 1) < 0)): {};
			case (!(isNil {_x getVariable "IMS_IsUnitInvicibleScripted"}) || (animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") || (animationState _x == "STAR_WARS_FIGHT_DODGE_LEFT") || (animationState _x == "STAR_WARS_FIGHT_DODGE_RIGHT") || (animationState _x == "starWars_landRoll") || (animationState _x == "starWars_landRoll_b") || ((typeOf _x isKindOf "WBK_SpecialZombie_Smasher_1") && (side _x == side _zombie)) || ((typeOf _x isKindOf "WBK_Goliaph_1") && (side _x == side _zombie)) || ((_x == _zombie) || !(alive _zombie) || !(alive _x) || (animationState _x == "WBK_Smasher_Execution"))): {};
			case (lifeState _x == "INCAPACITATED"): {};

			[_x, _damage, "head", "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
			[_x, _damage, "body", "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
			[_x, _damage, "hand_r", "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
			[_x, _damage, "hand_l", "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
			[_x, _damage, "leg_r", "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];
			[_x, _damage, "leg_l", "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

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


_unitWithSword addEventHandler ["AnimStateChanged", { 
	_this spawn {
		 params ["_unit", "_anim"]; 
		 switch _anim do {
				case "antlionguardian_roar": {
					[_unit, "WBK_AG_roar", 245, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
				};
				case "antlionguardian_attack": {
					[_unit, selectRandom ["WBK_AG_attack_1","WBK_AG_attack_2","WBK_AG_attack_3"], 125, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
					uiSleep 0.35;
					if (animationState _unit != "antlionguardian_attack") exitWith {};
					_unit call WBK_Smasher_CreateCamShake;
					_unit call WBK_Smasher_Damage_Vehicles;
					[_unit,0.5,[0,4000,800],5.4] call WBK_Alien_Heavy_Damage_Humanoid;
					[_unit,1,6,false] call OEC_aceDamage_Guard; 
				};
				case "antlionguardian_charge_crash": {
					[_unit, selectRandom ["WBK_AG_shell_crack_1","WBK_AG_shell_crack_2"], 85, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
				};
				case "antlionguardian_charge_end": {
					[_unit, selectRandom ["WBK_AG_attack_1","WBK_AG_attack_2","WBK_AG_attack_3"], 125, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
					_unit call WBK_Smasher_CreateCamShake;
					_unit call WBK_Smasher_Damage_Vehicles;
					[_unit,0.5,[0,2000,400],5.4] call WBK_Alien_Heavy_Damage_Humanoid;
					[_unit,1,6,false] call OEC_aceDamage_Guard; 
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
			case ((((_ammo select 3) >= 0.7) || ((_ammo select 0) >= 60)) && (isNil {_target getVariable "CanBeStunnedIMS"})): {
				_new_vv = (_target getVariable "WBK_SynthHP") - ((_ammo select 0) * 2);
				if (_new_vv <= 0) exitWith {
					_target removeAllEventHandlers "HitPart"; 
					[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
				};
				_rndAnim = selectRandom ["antlionGuardian_Hit_B","antlionGuardian_Hit_F"];
				[_target, _rndAnim] remoteExec ["switchMove", 0]; 
				[_target, _rndAnim] remoteExec ["playMoveNow", 0]; 
				_target setVariable ["WBK_SynthHP",_new_vv,true];
				_target setVariable ["CanBeStunnedIMS",1,true]; 
				_target spawn {uisleep 6; _this setVariable ["CanBeStunnedIMS",nil,true];};
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
	!(animationState _mutant in ["antlionguardian_idle_1","antlionguardian_idle_2","antlionguardian_run","antlionguardian_walk"])
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
	if (count _ins == 0) then {
		switch true do {
			case (((vehicle _en) isKindOf "MAN") and (isNil {_mutant getVariable "WBK_HunterCanCharge"}) and ((_en distance _mutant) <= 25) and ((_en distance _mutant) > 7) and !(isNull _en) and (alive _en)): {
				[_mutant, selectRandom ["WBK_AG_attack_1","WBK_AG_attack_2","WBK_AG_attack_3"], 125, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
				[_mutant, "antlionGuardian_Charge_Start"] remoteExec ["switchMove", 0]; 
				[_mutant, "antlionGuardian_Charge_Start"] remoteExec ["playMoveNow", 0];
				[_en, ["","nearPanic_1","nearPanic_2","nearPanic_3","nearPanic_4"], 100, false] call WBK_MakeVoiceOver_Combine;
				_mutant setVariable ["WBK_HunterCanCharge",1];
				_mutant spawn {
					uiSleep 10; 
					if (!(alive _this) or !(animationState _this in ["antlionguardian_charge_start","antlionguardian_charge_loop"])) exitWith {};
					[_this, "antlionGuardian_Charge_End"] remoteExec ["switchMove", 0];
					[_this, "antlionGuardian_Charge_End"] remoteExec ["playMoveNow", 0];
					uiSleep 10;
					_this setVariable ["WBK_HunterCanCharge",nil];
				};
			};
			case (((_en distance _mutant) <= 6.3) and !((vehicle _en) isKindOf "MAN") and (alive _mutant)): {
				[_mutant, "antlionGuardian_Attack"] remoteExec ["switchMove", 0]; 
				[_mutant, "antlionGuardian_Attack"] remoteExec ["playMoveNow", 0]; 
			};
			case ((isNil {_mutant getVariable "WBK_CanMakeRoar"}) and ((_en distance _mutant) <= 45) and ((_en distance _mutant) > 15)): {
				_mutant setVariable ["WBK_CanMakeRoar",1];
				_mutant spawn {uiSleep 60; _this setVariable ["WBK_CanMakeRoar",nil];};
				[_mutant, "antlionGuardian_Roar"] remoteExec ["switchMove", 0]; 
				[_mutant, "antlionGuardian_Roar"] remoteExec ["playMoveNow", 0]; 
			};
			case (((_en distance _mutant) <= 4) and (alive _mutant)): {
				[_mutant, "antlionGuardian_Attack"] remoteExec ["switchMove", 0]; 
				[_mutant, "antlionGuardian_Attack"] remoteExec ["playMoveNow", 0]; 
			};
			default {};
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
	if (animationState _unit in ["antlionguardian_charge_start","antlionguardian_charge_loop"]) exitWith {
		_ins = lineIntersectsSurfaces [
		AGLToASL (_unit modelToWorld [0,0,0.6]), 
		AGLToASL (_unit modelToWorld [0,2.2,0.6]), 
		_unit,
		_nearEnemy,
		true,
		1,
		"GEOM",
		"NONE"
		];
		if (count _ins > 0) exitWith {
			[_unit, "antlionGuardian_Charge_Crash"] remoteExec ["switchMove", 0];
			[_unit, "antlionGuardian_Charge_Crash"] remoteExec ["playMoveNow", 0];
		};
		if ((_unit distance _nearEnemy) <= 3) exitWith {
			[_unit, "antlionGuardian_Charge_End"] remoteExec ["switchMove", 0];
			[_unit, "antlionGuardian_Charge_End"] remoteExec ["playMoveNow", 0];
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
		_unit setVariable ["WBK_IsUnitLocked",1];
		_unit disableAI "ANIM";
		_unit disableAI "MOVE";
		_unit playMoveNow "antlionguardian_charge_loop";
      };
	if !(animationState _unit in ["antlionguardian_idle_1","antlionguardian_idle_2","antlionguardian_run","antlionguardian_walk"]) exitWith {
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