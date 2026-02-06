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
        intensity = 300000;
    };
    class OEC_Light_AlienPulse_Orange_sRifle: OEC_Light_AlienPulse_Blue
    {
        useFlare = 0;
        intensity = 300000;
        color[] = {1, 0.65, 0, 1};
    };

    class OEC_Light_AlienPulse_Orange: OEC_Light_AlienPulse_Blue
    {
        color[] = {1, 0.65, 0, 1};
        diffuse[] = {1, 0.65, 0, 1};
        flareSize = 0.25;
    };

    class OEC_Light_AlienPulse_Green: OEC_Light_AlienPulse_Blue
    {
        color[] = {0.2, 0.95, 0.1, 1};
        diffuse[] = {0.2, 0.95, 0.1, 1};
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
    class Default;

    class OEC_Cloudlet_clexp: Default
    {
        particleShape = "\A3\data_f\cl_exp";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 1;

        animationName = "";
        angle = 0;
        anlgeVar = 0;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        interval = 0.005;
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.65;
        positionVar[] = {0,0,0};
        moveVelocity[] = {1,1,1};
        moveVelocityVar[] = {5,2.5,5};
        rotationVelocity = 0;
        weight = 1000;
        volume = 1;
        rubbing = 10;
        sizeOverLifetime[] = {0.15,0.01,0.001};
        color[] = {{0,0.47,1,1}};
        animationSpeed[] = {1};
        randomDirectionIntensity = 0;
		randomDirectionPeriod = 2;
		randomDirectionPeriodVar = 0;
		rotationVelocity = 10;
		rotationVelocityVar = 90;
		bounceOnSurface = 1;	
        onTimerScript = "";
        beforeDestroyScript = "";
        size[] = {0.15,0.001};
    };
    
    class OEC_CloudLet_Refract: Default
    {
        particleShape = "\A3\data_f\ParticleEffects\Universal\Refract.p3d";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;
        particleFSLoop = 0;

        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.3;
        positionVar[] = {0,0,0};
        moveVelocity[] = {0,0,0.6};
        rotationVelocity = 0;
        weight = 0.05;
        volume = 0.04;
        rubbing = 0.05;
        sizeOverLifeTime[] = {1,2,5,8,12,17};
        color[] = {{0.1,0.1,0.1,1},{0.25,0.25,0.25,1},{0.5,0.5,0.5,1},{0,0,0,1},{0,0,0,0.5},{0,0,0,0.3}};
        animationSpeed[] = {1.5,0.5,0,0};
        randomDirectionPeriod = 0.4;
        randomDirectionIntensity = 0.09;
        onTimerScript = "";
        beforeDestroyScipt = "";
    };

    class OEC_Cloudlet_Refract2: OEC_CloudLet_Refract
    {
        interval = 0.01;
    };

    class OEC_CloudLet_Distortion: Default
    {
        particleShape = "\A3\data_f\cl_fireD";
        particleFSNtieth = 1;
        particleFSIndex = 0;
        particleFSFrameCount = 1;

        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.5;
        positionVar[] = {0,0,0.6};
        moveVelocity[] = {0.2,0.5,0.2};
        rotationVelocity = 90;
        weight = 10;
        volume = 7.85;
        rubbing = 0.375;
        sizeOverLifeTime[] = {1,2,3};
        color[] = {{0.15,0.15,0.15,0.2},{0.15,0.15,0.15,0.1},{0.15,0.15,0.15,0}};
        animationSpeed[] = {10};
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScipt = "";
    };

    class OEC_Cloudlet_Distortion2: OEC_CloudLet_Refract
    {
        interval = 0.01;
    };

    class OEC_CloudLet_ImpactDust: Default
    {
        circleVelocity[] = {0,0,0};
		moveVelocity[] = {0,0,0};
		size[] = {10,10};
		color[] = {{ 0,0,0,0}};
		animationSpeed[] = {1};
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1.75,1.75,1.75};
		colorVar[] = {0,0,0,0.02};
		interval = "0.007 * interval + 0.007";
		circleRadius = "intensity";
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.05;
		lifeTime = 0.5;
		rotationVelocity = 0;
		weight = 4;
		volume = 1;
		rubbing = 0;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.08;
		onTimerScript = ""; 
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		rotationVelocityVar = 1;
		sizeVar = 0;
		randomDirectionPeriodVar = 2;
		randomDirectionIntensityVar = 0.1;
    };

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

    class OEC_CloudLet_AlienPulse_Green: OEC_CloudLet_AlienPulse
    {
        color[] = 
        {
            {0.15, 0.65, 0.1, 0.25},  
            {0.1, 0.65, 0.07, 0.15},
            {0.07, 0.65, 0.04, 0.08},
            {0.04, 0.65, 0.01, 0.03},  
            {0, 0.65, 0, 0.00}   
        };
        sizeVar = 0.05;
        sizeCoef = 0.1;
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
		//enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		//intensity = 1;
		//interval = 1;
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
		//enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		//intensity = 1;
		//interval = 1;
    };
};

class OEC_ParticleEffect_AlienPulse_Green
{
    class Light
    {
        simulation = "light";
        type = "OEC_Light_AlienPulse_Green";
        position[] = {0,0,0};
    };
    class Trail1
    {
        simulation = "particles";
        type = "OEC_CloudLet_AlienPulse_Green";
        position[] = {0,0,0};
		//enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		//intensity = 1;
		//interval = 1;
    };
};

class OEC_ParticleEffect_GaussImpact
{
    class Refraction1
    {
        simulation = "particles";
		type = "OEC_CloudLet_Refract";
		position[] = {0,0,0};
		intensity = 1;
		interval = "3 * 1";
		lifeTime = 1;
    };
    class Distortion1
    {
        simulation = "particles";
		type = "OEC_CloudLet_Distortion";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
    };
    class Explosion
    {
        simulation = "particles";
		type = "OEC_CloudLet_clexp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
    };
    class ImpactDust
    {
        simulation = "particles";
		type = "OEC_Cloudlet_ImpactDust";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.75;
    };
};

class OEC_ParticleEffect_GaussTrail
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
		type = "OEC_CloudLet_Refract2";
		position[] = {0,0,0};
		intensity = 1;
		interval = "3 * 1";
		lifeTime = 1;
    };
    class Trail2
    {
        simulation = "particles";
		type = "OEC_CloudLet_Distortion2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
    };
    class Trail3
    {
        simulation = "particles";
        type = "OEC_CloudLet_AlienPulse";
        position[] = {0,0,0};
		//enabled = "speedY interpolate [-0.0001,0.0001,1,-1]";
		//intensity = 1;
		//interval = 1;
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