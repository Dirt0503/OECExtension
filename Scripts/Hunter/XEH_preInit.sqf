WBK_Combine_FindTarget = {
_targets = _this targets [true, 530];
if (count _targets == 0) exitWith {
_nearestEn = _this findNearestEnemy _this;
_nearestEn
};
_tarArr = [];
{
_ins = lineIntersectsSurfaces [
		aimPos _this,
		eyePos _x,
		_this,
		_x,
		true,
		1,
		"VIEW",
		"NONE"
];
if (count _ins == 0) then {
_tarArr pushBack _x;
};
} forEach _targets;
if (count _tarArr == 0) exitWith {
_nearestEn = _this findNearestEnemy _this;
_nearestEn
};
_un = _tarArr select 0;
_un
};

WBK_fnc_ProjectileCreate_Hunter_Synth = {  
params  
[  
 ["_shooter", objNull, [objNull]],  
 ["_startPos", [0.0 , 0.0, 0.0], [[]]],  
 ["_class", "M_Titan_AT", ["", objNull]],  
 ["_target", objNull, [objNull]],  
 ["_tgtPos", [0.0 , 0.0, 0.0], [[]]],  
 ["_speed", 100.0, [0.0]],  
 ["_destroyTarget", true, [true]],  
 ["_localOffset", [0.0, 0.0, 0.0], [[]]],  
 ["_minDistanceToTarget", 8.0, [0.0]],  
 ["_function", "", [""]],  
 ["_isGlobalFunction", false, [true]]  
];  
// Validate parameters  
if (count _startPos != 3 || {{typeName _x != typeName 0} count _startPos > 0}) exitWith {"fn_guidedProjectile invalid position, not a 3D vector" call BIS_fnc_error};  
if (_startPos isEqualTo [0,0,0]) exitWith {"fn_guidedProjectile invalid position, at 0,0,0" call BIS_fnc_error};  
if (typeName _class == typeName "" && {_class == ""}) exitWith {"fn_guidedProjectile invalid class provided" call BIS_fnc_error};  
if (typeName _class == typeName objNull && {isNull _class}) exitWith {"fn_guidedProjectile invalid object provided" call BIS_fnc_error};  
if (isNull _target) exitWith {"fn_guidedProjectile invalid target provided" call BIS_fnc_error};  
// Create the projectile  
private _rocket = if (typeName _class == typeName "") then {createVehicle [_class, _startPos, [], 0, "CAN_COLLIDE"]} else {_class};  
  
// Make sure creation was succeeded  
if (isNull _rocket) exitWith  
{  
 ["fn_guidedProjectile could not spawn rocket of class %1 at %2", _class, _startPos] call BIS_fnc_error;  
};  
  
// Call function if requested  
if (_function != "" && {call compile format["!isNil {%1}", _function]}) then  
{  
 [_rocket] remoteExec [_function, if (_isGlobalFunction) then {0} else {2}];  
};  
// Set correct initial position  
_rocket setPosATL _startPos;  
_rocket setShotParents [vehicle _shooter, _shooter]; 
// Loop  
 private _currentPos = getPosASLVisual _rocket;  
 private _targetPos = _tgtPos;  
  
 private _forwardVector = vectorNormalized (_targetPos vectorDiff _currentPos);  
 private _rightVector = (_forwardVector vectorCrossProduct [0,0,1]) vectorMultiply -1;  
 private _upVector = _forwardVector vectorCrossProduct _rightVector;  
  
 private _targetVelocity = _forwardVector vectorMultiply _speed;  
  
 [_rocket,[_forwardVector, _upVector]] remoteExec ["setVectorDirAndUp",0];   
 [_rocket,_targetVelocity] remoteExec ["setVelocity",0];   
 uisleep 20;  
 deleteVehicle _rocket;  
};  

