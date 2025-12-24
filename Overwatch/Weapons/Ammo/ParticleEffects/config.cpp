class CfgPatches
{
    class OEC_Extension_Overwatch_Ammo_ParticleEffects
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgLights
{
    class OEC_Light_AlienPulse_Blue
    {
        color[] = {0,1,1,1};
        diffuse[] = {0,1,1,1};
        ambient[] = {0,0,0,0.5};
        intensity = 100000;
        class Attenuation
        {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 255;
            hardLimitStart = "1e20 * 0.7";
            hardLimitEnd = 1e+20;
        };
        dayLight = 1;
        useFlare = 1;
        irLight = 0;
        flareSize = 0.1;
        flareMaxDistance = 6000;
    };

    class OEC_Light_AlienPulse_Blue_sRifle: OEC_Light_AlienPulse_Blue
    {
        useFlare = 0;
        intensity = 200000;
    };


    class OEC_Light_AlienPulse_Orange: OEC_Light_AlienPulse_Blue
    {
        color[] = {1, 0.65, 0, 1};
        diffuse[] = {1, 0.65, 0, 1};
        flareSize = 0.25;
    };

    class OEC_Light_GrenadeLight_Red: OEC_Light_AlienPulse_Orange
    {
        color[] = {1,0,0,1};
        diffuse[] = {1,0,0,1};
        position[] = {0,0.055,0};
        intensity = 10000;
    };
};

class CfgCloudLets
{
    class ArtilleryShell1;
    class OEC_CloudLet_AlienPulse: ArtilleryShell1
    {
        color[] = 
        {
            {0, 1.0, 1.0, 0.25},  
            {0, 0.8, 0.8, 0.15},
            {0, 0.6, 0.6, 0.08},
            {0, 0.4, 0.4, 0.03},  
            {0, 0.2, 0.2, 0.00}   
        };
        sizeCoef = 0.2;
    };

    class OEC_CloudLet_AlienPulse_Orange: OEC_CloudLet_AlienPulse
    {
        color[] = 
        {
            {1.0, 0.45, 0.05, 0.25},  
            {1.0, 0.30, 0.03, 0.15},
            {1.0, 0.20, 0.02, 0.08},
            {1.0, 0.10, 0.01, 0.03},  
            {1.0, 0.05, 0.01, 0.00}   
        };
        sizeVar = 0.05;
        sizeCoef = 0.1;
    };

    class OEC_CloudLet_MK3A2_Trail: ArtilleryShell1
    {
        sizeCoef = 0.33;
    }; 
};

class OEC_ParticleEffect_AlienPulse_Blue
{
    class Light
    {
        simulation = "light";
        type = "OEC_Light_AlienPulse_Blue";
        position[] = {0,0,0};
    };
    class Trail1
    {
        simulation = "particles";
        type = "OEC_CloudLet_AlienPulse";
        position[] = {0,0,0};
		enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		intensity = 1;
		interval = 1;
    };
};

class OEC_ParticleEffect_AlienPulse_Blue_sRifle
{
    class Light
    {
        simulation = "light";
        type = "OEC_Light_AlienPulse_Blue_sRifle";
        position[] = {0,0,0};
    };
};

class OEC_ParticleEffect_AlienPulse_Orange
{
    class Light
    {
        simulation = "light";
        type = "OEC_Light_AlienPulse_Orange";
        position[] = {0,0,0};
    };
    class Trail1
    {
        simulation = "particles";
        type = "OEC_CloudLet_AlienPulse_Orange";
        position[] = {0,0,0};
		enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		intensity = 1;
		interval = 1;
    };
};

class OEC_ParticleEffect_MK3A2
{
    class Light
    {
        simulation = "light";
        type = "OEC_Light_GrenadeLight_Red";
    };
    class Trail1
    {
        simulation = "particles";
        type = "OEC_CloudLet_MK3A2_Trail";
        position[] = {0,0,0};
		enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		intensity = 1;
		interval = 1;
    };
};