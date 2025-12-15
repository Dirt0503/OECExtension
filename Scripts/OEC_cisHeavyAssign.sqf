params ["_unit"];

if(!local _unit)exitWith{};

_headgearPool =
[
	"OEC_CIS_Helmet_Altyn_VisorDown",
    "OEC_CIS_Helmet_Altyn"
];
_unit addHeadgear (selectRandom _headgearPool);

if(isPlayer _unit)exitWith{};

_unit setSkill ["general", 0.75];
_unit setSkill ["spotTime", 0.75];
_unit setSkill ["courage", 0.75];