WBK_fnc_ProjectileCreate_Synth = {  
params  
[  
 ["_shooter", objNull, [objNull]],  
 ["_startPos", [0.0 , 0.0, 0.0], [[]]],  
 ["_class", "M_Titan_AT", ["", objNull]],  
 ["_target", objNull, [objNull]],  
 ["_speed", 100.0, [0.0]],  
 ["_destroyTarget", true, [true]],  
 ["_localOffset", [0.0, 0.0, 0.0], [[]]],  
 ["_minDistanceToTarget", 8.0, [0.0]],  
 ["_function", "", [""]],  
 ["_isGlobalFunction", false, [true]]  
];  
// Validate parameters  
if (count _startPos != 3 || {{typeName _x != typeName 0} count _startPos > 0}) exitWith {"fn_guidedProjectile invalid position, not a 3D vector" call BIS_fnc_error};  
if (_startPos isEqualTo [0,0,0]) exitWith {"fn_guidedProjectile invalid position, at 0,0,0" call BIS_fnc_error};  
if (typeName _class == typeName "" && {_class == ""}) exitWith {"fn_guidedProjectile invalid class provided" call BIS_fnc_error};  
if (typeName _class == typeName objNull && {isNull _class}) exitWith {"fn_guidedProjectile invalid object provided" call BIS_fnc_error};  
if (isNull _target) exitWith {"fn_guidedProjectile invalid target provided" call BIS_fnc_error};  
// Create the projectile  
private _rocket = if (typeName _class == typeName "") then {createVehicle [_class, _startPos, [], 0, "CAN_COLLIDE"]} else {_class};  
  
// Make sure creation was succeeded  
if (isNull _rocket) exitWith  
{  
 ["fn_guidedProjectile could not spawn rocket of class %1 at %2", _class, _startPos] call BIS_fnc_error;  
};  
  
// Call function if requested  
if (_function != "" && {call compile format["!isNil {%1}", _function]}) then  
{  
 [_rocket] remoteExec [_function, if (_isGlobalFunction) then {0} else {2}];  
};  
// Set correct initial position  
_rocket setPosATL _startPos;  
_rocket setShotParents [vehicle _shooter, _shooter]; 
// Loop  
 private _currentPos = getPosASLVisual _rocket;  
 private _targetPos = aimPos _target;  
  
 private _forwardVector = vectorNormalized (_targetPos vectorDiff _currentPos);  
 private _rightVector = (_forwardVector vectorCrossProduct [0,0,1]) vectorMultiply -1;  
 private _upVector = _forwardVector vectorCrossProduct _rightVector;  
  
 private _targetVelocity = _forwardVector vectorMultiply _speed;  
  

 
 [_rocket,[_forwardVector, _upVector]] remoteExec ["setVectorDirAndUp",0];   
 [_rocket,_targetVelocity] remoteExec ["setVelocity",0];   
 
 uisleep 20;  
 deleteVehicle _rocket;  
};  

