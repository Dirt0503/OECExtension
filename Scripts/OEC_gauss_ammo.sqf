params ["_bullet"];

systemchat "GAUSS BULLET FIRED";
_bullet addEventHandler ["HitPart",{

    _posASL = getPosASL _this select 0;
    [_posASL,{
        _fulgi  = "#particlesource" createVehiclelocal _posASL; 
        _fulgi setParticleRandom [0, [0, 0, 0], [6, 6, 10], 3, 0.1, [0, 0, 0, 0.1], 0.1, 1];
        _fulgi setDropInterval 0.001;
        _fulgi setParticleCircle [0, [0, 0, 0]];
        _fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,2,[0,0,0],[0,0,0],0,40,1,0,[0.15, 0.075, 0.025, 0.0001],[[0,0.47,1,1]],[1],0,0,"","",_posASL, 0, false, 0.4, [[0,147,255,1],[0,147,255,0.5],[0,147,255,0.1]]]; 
        _gravi1 = "#particlesource" createVehicleLocal _posASL;  
        _gravi1 setParticleCircle [0.15, [0.25, 0.25, 0]];
        _gravi1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1,0],"","Billboard",1,0.3,[0,0,0],[0,0,0.6],0,0.05,0.04,0.05,[1,2,5,8,12,17],[[0.1,0.1,0.1,1],[0.25,0.25,0.25,1],[0.5,0.5,0.5,1],[0,0,0,1],[0,0,0,0.5],[0,0,0,0.3]],[1.5,0.5,0,0],0.4,0.09,"","","",0,false,0,[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]];
        _gravi1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0.25, [0.05, 0.05, 0.05, 0.1], 0, 0];
        _gravi1 setDropInterval 0.0004;
        _smoke2 = "#particlesource" createVehicleLocal getposASL _this;
        _smoke2 setPosASL (getposASL _this);
        _smoke2 setParticleCircle [0.25, [15, 15, 0]];
        _smoke2 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0.1, [0.05, 0.05, 0.05, 0.1], 0, 0];
        _smoke2 setParticleParams [["\A3\data_f\cl_fireD", 1, 0, 1], "", "Billboard", 1, 0.5, [0, 0, 0.6], [0.2,0.5,0.2], 90, 10, 7.85, 0.375, [1, 2, 3], [[.15, .15, .15, 0.2], [.15, .15, .15, 0.1], [0.15, 0.15, 0.15, 0]], [10], 1, 0, "", "", _posASL];
        _smoke2 setDropInterval 0.0004;
        _smlfirelight = "#lightpoint" createVehicleLocal _posASL;
        _smlfirelight setPosASL _posASL;
        _smlfirelight setLightAmbient [0, 0.47, 1]; 
        _smlfirelight setLightColor [0, 0.47, 1]; 
        _smlfirelight setLightBrightness 1;
        _smlfirelight setLightUseFlare true;
        _smlfirelight setLightDayLight true;
        _smlfirelight setLightFlareSize 12;
        _smlfirelight setLightFlareMaxDistance 200; 
        uisleep 1;
        deletevehicle _smlfirelight;
        deletevehicle _smoke2;
        deletevehicle _gravi1;
        deletevehicle _fulgi;
        
        systemchat "GAUSS BULLET CYCLE FINISHED 1";
    }] remoteExec ["spawn",0];

}];