params ["_unit"];

if(!local _unit)exitWith{};

_headgearPool =
[
	"OEC_CIS_Helmet_Black",
    "OEC_CIS_HeadSet_Black"
];
_unit addHeadgear (selectRandom _headgearPool);

if(isPlayer _unit)exitWith{};

_unit setSkill ["general", 0.8];
_unit setSkill ["spotTime", 0.75];
_unit setSkill ["courage", 0.75];
_unit setSkill ["commanding", 1];

_unit forceSpeed (_unit getSpeed "Normal");
_unit setAnimSpeedCoef 1.5;