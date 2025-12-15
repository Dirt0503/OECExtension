class CfgPatches
{
    class OEC_Extension_Overwatch_Ammo
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgAmmo
{
    class SubmunitionBullet;
    class GrenadeHand;
    class B_65x39_Caseless;

    class OEC_Ammo_MK3A2: GrenadeHand
    {
        model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
        effectFly = "OEC_ParticleEffect_MK3A2";
        simulation = "shotNVGMarker";
        soundFly[] = {"\OECExtension\Overwatch\Weapons\Ammo\sounds\OEC_5SEC_GRENFUSE.wss",20,1,200};
        class NVGMarkers{};
    };

    class OEC_Ammo_WallhammerShotgun: SubmunitionBullet
    {
        triggerTime = 0.002;
        submunitionConeAngle = 0.25;
        submunitionCount = 10;
        submunitionAmmo = "OEC_Ammo_WallhammerShotgun_Submunition";
        submunitionInitialOffset[] = {0, 0, -0.2};
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 1;
        timeToLive = 1;
        hit = 1;
        cost = 1;

        effectFly = "OEC_ParticleEffect_AlienPulse_Blue";
    };

    class OEC_Ammo_WallhammerShotgun_Shredder: OEC_Ammo_WallhammerShotgun
    {
        submunitionConeAngle = 3;
        submunitionCount = 20;
        submunitionAmmo = "OEC_Ammo_WallhammerShotgun_Shredder_Submunition";
    };

    class OEC_Ammo_WallhammerShotgun_Submunition: B_65x39_Caseless
    {
        effectFly = "OEC_ParticleEffect_AlienPulse_Blue";
        
        airFriction = -0.0006;
        coefGravity = 0.01;
        hit = 4;
        caliber = 8;
        timeToLive = 0.6;
    };

    class OEC_Ammo_WallhammerShotgun_Shredder_Submunition: OEC_Ammo_WallhammerShotgun_Submunition
    {
        hit = 6;
    };

    class OEC_Ammo_APFSuppressor: B_65x39_Caseless
    {
        effectFly = "OEC_ParticleEffect_AlienPulse_Orange";

        airFriction = -0.0006;
        coefGravity = 0.01;
        hit = 6;
        caliber = 1.2;
        tracerColor[] = {0,1,1,1};
        tracerColorR[] = {0,1,1,1};
    };
};