WBK_StriderMainFire_AI = {
_strider = _this select 0;
_gun = _this select 1;
_enemy = _this select 2;
[_strider,getPosATL _gun, "Strider_mainGun_Round", _enemy, 850, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Strider;
_gun spawn {
[_this, "WBK_StriderFire_MainGun",1000] call CBA_fnc_GlobalSay3D;
_this hideObject false;
[_this, false] remoteExec ["hideObject", 0]; 
uisleep (0.05 + random 0.05);
[_this, true] remoteExec ["hideObject", 0,true]; 
};
_var = _strider getVariable "WBK_StriderRounds";
_var = _var - 1;
if (_var <= 0) exitWith {_strider setVariable ["WBK_StriderRounds",0];_strider spawn {uiSleep 8;_this setVariable ["WBK_StriderRounds",15];};};
_strider setVariable ["WBK_StriderRounds",_var];
};

["Our benefactors", "wbk_hl_StriderAttack", ["(Any Synth) Melee attack", "If you playing as Strider/Hunter/Elite synth you can press that key to do melee attack."], {
    _unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if (
	!(alive _unit) or
	(animationState _unit == "strider_crouch_idle") or
	(animationState _unit == "strider_crouch_walk_B") or
	(animationState _unit == "strider_crouch_walk_F") or
	(animationState _unit == "strider_crouch_walk_L") or
	(animationState _unit == "strider_crouch_walk_R") or
	(animationState _unit == "strider_idle_STOMP") or
	(animationState _unit == "strider_idle_to_crouch") or
	(animationState _unit == "strider_crouch_to_idle") or
	!(_unit isKindOf "WBK_Strider_HL2")
	) exitWith {};
    _unit spawn StriderAI_Talk;
    _unit spawn WBK_Fnc_StriderCloseCombat;
}, {},[18, [false, false, false]]] call cba_fnc_addKeybind;



["Our benefactors", "wbk_hl_StriderMakenoise", ["(Any Synth) Scream/Speak/Make a sound", "If you playing as Strider/Hunter/Elite synth you can press that key to scream or do any other noise."], {
    _unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
	if (
	!(alive _unit) or
	!(isNil {_unit getVariable "strider_cantalk"}) or
	!(_unit isKindOf "WBK_Strider_HL2")
	) exitWith {};
    _unit spawn StriderAI_Talk;
}, {},[16, [false, false, false]]] call cba_fnc_addKeybind;


WBK_StriderSecondaryFire_AI = {
_strider = _this select 0;
_gun = _this select 1;
_enemy = _this select 2;
_strider setVariable ["WBK_BlockStriderSecondShot",1];_strider spawn {uiSleep 60;_this setVariable ["WBK_BlockStriderSecondShot",nil];};
[_gun,_enemy,_strider] spawn {
_gun = _this select 0;
_enemy = _this select 1;
_strider = _this select 2;
_gun remoteExec ["WBK_Create_StriderSuperCanonFire", [0,-2] select isDedicated,false];
[_gun, "WBK_StriderFire_Secondary_pre",500] call CBA_fnc_GlobalSay3D;
uisleep 0.93;
if !(alive _gun) exitWith {};
[_gun, "WBK_StriderFire_Secondary",1500] call CBA_fnc_GlobalSay3D;
[_strider,getPosATL _gun, "WBK_StriderShot_Super", _enemy, 2500, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Strider;
[_gun, false] remoteExec ["hideObject", 0]; 
uisleep (0.05 + random 0.05);
[_gun, true] remoteExec ["hideObject", 0,true]; 
};
};


StriderAI_Talk = {
_this setVariable ["strider_cantalk",1];
[_this, {
if ((player distance _this) <= 400) exitWith {
_this say3D [selectRandom ["WBK_Strider_Alert_Close_1","WBK_Strider_Alert_Close_2","WBK_Strider_Alert_Close_3","WBK_Strider_Alert_Close_4"],4500];
};
if ((player distance _this) <= 1700) exitWith {
_this say3D [selectRandom ["WBK_Strider_Alert_Dist_1","WBK_Strider_Alert_Dist_2","WBK_Strider_Alert_Dist_3"],4500];
};
}] remoteExec ["spawn", [0,-2] select isDedicated,false];
sleep (5 + random 15);
_this setVariable ["strider_cantalk",nil];
};


WBK_fnc_ProjectileCreate_Strider = {  
params  
[  
 ["_shooter", objNull, [objNull]],  
 ["_startPos", [0.0 , 0.0, 0.0], [[]]],  
 ["_class", "M_Titan_AT", ["", objNull]],  
 ["_target", objNull, [objNull]],  
 ["_speed", 100.0, [0.0]],  
 ["_destroyTarget", true, [true]],  
 ["_localOffset", [0.0, 0.0, 0.0], [[]]],  
 ["_minDistanceToTarget", 8.0, [0.0]],  
 ["_function", "", [""]],  
 ["_isGlobalFunction", false, [true]]  
];  
// Validate parameters  
if (count _startPos != 3 || {{typeName _x != typeName 0} count _startPos > 0}) exitWith {"fn_guidedProjectile invalid position, not a 3D vector" call BIS_fnc_error};  
if (_startPos isEqualTo [0,0,0]) exitWith {"fn_guidedProjectile invalid position, at 0,0,0" call BIS_fnc_error};  
if (typeName _class == typeName "" && {_class == ""}) exitWith {"fn_guidedProjectile invalid class provided" call BIS_fnc_error};  
if (typeName _class == typeName objNull && {isNull _class}) exitWith {"fn_guidedProjectile invalid object provided" call BIS_fnc_error};  
if (isNull _target) exitWith {"fn_guidedProjectile invalid target provided" call BIS_fnc_error};  
// Create the projectile  
private _rocket = if (typeName _class == typeName "") then {createVehicle [_class, _startPos, [], 0, "CAN_COLLIDE"]} else {_class};  
  
// Make sure creation was succeeded  
if (isNull _rocket) exitWith  
{  
 ["fn_guidedProjectile could not spawn rocket of class %1 at %2", _class, _startPos] call BIS_fnc_error;  
};  
  
// Call function if requested  
if (_function != "" && {call compile format["!isNil {%1}", _function]}) then  
{  
 [_rocket] remoteExec [_function, if (_isGlobalFunction) then {0} else {2}];  
};  
// Set correct initial position  
_rocket setPosATL _startPos;  
_rocket setShotParents [vehicle _shooter, _shooter]; 
// Loop  
 private _currentPos = getPosASLVisual _rocket;  
 private _targetPos = aimPos _target;  
  
 private _forwardVector = vectorNormalized (_targetPos vectorDiff _currentPos);  
 private _rightVector = (_forwardVector vectorCrossProduct [0,0,1]) vectorMultiply -1;  
 private _upVector = _forwardVector vectorCrossProduct _rightVector;  
  
 private _targetVelocity = _forwardVector vectorMultiply _speed;  
  
 [_rocket,[_forwardVector, _upVector]] remoteExec ["setVectorDirAndUp",0];   
 [_rocket,_targetVelocity] remoteExec ["setVelocity",0]; ;  
 uisleep 20;  
 deleteVehicle _rocket;  
};  

WBK_Fnc_StriderCloseCombat = {
_strider = _this;
if (!(alive _strider) or (animationState _strider == "strider_idle_STOMP")) exitWith {};
_strider setVariable ["WBK_StriderRounds",0];
[_strider, "strider_idle_STOMP"] remoteExec ["switchMove", 0,true]; 
[_strider, "strider_idle_STOMP"] remoteExec ["playMoveNow", 0,true]; 
uisleep 1.2;
if (!(alive _strider) or !(animationState _strider == "strider_idle_STOMP")) exitWith {};
{_x setDamage 1;} forEach nearestTerrainObjects [_strider,[],11,false];
{if (!(_x isKindOf "WBK_Strider_HL2") and !(typeOf _x == "WBK_Strider_MainCanon") and !(typeOf _x == "WBK_Strider_SecCanon") and !(typeOf _x == "WBK_Strider_Hitbox")) then {_x setDamage 1;};} forEach nearestObjects [_strider,[],11,false];
[_strider, "WBK_Strider_Fall", 300, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
[_strider, {
if ((player distance _this) < 70) then {
enableCamShake true;
addCamShake [6, 5, 25];
};
_aslLoc = _this;
_dustEffect = "#particlesource" createVehicleLocal getPosATL _aslLoc; 
_dustEffect setParticleClass "BombDust"; 
_dustEffect attachto [_aslLoc,[0,0,0]];
detach _dustEffect;
	_col = [0,0,0];
	_c1 = _col select 0;
	_c2 = _col select 1;
	_c3 = _col select 2;
	_rocks1 = "#particlesource" createVehicleLocal getPosAsl _aslLoc;
	_rocks1 setposasl getPosAsl _aslLoc;
	_rocks1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.45, .45], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
	_rocks1 setParticleRandom [0, [1, 1, 0], [20, 20, 15], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
	_rocks1 setDropInterval 0.01;
	_rocks1 setParticleCircle [0, [0, 0, 0]];

	_rocks2 = "#particlesource" createVehicleLocal getPosAsl _aslLoc;
	_rocks2 setposasl getPosAsl _aslLoc;
	_rocks2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.27, .27], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
	_rocks2 setParticleRandom [0, [1, 1, 0], [25, 25, 15], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
	_rocks2 setDropInterval 0.01;
	_rocks2 setParticleCircle [0, [0, 0, 0]];

	_rocks3 = "#particlesource" createVehicleLocal getPosAsl _aslLoc;
	_rocks3 setposasl getPosAsl _aslLoc;
	_rocks3 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.09, .09], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
	_rocks3 setParticleRandom [0, [1, 1, 0], [30, 30, 15], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
	_rocks3 setDropInterval 0.01;
	_rocks3 setParticleCircle [0, [0, 0, 0]];
_rocks = [_rocks1,_rocks2, _rocks3];
{
_x attachto [_aslLoc,[0,0,0]];
} foreach _rocks;
sleep 0.15;
{
deletevehicle _x;
} foreach _rocks;
sleep 0.6;
deletevehicle _dustEffect;
}] remoteExec ["spawn", [0,-2] select isDedicated,false];
uiSleep 1.5;
_strider setVariable ["WBK_StriderRounds",16];
};



WBK_SynthFire_AI_Hunter = {
_strider = _this select 0;
_guns = _this select 1;
_enemy = _this select 2;
_strider disableAI "MOVE";
[_strider, "hunter_FirePosition_Fire"] remoteExec ["switchMove", 0]; 
_gun = _guns select 0;
[_strider, selectRandom ["WBK_hunter_foundenemy1","WBK_hunter_foundenemy2","WBK_hunter_foundenemy3"], 35, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
[_strider,getPosATL _gun, "HunterSynth_mainGun_Round", _enemy, getPosASLVisual _enemy, 450, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
_gun spawn {
[_this, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
_this hideObject false;
[_this, false] remoteExec ["hideObject", 0]; 
uisleep (0.05 + random 0.05);
[_this, true] remoteExec ["hideObject", 0,true]; 
};
uiSleep 0.12;
_gun = _guns select 1;
[_gun, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
[_strider,getPosATL _gun, "HunterSynth_mainGun_Round", _enemy, getPosASLVisual _enemy, 450, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
uiSleep 0.12;
_gun = _guns select 0;
[_strider,getPosATL _gun, "HunterSynth_mainGun_Round", _enemy, aimPos _enemy, 450, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
_gun spawn {
[_this, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
_this hideObject false;
[_this, false] remoteExec ["hideObject", 0]; 
uisleep (0.05 + random 0.05);
[_this, true] remoteExec ["hideObject", 0,true]; 
};
uiSleep 0.12;
_gun = _guns select 1;
[_gun, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
[_strider,getPosATL _gun, "HunterSynth_mainGun_Round", _enemy, aimPos _enemy, 450, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
_var = _strider getVariable "WBK_StriderRounds";
_var = _var - 1;
if (_var <= 0) exitWith {
_strider setVariable ["WBK_StriderRounds",0];
doStop _strider;
_strider enableAI "MOVE";
[_strider, "hunter_FirePosition_Out"] remoteExec ["switchMove", 0]; 
uiSleep 3.5;
if (isPlayer _strider) exitWith {
_strider setVariable ["WBK_StriderRounds",5];
};
_strider setVariable ["WBK_StriderRounds",2];
};
_strider setVariable ["WBK_StriderRounds",_var];
};



WBK_HunterCloseAttack = {
_zombie = _this select 0;
_enemy = _this select 1;
[_zombie, selectRandom ["WBK_hunter_foundenemy1","WBK_hunter_foundenemy2","WBK_hunter_foundenemy3"], 85, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
[_zombie, "hunter_melee"] remoteExec ["switchMove", 0]; 
[_zombie, "hunter_melee"] remoteExec ["playMoveNow", 0]; 
doStop _zombie;
uiSleep 0.1;
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
}, 0.01, [_zombie, _enemy, "hunter_melee"]] call CBA_fnc_addPerFrameHandler;
uisleep 0.6;
[_loopPathfindDoMove] call CBA_fnc_removePerFrameHandler;
if (
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkHeadcrab') or
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkHoundeye') or
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkBullsuiqd') or
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkHAntlion')
) exitWith {
_enemy setDamage 1;
};
if (!(isNil {_enemy getVariable "IMS_IsUnitInvicibleScripted"}) or !(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'CfgMovesMaleSdr') or ((_zombie distance _enemy) > 3.9) or !(animationState _zombie == "hunter_melee") or (lifeState _zombie == "INCAPACITATED") or !(alive _zombie)) exitWith {};
[_enemy, selectRandom ["WBK_antlion_hit_1","WBK_antlion_hit_2","WBK_antlion_hit_3"], 65, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
if (!(isNil {_enemy getVariable "WBK_AI_ISZombie"})) then {
[_enemy,_zombie,0.6,"Fists"] remoteExec ["WBK_ZombiesProcessDamage", _enemy];
}else{
[_enemy, ["","pain_01","pain_02","pain_03","pain_04","pain_05","pain_06","pain_07","pain_08","pain_09","pain_10"], 70, true] call WBK_MakeVoiceOver_Combine;
[_enemy,_zombie] remoteExec ["WBK_CreateMeleeHitAnim", _enemy];
uiSleep 0.05;
[_enemy, 0.35, _zombie] remoteExec ["WBK_CreateDamage", _enemy];
};
};



WBK_HunterCloseAttack_player = {
_zombie = _this;
[_zombie, selectRandom ["WBK_hunter_foundenemy1","WBK_hunter_foundenemy2","WBK_hunter_foundenemy3"], 85, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
[_zombie, "hunter_melee"] remoteExec ["switchMove", 0]; 
[_zombie, "hunter_melee"] remoteExec ["playMoveNow", 0]; 
doStop _zombie;
uisleep 0.5;
{
_enemy = _x;
if (
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkHeadcrab') or
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkHoundeye') or
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkBullsuiqd') or
(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'cfgMovesWbkHAntlion')
) then {
_enemy setDamage 1;
}else{
if ((side _enemy == side _zombie) or !(alive _enemy) or !(isNil {_enemy getVariable "IMS_IsUnitInvicibleScripted"}) or !(getText (configfile >> 'CfgVehicles' >> typeOf _enemy >> 'moves') == 'CfgMovesMaleSdr') or ((_zombie distance _enemy) > 3.9) or !(animationState _zombie == "hunter_melee") or (lifeState _zombie == "INCAPACITATED") or !(alive _zombie)) exitWith {};
if !(isPlayer _enemy) exitWith {
[_zombie, _enemy] spawn WBK_HumanSynthHunter_Execution;
};
[_enemy, selectRandom ["WBK_antlion_hit_1","WBK_antlion_hit_2","WBK_antlion_hit_3"], 65, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
if (!(isNil {_enemy getVariable "WBK_AI_ISZombie"})) then {
[_enemy,_zombie,0.6,"Fists"] remoteExec ["WBK_ZombiesProcessDamage", _enemy];
}else{
[_enemy, ["","pain_01","pain_02","pain_03","pain_04","pain_05","pain_06","pain_07","pain_08","pain_09","pain_10"], 70, true] call WBK_MakeVoiceOver_Combine;
[_enemy,_zombie] remoteExec ["WBK_CreateMeleeHitAnim", _enemy];
uiSleep 0.05;
[_enemy, 0.55, _zombie] remoteExec ["WBK_CreateDamage", _enemy];
};
};
sleep 0.05;
} forEach nearestObjects [_zombie,["MAN"],3.5];
};



WBK_HunterScanningAbility = { 
if (!(isNil {_this getVariable "WBK_HunterCanScan"}) or (animationState _this == "hunter_scanLocation")) exitWith {}; 
_this setVariable ["WBK_HunterCanScan",1]; 
_this spawn {uiSleep 20;_this setVariable ["WBK_HunterCanScan",nil];};
[_this, selectRandom["WBK_hunter_scan1", "WBK_hunter_scan2", "WBK_hunter_scan3", "WBK_hunter_scan4"], 400] call CBA_fnc_GlobalSay3D;
[_this, "hunter_scanLocation"] remoteExec["switchMove", 0];
[_this, "hunter_scanLocation"] remoteExec["playMoveNow", 0];
sleep 1;
if (!(alive _this) or (animationState _this != "hunter_scanLocation")) exitWith {};
_nearestTargets = nearestObjects [_this, ["MAN", "TANK", "StaticWeapon","AIR","Ship","CAR"], 200];
_validNearestTargets = [];
{ 
_distCheck = lineIntersectsSurfaces [aimPos _this, aimPos (vehicle _x), _this, (vehicle _x), true, 1,"GEOM","NONE"];
if ((alive _x) and (side _x != side _this) and (count _distCheck == 0)) then { _validNearestTargets set [(count _validNearestTargets), _x]; }; 
} forEach _nearestTargets;
[[_validNearestTargets,_this],{
if (side player != side (_this select 1)) exitWith {};
_DT_HudSpawn = [{
    _array = _this select 0;
    { 
        if (alive _x) then { 
		    _varName = getText (configfile >> "CfgVehicles" >> typeOf _x >> "displayName");
            drawIcon3D ["\WBK_Combines\icons\red_target.paa",[0.8,0,0,0.9],unitAimPositionVisual (vehicle _x),1.2,1.2,0,_varName,0,0.04,"RobotoCondensed","center",true];  
        };  
    } forEach _array;
}, 0.001, (_this select 0)] call CBA_fnc_addPerFrameHandler;
sleep 30;
[_DT_HudSpawn] call CBA_fnc_removePerFrameHandler;
}] remoteExec ["spawn",0];
};



WBK_HunterCharge = { 
if !(isNil {_this getVariable "WBK_HunterCanCharge"}) exitWith {}; 
_this setVariable ["WBK_HunterCanCharge",1]; 
_this spawn {uiSleep (21 + random 15);_this setVariable ["WBK_HunterCanCharge",nil];};
doStop _this; 
_this disableAI "ANIM"; 
_this disableAI "MOVE"; 
[_this, "hunter_charge_start"] remoteExec ["switchMove", 0];  
[_this, selectRandom ["WBK_hunter_charge_1","WBK_hunter_charge_2"], 85, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
uiSleep 1.9;
_this playMoveNow "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
uiSleep 20;
if !(animationState _this == "hunter_charge_loop") exitWith {};
[_this, "hunter_charge_finish"] remoteExec ["switchMove", 0];
_this enableAI "MOVE";
_this enableAI "ANIM";
};



WBK_HunterCharge_player = { 
if !(isNil {_this getVariable "WBK_HunterCanCharge"}) exitWith {}; 
_this setVariable ["WBK_HunterCanCharge",1]; 
_this spawn {uiSleep (21 + random 15);_this setVariable ["WBK_HunterCanCharge",nil];};
doStop _this; 
_this disableAI "ANIM"; 
_this disableAI "MOVE"; 
[_this, "hunter_charge_start"] remoteExec ["switchMove", 0];  
[_this, selectRandom ["WBK_hunter_charge_1","WBK_hunter_charge_2"], 85, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";  
uiSleep 1.9;
_actFr_Loop = [{
    _array = _this select 0;
    _unit = _array select 0;
	{_unit reveal [_x,4];} forEach nearestObjects [_unit,["MAN","CAR","TANK","StaticWeapon"],40]; 
	_nearEnemy = _unit call WBK_Combine_FindTarget;
	if ((animationState _unit == "hunter_charge_start") or (animationState _unit == "hunter_charge_loop") or (animationState _unit == "hunter_FirePosition_Pre") or (animationState _unit == "hunter_FirePosition_Loop") or (animationState _unit == "hunter_FirePosition_Fire")) then {
	_ins = lineIntersectsSurfaces [
		AGLToASL (_unit modelToWorld [0,0,0.6]), 
		AGLToASL (_unit modelToWorld [0,1,0.6]), 
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
	if ((animationState _unit == "hunter_charge_loop") and ((_unit distance _nearEnemy) <= 3)) exitWith {
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
	};
}, 0.01, [_this]] call CBA_fnc_addPerFrameHandler;
_this playMoveNow "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
_this playMove "hunter_charge_loop"; 
sleep 1;
waitUntil {sleep 0.5; !(alive _this) or (!(animationState _this == "hunter_charge_loop") && !(animationState _this == "hunter_charge_start"))};
[_actFr_Loop] call CBA_fnc_removePerFrameHandler;
};



WBK_HunterPlayDeathAnim = {
_hunter = _this;
if ((animationState _hunter == "hunter_die_2") or (animationState _hunter == "hunter_die_1")) exitWith {};
_rndAnim = selectRandom ["hunter_die_2","hunter_die_1"];
[_hunter, _rndAnim] remoteExec ["switchMove", 0]; 
detach _hunter;
[_hunter, selectRandom ["WBK_hunter_die_1","WBK_hunter_die_2"], 175, 5] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf";
switch (_rndAnim) do
{
    case "hunter_die_1": { 
	uiSleep 2.5; _this setDamage 1;
	};
	case "hunter_die_2": { 
	uiSleep 2.1; _this setDamage 1;
	};
};
};



WBK_CalculatePlayerCameraCrosshair = {
 _unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
 
 _start = [(eyePos _unit select 0), (eyePos _unit select 1), (eyePos _unit select 2)];
 _end = (_start vectorAdd (getCameraViewDirection _unit vectorMultiply (40)));
 _vDir = _start vectorFromTo _end;
 _vSide = [-(_vDir select 1), _vDir select 0, 0];
 _vUp = _vDir vectorCrossProduct _vSide;
  _this setVectorDir (getCameraViewDirection  _unit);
  _this setVectorUp _vUp;
 _beg = [(eyePos _unit select 0), (eyePos _unit select 1), (eyePos _unit select 2)];
 _endV = (_beg vectorAdd (getCameraViewDirection _unit vectorMultiply (40)));
  _this setPosASL [(_endV select 0), (_endV select 1), (_endV select 2)];
};



WBK_SynthFire_AI_Hunter_PLAYER = {
_strider = _this select 0;
_strider setVariable ["BlockFireAbility_WBK",1];
_guns = _this select 1;
_enemy = _this select 2;
_strider disableAI "MOVE";
_enemy call WBK_CalculatePlayerCameraCrosshair;
_gun = _guns select 0;
[_strider, selectRandom ["WBK_hunter_foundenemy1","WBK_hunter_foundenemy2","WBK_hunter_foundenemy3"], 35, 3] execVM "\WebKnight_StarWars_Mechanic\createSoundGlobal.sqf"; 
[_strider,getPosASL _gun, "HunterSynth_mainGun_Round", _enemy, getPosASLVisual _enemy, 550, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
_gun spawn {
[_this, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
_this hideObject false;
[_this, false] remoteExec ["hideObject", 0]; 
uisleep (0.05 + random 0.05);
[_this, true] remoteExec ["hideObject", 0,true]; 
};
uiSleep 0.12;
_enemy call WBK_CalculatePlayerCameraCrosshair;
_gun = _guns select 1;
[_gun, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
[_strider,getPosASL _gun, "HunterSynth_mainGun_Round", _enemy, getPosASLVisual _enemy, 550, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
uiSleep 0.12;
_enemy call WBK_CalculatePlayerCameraCrosshair;
_gun = _guns select 0;
[_strider,getPosASL _gun, "HunterSynth_mainGun_Round", _enemy, aimPos _enemy, 550, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
_gun spawn {
[_this, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
_this hideObject false;
[_this, false] remoteExec ["hideObject", 0]; 
uisleep (0.05 + random 0.05);
[_this, true] remoteExec ["hideObject", 0,true]; 
};
uiSleep 0.12;
_enemy call WBK_CalculatePlayerCameraCrosshair;
_gun = _guns select 1;
[_gun, "WBK_hunter_fire",350] call CBA_fnc_GlobalSay3D;
[_strider,getPosASL _gun, "HunterSynth_mainGun_Round", _enemy, aimPos _enemy, 550, false, [0,0,0]] spawn WBK_fnc_ProjectileCreate_Hunter_Synth;
_var = _strider getVariable "WBK_StriderRounds";
_var = _var - 1;
_strider setVariable ["BlockFireAbility_WBK",nil];
if (_var <= 0) exitWith {
_strider setVariable ["WBK_StriderRounds",0];
doStop _strider;
_strider enableAI "MOVE";
[_strider, "hunter_FirePosition_Out"] remoteExec ["switchMove", 0]; 
uiSleep 5.5;
_strider setVariable ["WBK_StriderRounds",5];
};
_strider setVariable ["WBK_StriderRounds",_var];
};