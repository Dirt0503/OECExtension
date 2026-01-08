_unitWithSword = _this;
if ((isPlayer _unitWithSword) or !(isNil {_unitWithSword getVariable "WBK_AI_ISZombie"}) or !(alive _unitWithSword)) exitWith {};
removeAllWeapons _unitWithSword;
_unitWithSword setUnitPos "UP";
_unitWithSword setVariable ["WBK_AI_ISZombie",true,true];
_unitWithSword setVariable ["WBK_AI_ZombieMoveSet","WBK_CustomCreature",true];
_unitWithSword setVariable ["WBK_SynthHP",55,true];
_unitWithSword setSpeaker "NoVoice";
_unitWithSword disableConversation true;


_unitWithSword spawn {
	uisleep 0.5;
	_this doMove (ASLtoAGL getPosASLVisual _this);
};


_unitWithSword addEventHandler ["Killed", {
	_zombie = _this select 0;
	detach _zombie;
	_zombie spawn {
		uiSleep (0.3 + random 0.1);
		if (isNull _this) exitWith {};
		[_this, selectRandom ["zombie_fall_1","zombie_fall_2","zombie_fall_3"], 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	};
	[_zombie, "WBK_HoundEye_Die", 55, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	[_zombie, selectRandom ["houndeye_die_1","houndeye_die_2"]] remoteExec ["switchMove",0]; 
}];

OEC_aceDamage_houndEye = {
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
			[_x, _damage, _bodyPart1, "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart2 = "body";
			while {_bodyPart2 == _bodyPart1} do 
			{
				_bodyPart2 = ["head","body","arm_r","arm_l","leg_r","leg_l"] selectRandomWeighted [4,10,9,9,9,9];
			};
			[_x, _damage, _bodyPart2, "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart3 = "body";
			while {_bodyPart3 == _bodyPart1 || _bodyPart3 == _bodyPart2} do 
			{
				_bodyPart3 = ["head","body","arm_r","arm_l","leg_r","leg_l"] selectRandomWeighted [4,10,9,9,9,9];
			};
			[_x, _damage, _bodyPart3, "falling"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

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

_unitWithSword addEventHandler ["AnimStateChanged", { 
	_this spawn {
		 params ["_unit", "_anim"]; 
		 switch _anim do {
				case "houndeye_attack": {
					[_unit, selectRandom ["WBK_HoundEye_attack_1","WBK_HoundEye_attack_2","WBK_HoundEye_attack_3"], 75, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
					uiSleep 1.1;
					if (animationState _unit != "houndeye_attack") exitWith {};
					[_unit, "WBK_HoundEye_blast", 225, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
					[_unit,{
						if (isDedicated) exitWith {};
						if ((player distance _this) <= 12) then {
							enableCamShake true; 
							addCamShake [15, 0.7, 25];
						};
						_aslLoc = _this;
						_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
						_fulgi setParticleRandom [0, [1, 1, 0], [8, 8, 5], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
						_fulgi setDropInterval 0.001;
						_fulgi setParticleCircle [0, [0, 0, 0]];
						_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[0,0.47,1,1]],[1],0,0,"","",_this, 0, false, 0.4, [[0,147,255,1],[0,147,255,0.5],[0,147,255,0.1]]]; 
						_gravi1 = "#particlesource" createVehicleLocal getpos _aslLoc;  
						_gravi1 setParticleCircle [0.6, [7, 7, 0]];
						_gravi1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1,0],"","Billboard",1,2,[0,0,0],[0,0,0.6],0,0.05,0.04,0.05,[1,2,5,8,12,17],[[0.1,0.1,0.1,1],[0.25,0.25,0.25,1],[0.5,0.5,0.5,1],[0,0,0,1],[0,0,0,0.5],[0,0,0,0.3]],[1.5,0.5,0,0],0.4,0.09,"","","",0,false,0,[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]];
						_gravi1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0.25, [0.05, 0.05, 0.05, 0.1], 0, 0];
						_gravi1 setDropInterval 0.0004;
						_smoke2 = "#particlesource" createVehicleLocal getPos _aslLoc;
						_smoke2 setposasl getPosASL _aslLoc;
						_smoke2 setParticleCircle [0.6, [7, 7, 0]];
						_smoke2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0.25, [0.05, 0.05, 0.05, 0.1], 0, 0];
						_smoke2 setParticleParams [["\A3\data_f\cl_fireD", 1, 0, 1], "", "Billboard", 1, 3, [0, 0, 0.6], [0.2,0.5,0.2], 90, 10, 7.85, 0.375, [1, 2, 3], [[.15, .15, .15, 0.2], [.15, .15, .15, 0.1], [0.15, 0.15, 0.15, 0]], [10], 1, 0, "", "", _aslLoc];
						_smoke2 setDropInterval 0.0004;
						_smlfirelight = "#lightpoint" createVehicleLocal (getpos _aslLoc);
						_smlfirelight setPosATL (_aslLoc modelToWorld [0,0,1]);
						_smlfirelight setLightAmbient [0, 0.47, 1]; 
						_smlfirelight setLightColor [0, 0.47, 1]; 
						_smlfirelight setLightBrightness 1;
						_smlfirelight setLightUseFlare true;
						_smlfirelight setLightDayLight true;
						_smlfirelight setLightFlareSize 12;
						_smlfirelight setLightFlareMaxDistance 200; 
						uisleep 0.1;
						deletevehicle _smoke2;
						deletevehicle _gravi1;
						deletevehicle _fulgi;
						uisleep 0.2;
						deletevehicle _smlfirelight;
					}] remoteExec ["spawn",0];
					uiSleep 0.1;
					[_unit,0.001,[0,700,100],5.5] call WBK_Alien_Heavy_Damage_Humanoid;
					_unit call WBK_Smasher_Damage_Vehicles;
                    [_unit,0.25,5.5,true] call OEC_aceDamage_houndEye;
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
				if (_new_vv <= 0) exitWith {
					_target removeAllEventHandlers "HitPart"; 
					[_target, [1, false, _shooter]] remoteExec ["setDamage",2];
				};
				_target setVariable ["WBK_SynthHP",_new_vv,true];
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
	!(animationState _mutant in ["houndeye_idle","houndeye_run"])
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
	if (((_en distance _mutant) <= 4) and (count _ins == 0)) then {
		[_mutant, "houndeye_attack"] remoteExec ["switchMove",0];
		[_mutant, "houndeye_attack"] remoteExec ["playMoveNow",0];
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
	if !(animationState _unit in ["houndeye_idle","houndeye_run"]) exitWith {
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
	if (!(simulationEnabled _unit) || !(alive _unit) || !(isNull attachedTo _unit) || (lifeState _unit == "INCAPACITATED") || !(alive _unit)) exitWith {};
		  if ((isNull _nearEnemy) or !(alive _nearEnemy) or (_unit distance _nearEnemy >= 600)) exitWith {
			[_unit, selectRandom ["WBK_HoundEye_idle_1","WBK_HoundEye_idle_2","WBK_HoundEye_idle_3","WBK_HoundEye_idle_4"], 55] call CBA_fnc_GlobalSay3D;
		  };
	_pos = ASLtoAGL getPosASLVisual _nearEnemy;
	_unit doMove _pos;
	[_unit, selectRandom ["WBK_HoundEye_Alert_1","WBK_HoundEye_Alert_2","WBK_HoundEye_Alert_3","WBK_HoundEye_Alert_4","WBK_HoundEye_Alert_5","WBK_HoundEye_Alert_6"], 20] call CBA_fnc_GlobalSay3D;
}, 2.4, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;


waitUntil {sleep 0.5; 
if (isNull _unitWithSword) exitWith { true };
!(alive _unitWithSword)
};
[_actFr] call CBA_fnc_removePerFrameHandler;
[_loopPathfindDoMove] call CBA_fnc_removePerFrameHandler;
[_loopPathfind] call CBA_fnc_removePerFrameHandler;