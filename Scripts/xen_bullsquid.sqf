_unitWithSword = _this;
if ((isPlayer _unitWithSword) or !(isNil {_unitWithSword getVariable "WBK_AI_ISZombie"}) or !(alive _unitWithSword)) exitWith {};
removeAllWeapons _unitWithSword;
_unitWithSword setUnitPos "UP";
_unitWithSword setVariable ["WBK_AI_ISZombie",true,true];
_unitWithSword setVariable ["WBK_AI_ZombieMoveSet","WBK_CustomCreature",true];
_unitWithSword setVariable ["WBK_SynthHP",120,true];
_unitWithSword setSpeaker "NoVoice";
_unitWithSword disableConversation true;

_unitWithSword spawn {
	uisleep 0.5;
	_this doMove (ASLtoAGL getPosASLVisual _this);
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

			[_x, _damage, "body", "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart2 = ["head","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [5,10,10,10,10];
			[_x, _damage, _bodyPart2, "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

			_bodyPart3 = ["head","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [5,10,10,10,10];
			while {_bodyPart3 == _bodyPart2} do 
			{
				_bodyPart3 = ["head","hand_r","hand_l","leg_r","leg_l"] selectRandomWeighted [5,10,10,10,10];
			};
			[_x, _damage, _bodyPart3, "bite"] remoteExec ["ace_medical_fnc_addDamageToUnit", _x];

				[_x, selectRandom ["PF_Hit_1","PF_Hit_2"], 60, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	
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
	_zombie = _this select 0;
	detach _zombie;
	_zombie spawn {
		uiSleep (0.3 + random 0.1);
		if (isNull _this) exitWith {};
		[_this, selectRandom ["zombie_fall_1","zombie_fall_2","zombie_fall_3"], 50, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	};
	detach _zombie;
	[_zombie, selectRandom ["WBK_Bullsquid_Die_1","WBK_Bullsquid_Die_2","WBK_Bullsquid_Die_3","WBK_Bullsquid_Die_4"], 75, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
	[_zombie, selectRandom ["bullsguid_die_1","bullsguid_die_2"]] remoteExec ["switchMove",0]; 
}];



_unitWithSword addEventHandler ["Suppressed", {
params ["_unit", "_distance", "_shooter", "_instigator", "_ammoObject", "_ammoClassName", "_ammoConfig"];
if ((_distance <= 7) and (alive _unit) and !(animationState _unit in ["bullsguid_run_attack","bullsguid_attack_upclose","bullsguid_attack_spit","bullsguid_evade_l","bullsguid_evade_r"])) then {
	[_unit, selectRandom ["bullsguid_evade_L","bullsguid_evade_R"]] remoteExec ["switchMove",0];
};
_unit reveal [_instigator, 4];
}];



_unitWithSword addEventHandler ["FiredNear", {
params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];
if !(alive _unit) exitWith {};
_unit reveal [_firer, 4];
}];



WBK_Bullsquid_Projectile = {
	_grenade = _this;
	_actualHitClass = "#particlesource" createVehicle position _grenade; 
	_actualHitClass attachTo [_grenade,[0,0,0]];
	waitUntil {sleep 0.1; !(alive _grenade)};
	[_actualHitClass, {
		if (isDedicated) exitWith {};
		_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
		_fulgi setParticleRandom [0, [1, 1, 0], [5, 5, 8], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
		_fulgi setDropInterval 0.01;
		_fulgi setParticleCircle [0, [0, 0, 0]];
		_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[0.01,1,0.1,1]],[1],0,0,"","",_this, 0, false, 0.4, [[0.01,100,0.005,1],[0.01,100,0.005,1],[0.01,100,0.005,1]]]; 
		_fog1 = "#particlesource" createVehicleLocal getposaTL _this;
		_fog1 setParticleParams [ 
				["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, 
					[0, 0, 0], [0, 0, 0], 1, 1.25, 1, 0, 
					[1,1.3],[[0.01,1,0.1,1]], [1000], 1, 0, "", "", _this, 0, false, -1, [[0.01,100,0.005,1],[0.01,100,0.005,1],[0.01,100,0.005,1]]
				]; 
		_fog1 setParticleRandom [3, [1, 1, 0.3], [0, 0, -0.1], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
		_fog1 setParticleCircle [2, [0, 0, -0.12]]; 
		_fog1 setDropInterval 0.01; 
		_fog1 setParticleFire [1,1,0.5];
		_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
		_smlfirelight setPosATL (getPosATL _this);
		_smlfirelight setLightAmbient [0.3, 1, 0]; 
		_smlfirelight setLightColor [0.3, 1, 0]; 
		_smlfirelight setLightBrightness 1;
		_smlfirelight setLightUseFlare true;
		_smlfirelight setLightDayLight true;
		_smlfirelight setLightFlareSize 1;
		_smlfirelight setLightFlareMaxDistance 200; 
		_fog1 say3D ["acid_hit",400];
		uisleep 1;
		deleteVehicle _fulgi;
		_fog1 say3D ["acid_idle",100];
		uisleep 1;
		deleteVehicle _smlfirelight;
		deleteVehicle _fog1;
	}] remoteExec ["spawn", 0];
	uisleep 1;
	deleteVehicle _actualHitClass;
};




_unitWithSword addEventHandler ["AnimStateChanged", { 
	_this spawn {
		 params ["_unit", "_anim"]; 
		 switch _anim do {
				case "bullsguid_run_attack": {
					_throwableItem = "Smasher_AcidGrenade" createVehicle [0,0,(4000 + random 2500)];
					uiSleep 0.7;
					if (animationState _unit != "bullsguid_run_attack") exitWith {deleteVehicle _throwableItem;};
					[_unit, selectRandom ["WBK_Bullsquid_goo_attack_1","WBK_Bullsquid_goo_attack_2","WBK_Bullsquid_goo_attack_3"], 75, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
					_enemy = _unit findNearestEnemy _unit;
					[_unit, selectRandom ["Smasher_swoosh_1","Smasher_swoosh_2"], 200, 6] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
					[_throwableItem, {
						if (isDedicated) exitWith {};
						_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
						_fulgi setParticleRandom [0, [1, 1, 0], [0, 0, 3], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
						_fulgi setDropInterval 0.01;
						_fulgi setParticleCircle [0, [0, 0, 0]];
						_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[0.01,1,0.1,1]],[1],0,0,"","",_this, 0, false, -1, [[0.01,100,0.005,1],[0.01,100,0.005,1],[0.01,100,0.005,1]]]; 
						_fulgi attachTo [_this,[0,0,0]];
						_fog1 = "#particlesource" createVehicleLocal getposaTL _this;
						_fog1 setParticleParams [ 
								["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, 
									[0, 0, 0], [0, 0, 0], 1, 1.25, 1, 0, 
									[0.3,0.6],[[0.01,1,0.1,1]], [1000], 1, 0, "", "", _this, 0, false, -1, [[0.01,100,0.005,1],[0.01,100,0.005,1],[0.01,100,0.005,1]]
								]; 
						_fog1 setParticleRandom [3, [0.1, 0.1, 0.1], [0, 0, -0.1], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
						_fog1 setParticleCircle [0.001, [0, 0, -0.12]]; 
						_fog1 setDropInterval 0.01; 
						_fog1 attachTo [_this,[0,0,0]];
						_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
						_smlfirelight setPosATL (getPosATL _this);
						_smlfirelight setLightAmbient [0.3, 1, 0]; 
						_smlfirelight setLightColor [0.3, 1, 0]; 
						_smlfirelight setLightBrightness 0.4;
						_smlfirelight setLightUseFlare true;
						_smlfirelight setLightDayLight true;
						_smlfirelight setLightFlareSize 0.7;
						_smlfirelight setLightFlareMaxDistance 200; 
						_smlfirelight attachTo [_this,[0,0,0]];
						_fog1 setParticleFire [5,1,0.1];
						_fog1 say3D ["acid_loop",150];
						waitUntil {sleep 0.1; !(alive _this)};
						deleteVehicle _fulgi;
						deleteVehicle _smlfirelight;
						deleteVehicle _fog1;
					}] remoteExec ["spawn", 0];
					_throwableItem setPosATL (_unit modelToWorldVisual [0,2,0.8]);
					detach _throwableItem;
					_dir = (_unit getDir _enemy);
					_vel = velocity _unit;
					_distance = (_unit distance _enemy) * 0.7;
					_pos = (getPosASL _enemy) select 2;
					_pos1 = (getPosASL _unit) select 2;
					_actPos = _pos - _pos1;
					switch true do {
						case (_actPos < 0): {
							_throwableItem setVelocity [(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 6.2];
						};
						case (_actPos > 4): {
							_throwableItem setVelocity [(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 3];
						};
						default {
							_distance = (_unit distance _enemy) * 0.86;
							_throwableItem setVelocity [(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 4.6];
						};
					};
					_throwableItem spawn WBK_Bullsquid_Projectile;
				};
				case "bullsguid_attack_spit": {
					_throwableItem = "Smasher_AcidGrenade" createVehicle [0,0,(4000 + random 2500)];
					uiSleep 0.7;
					if (animationState _unit != "bullsguid_attack_spit") exitWith {deleteVehicle _throwableItem;};
					_enemy = _unit findNearestEnemy _unit;
					[_unit, selectRandom ["WBK_Bullsquid_goo_attack_1","WBK_Bullsquid_goo_attack_2","WBK_Bullsquid_goo_attack_3"], 75, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
					[_throwableItem, {
						if (isDedicated) exitWith {};
						_fulgi  = "#particlesource" createVehiclelocal getposaTL _this; 
						_fulgi setParticleRandom [0, [1, 1, 0], [0, 0, 3], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
						_fulgi setDropInterval 0.01;
						_fulgi setParticleCircle [0, [0, 0, 0]];
						_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.15],[[0.01,1,0.1,1]],[1],0,0,"","",_this, 0, false, -1, [[0.01,100,0.005,1],[0.01,100,0.005,1],[0.01,100,0.005,1]]]; 
						_fulgi attachTo [_this,[0,0,0]];
						_fog1 = "#particlesource" createVehicleLocal getposaTL _this;
						_fog1 setParticleParams [ 
								["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 1, 
									[0, 0, 0], [0, 0, 0], 1, 1.25, 1, 0, 
									[0.3,0.6],[[0.01,1,0.1,1]], [1000], 1, 0, "", "", _this, 0, false, -1, [[0.01,100,0.005,1],[0.01,100,0.005,1],[0.01,100,0.005,1]]
								]; 
						_fog1 setParticleRandom [3, [0.1, 0.1, 0.1], [0, 0, -0.1], 2, 0.15, [0, 0, 0, 0.1], 0, 0]; 
						_fog1 setParticleCircle [0.001, [0, 0, -0.12]]; 
						_fog1 setDropInterval 0.01; 
						_fog1 attachTo [_this,[0,0,0]];
						_smlfirelight = "#lightpoint" createVehicleLocal (getpos _fulgi);
						_smlfirelight setPosATL (getPosATL _this);
						_smlfirelight setLightAmbient [0.3, 1, 0]; 
						_smlfirelight setLightColor [0.3, 1, 0]; 
						_smlfirelight setLightBrightness 0.4;
						_smlfirelight setLightUseFlare true;
						_smlfirelight setLightDayLight true;
						_smlfirelight setLightFlareSize 0.7;
						_smlfirelight setLightFlareMaxDistance 200; 
						_smlfirelight attachTo [_this,[0,0,0]];
						_fog1 setParticleFire [5,1,0.1];
						_fog1 say3D ["acid_loop",150];
						waitUntil {sleep 0.1; !(alive _this)};
						deleteVehicle _fulgi;
						deleteVehicle _smlfirelight;
						deleteVehicle _fog1;
					}] remoteExec ["spawn", 0];
					_throwableItem setPosATL (_unit modelToWorldVisual [0,2,0.8]);
					detach _throwableItem;
					_dir = (_unit getDir _enemy);
					_vel = velocity _unit;
					_distance = (_unit distance _enemy) * 0.7;
					_pos = (getPosASL _enemy) select 2;
					_pos1 = (getPosASL _unit) select 2;
					_actPos = _pos - _pos1;
					switch true do {
						case (_actPos < 0): {
							_throwableItem setVelocity [(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 6.2];
						};
						case (_actPos > 4): {
							_throwableItem setVelocity [(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 3];
						};
						default {
							_distance = (_unit distance _enemy) * 0.86;
							_throwableItem setVelocity [(_vel select 0)+(sin _dir*_distance),(_vel select 1)+(cos _dir*_distance),_actPos + 4.6];
						};
					};
					_throwableItem spawn WBK_Bullsquid_Projectile;
				};
				case "bullsguid_attack_upclose": {
					[_unit, selectRandom ["WBK_Bullsquid_attack_1","WBK_Bullsquid_attack_2"], 75, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
					uiSleep 0.7;
					if (animationState _unit != "bullsguid_attack_upclose") exitWith {};
					[_unit,1,4,false] call OEC_aceDamage;
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
	!(animationState _mutant in ["bullsguid_idle","bullsguid_run","bullsguid_turn_l","bullsguid_turn_r"])
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
			case (((_mutant distance _en) <= 40) and ((_mutant distance _en) > 10) and (isNil {_mutant getVariable "CanSpit"})): {
				_mutant setVariable ["CanSpit",1]; _mutant spawn {uiSleep 5; _this setVariable ["CanSpit",nil];};
				if (animationState _mutant == "bullsguid_run") exitWith {
					[_mutant, "bullsguid_run_attack"] remoteExec ["switchMove",0];
				};
				[_mutant, "bullsguid_attack_spit"] remoteExec ["switchMove",0];
			};
			case ((_mutant distance _en) <= 2): {[_mutant, "bullsguid_attack_upclose"] remoteExec ["switchMove",0];};
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
	if !(animationState _unit in ["bullsguid_attack_spit","bullsguid_run_attack","bullsguid_idle","bullsguid_run","bullsguid_turn_l","bullsguid_turn_r"]) exitWith {
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
			[_unit, selectRandom ["WBK_Bullsquid_idle_1","WBK_Bullsquid_idle_2","WBK_Bullsquid_idle_3","WBK_Bullsquid_idle_4"], 55] call CBA_fnc_GlobalSay3D;
		  };
	_pos = ASLtoAGL getPosASLVisual _nearEnemy;
	_unit doMove _pos;
	[_unit, selectRandom ["WBK_Bullsquid_idle_1","WBK_Bullsquid_idle_2","WBK_Bullsquid_idle_3","WBK_Bullsquid_idle_4"], 20] call CBA_fnc_GlobalSay3D;
}, 2.4, [_unitWithSword]] call CBA_fnc_addPerFrameHandler;


waitUntil {sleep 0.5; 
if (isNull _unitWithSword) exitWith { true };
!(alive _unitWithSword)
};
[_actFr] call CBA_fnc_removePerFrameHandler;
[_loopPathfindDoMove] call CBA_fnc_removePerFrameHandler;
[_loopPathfind] call CBA_fnc_removePerFrameHandler;