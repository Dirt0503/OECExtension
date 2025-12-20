params ["_unit"];

private _guy1=createAgent['OEC_Units_CIS_Rifleman',[0,0,100],[],0,""];
_guy1 moveInCargo _unit;
private _guy2=createAgent['OEC_Units_CIS_Rifleman',[0,0,100],[],0,""];
_guy2 moveInCargo _unit;