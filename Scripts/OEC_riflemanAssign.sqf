if (isNull _unit) exitWith {false};
if (is3DEN || _unit getvariable ["saved3DENInventory",false]) exitwith {}; 
if !(local _unit) exitWith {false};
_skipRandomization = ({(_unitType isEqualTo _x) || (_unitType isKindOf _x) || (format ["%1", _unitType] isEqualTo _x) || format ["%1", _unit] isEqualTo _x} count (getArray(missionConfigfile >> "disableRandomization")) > 0 || !(_unit getVariable ["BIS_enableRandomization", true]));
if (_skipRandomization) exitWith {};

private _unitClass = typeOf _unit;

params ["_unit"];

_magazinePool = 
[ 
    "OEC_Magazine_545x39_30Rnd_Bakelite", 
    "OEC_Magazine_545x39_30Rnd_Black", 
    "OEC_Magazine_545x39_30Rnd_Taped" 
];
_unit addMagazines [(selectRandom _magazinePool), 10]; 
 
    
_uniformPool =
[
	"OEC_CIS_Uniform_TTSKO1",
	"OEC_CIS_Uniform_Izlom",
    "OEC_CIS_Uniform_Flora"
];
_unit forceAddUniform (selectRandom _uniformPool);

_headgearPool =
[
	"OEC_CIS_Helmet_6b26_Flora",
    "OEC_CIS_Helmet_6b26_ess",
    "OEC_CIS_Helmet_6b26_green",
    "OEC_CIS_Helmet_6b26_ess_green"
];
_unit addHeadgear (selectRandom _headgearPool);

_gogglesPool =
[
	"OEC_CIS_Facewear_Scarf",
    "OEC_CIS_Facewear_Balaclava_Olive",
    "OEC_CIS_Facewear_Glasses_Empty"
];
_newGoggles = selectRandom _gogglesPool;
removeGoggles _unit; 
_unit addGoggles _newGoggles;

if(isPlayer _unit)exitWith{};

_unit setSkill ["general", 0.75];
_unit setSkill ["spotTime", 0.75];
_unit setSkill ["courage", 0.75];