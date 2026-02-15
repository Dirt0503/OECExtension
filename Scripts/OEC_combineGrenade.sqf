params ["_unit"];

_grenadeRed = [1, 0, 0];
private _grenadeLight = "#lightpoint" createVehicleLocal (getPos _unit);
_grenadeLight lightAttachObject [_unit,[0,0,0.05]];
_grenadeLight setLightColor _grenadeRed;
_grenadeLight setLightUseFlare true;
_grenadeLight setLightFlareSize 0.25;
_grenadeLight setLightFlareMaxDistance 250;
_grenadeLight setLightDayLight true;
_grenadeLight setLightIntensity 10000;
_grenadeLight setLightBrightness 0.15;

waitUntil {sleep 0.2; 
if (isNull _unit) then {true} else {false};
};
deleteVehicle _grenadeLight;