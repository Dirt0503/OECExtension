params ["_unit"];

if(!local _unit)exitWith{};

_uniformPool =
[
	"OEC_CIS_Uniform_6sh112"
];
_unit forceAddUniform (selectRandom _uniformPool);

_unit setSkill ["general", 1];
_unit setSkill ["spotTime", 1];
_unit setSkill ["spotDistance", 1];
_unit setSkill ["aimingSpeed", 1];
_unit setSkill ["courage", 0.1];

_unit forceSpeed (_unit getSpeed "Normal");
_unit setAnimSpeedCoef 1.6;
