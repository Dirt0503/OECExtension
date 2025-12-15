class CfgPatches
{
    class OEC_Extension_Resistance_Ammo_ParticleEffects
    {  
        addonRootClass = "OEC_Extension_Resistance_Ammo";
        requiredAddons[] = {"OEC_Extension_Resistance_Ammo"};
        units[] = {};
        weapons[] = {};
    };
};

class cfgCloudlets 
{
    class ArtilleryShell1;
    class OEC_CloudLet_CISGrenadier_Trail: ArtilleryShell1
    {
        sizeCoef = 0.4;
        lifeTime = 0.5;
    };
};

class OEC_ParticleEffect_Gren
{
    class Trail1 
    {
        simulation = "particles";
		type = "OEC_CloudLet_CISGrenadier_Trail";
		position[] = {0,0,0};
    };
};