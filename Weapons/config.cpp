#include "\OECExtension\cfgFunctions.hpp"

class CfgPatches
{
    class OEC_Extension_Weapons
    {
        addonRootClass = "OEC_Extension";
        requiredAddons[] = 
        {
            "OEC_Extension",
			"OEC_Extension_ParticleEffects"
        };
        units[] = {};
        weapons[] = 
        {

            //Combine Weapons
            "OEC_Weapon_APFSuppressor",
            "OEC_Weapon_AR2",
            "OEC_Weapon_R1",
            "OEC_Weapon_CombineSniper",
            "OEC_Weapon_Gauss_Base",
            "OEC_Weapon_Gauss",
            "OEC_Weapon_M320_Base",
            "OEC_Weapon_M320marker",
            "OEC_Weapon_Magnum",
            "OEC_Weapon_OICW",
            "OEC_Weapon_PulseSMG",
            "OEC_Weapon_SIPL0_Loaded",
            "OEC_Weapon_SIPL0",
            "OEC_Weapon_SIPL0_Used",
            "OEC_Weapon_SIPL_base",
            "OEC_Weapon_SIPL_green",
            "OEC_Weapon_SIPL_olive",
            "OEC_Weapon_SIPL_sand",
            "OEC_Weapon_SMG46",
            "OEC_Weapon_SPAS12",
            "OEC_Weapon_USP",
            "OEC_Weapon_WallhammerShotgun",
            "OEC_Weapon_Turret",

            //CISDF Weapons
            "OEC_Weapon_2a46_Cannon",
            "OEC_Weapon_2a72",
            "OEC_Weapon_6G30",
            "OEC_Weapon_AKS74N",
            "OEC_Weapon_AKS74N_GP25",
            "OEC_Weapon_AKS74N_GP25_PKAS",
            "OEC_Weapon_AKS74U",
            "OEC_Weapon_ASVal",
            "OEC_Weapon_ASVal_PSO1",
            "OEC_Weapon_DSHKM",
			"OEC_Weapon_DSHKM_BMP3",
			"OEC_Weapon_DSHKM_BTR80",
            "OEC_Weapon_DSHKM_t80",
            "OEC_Weapon_Makarov",
            "OEC_Weapon_PKM",
            "OEC_Weapon_PKT",
            "OEC_Weapon_PKM_Vehicle",
			"OEC_Weapon_vicPKM_BMP3_bow1",
			"OEC_Weapon_vicPKM_BMP3_bow2",
            "OEC_Weapon_RPG7",
            "OEC_Weapon_ZU23",
			"OEC_Weapon_Zu23_Shilka",

            //Accessories
            "OEC_Acc_Scope_PKAS",
            "OEC_Acc_Collimator_EKP802",
            "OEC_Acc_Pointer_Zenit",
            "OEC_Acc_Suppressor_DTK4",
            "OEC_Acc_Muzzle_DTK",
            "OEC_Acc_Muzzle_PGS64",
            "OEC_Acc_Pointer_blue"

        };
    };
};

class CfgAmmo
{
    class SmokeLauncherAmmo;
	class SubmunitionCore;
	class SubmunitionBase;
	class SubmunitionBullet;
	class Default;
	class BulletCore;
	class BulletBase;
	class ShellBase;
    class BoundingMineBase;
	class SmokeShell;
	class SmokeShellYellow;
	class SmokeShellGreen;
    class GrenadeHand;
	class SmokeShellRed;
	class MissileCore: Default{};
	class MissileBase: MissileCore
	{
		class EventHandlers;
	};
    class B_65x39_Caseless;
    class G_40mm_HE;
    class F_40mm_Green;
    class F_40mm_Red;
    class F_40mm_Yellow;
    class RocketBase;
	class ammo_Penetrator_Base;
    class rhs_ammo_base_penetrator; 
	class R_PG32V_F: RocketBase{};
    class Sh_125mm_HE;
    class B_30mm_HE;
	class B_35mm_AA;

    class OEC_Ammo_VOG25: G_40mm_HE
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		airfriction = -0.0012;
		typicalspeed = 76.5;
		warheadName = "HEAT";
		aiAmmoUsageFlags = "64 + 128";
		effectFly = "OEC_ParticleEffect_Gren";
	};

    class OEC_Ammo_545x39: B_65x39_Caseless
    {
		hit = 10;
		caliber = 1;
        typicalSpeed = 900;
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

	// SPAS-12 Shells
	class OEC_Ammo_SPAS12_Buckshot: SubmunitionBullet
    {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.005;
		tracerEndTime = 10;
		tracerScale = 1;
        triggerTime = 0.002;
		cartridge = "FxCartridge_slug";
        submunitionConeAngle = 1.1;
        submunitionCount = 8;
        submunitionAmmo = "OEC_Ammo_SPAS12_Buckshot_Pellets";
        submunitionInitialOffset[] = {0, 0, -0.2};
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 1;
        timeToLive = 1;
        hit = 1;
        cost = 1;
		airFriction = -0.013;
    };

    class OEC_Ammo_SPAS12_Slug: BulletBase
    {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerStartTime = 0.005;
		tracerEndTime = 10;
		tracerScale = 1.5;
        hit = 35;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 600;
		airFriction = -0.006;
		caliber = 3;
		deflecting = 30;
    };

    class OEC_Ammo_SPAS12_Buckshot_Pellets: B_65x39_Caseless
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerStartTime = 0.005;
		tracerEndTime = 10;
		tracerScale = 1;
        airFriction = -0.013;
        hit = 6.5;
        caliber = 3;
        timeToLive = 0.6;
		typicalSpeed = 590;
    };


	// APF Suppressor ammo
    class OEC_Ammo_APFSuppressor: B_65x39_Caseless
    {
        effectFly = "OEC_ParticleEffect_AlienPulse_Orange";

        airFriction = -0.0006;
        coefGravity = 0.01;
        hit = 9;
        caliber = 2.5;
		typicalSpeed = 770;
		timeToLive = 1.05;
        tracerColor[] = {0,1,1,1};
        tracerColorR[] = {0,1,1,1};
    };
	class OEC_Ammo_APFSuppressor_exogen: B_65x39_Caseless
    {
        effectFly = "OEC_ParticleEffect_AlienPulse_Green";

        airFriction = -0.0006;
        coefGravity = 0.01;
        hit = 23.4;
        caliber = 0;
		typicalSpeed = 770;
		timeToLive = 1.05;
        tracerColor[] = {0,1,1,1};
        tracerColorR[] = {0,1,1,1};
    };

    // OICW Ammo
	class OEC_Ammo_OICW: B_65x39_Caseless
    {
		hit = 12.5;
		caliber = 1.5;
        typicalSpeed = 820;
		airFriction = -0.0009;
		model = "\hl_cmb_weapons\ar2\Data\bullettracer\tracer_blue";
    };

	// AR-2 Ammo
	class OEC_Ammo_AR2: BulletBase
	{
		airLock = 0;
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 770;
		airFriction = 0;
		deflecting = 0;
		timeToLive = 1.05;
		caliber = 1.5;
		model = "\hl_cmb_weapons\ar2\Data\bullettracer\tracer_blue";
		tracerScale = 1.5;
		tracerStartTime = 0.005;
		tracerEndTime = 1;
		nvgOnly = 0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		coefGravity = 0.01;
	};

	// R-1 Silenced Pulse Rifle Ammo
	class OEC_Ammo_R1: OEC_Ammo_AR2
	{
		hit = 13;
		typicalSpeed = 770;
		timeToLive = 1.05;
		caliber = 1.5;
		model = "\hl_cmb_weapons\ar2\Data\bullettracer\tracer_blue";
		dangerRadiusBulletClose = -1;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = -1;
		suppressionRadiusHit = -1;
		visibleFire = 0.1;
		visibleFireTime = 6;
		audibleFire = 0.1;
		audibleFireTime = 6;
		coefGravity = 0.01;
	};

	// R-2X Sniper Ammo
	class OEC_Ammo_cmbSrifle_normal: OEC_Ammo_AR2
	{
		hit = 77.5;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 5;
		audibleFire = 40;
		visibleFireTime = 3;
		cost = 7;
		caliber = 1.5;
		typicalSpeed = 1000;
		timeToLive = 1.2;
		model = "\hl_cmb_weapons\ar2\Data\bullettracer\tracer_blue";
		tracerScale = 2.5;
		tracerStartTime = 0.005;
		tracerEndTime = 10;
		deflecting = 0;
		deflectionSlowDown = 0.8;
		airFriction = 0;
		coefgravity = 1e-005;
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		effectFly = "OEC_ParticleEffect_AlienPulse_Blue_sRifle";
	};
	class OEC_Ammo_cmbSrifle_AP: OEC_Ammo_cmbSrifle_normal
	{
		hit = 35;
		caliber = 100;
		tracerScale = 2.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class OEC_Ammo_cmbSrifle_Exo: OEC_Ammo_cmbSrifle_normal
	{
		hit = 77.5;
		caliber = 0;
		tracerScale = 2.5;
		typicalSpeed = 500;
		timeToLive = 0.8;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
	};

	// Pulse SMG Ammo
	class OEC_Ammo_PulseSMG: OEC_Ammo_AR2
	{
		hit = 9;
		caliber = 1.5;
		timeToLive = 1.05;
	};

	class OEC_Ammo_Turret: OEC_Ammo_AR2
	{
		hit = 12;
		caliber = 1.35;
		timeToLive = 0.5;
	};

	// 4.6x30mm SMG46 ammo
	class OEC_Ammo_46x30: BulletBase
	{
		hit = 13.5;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 1;
		typicalSpeed = 380;
		airLock = 1;
		airFriction = -0.0045;
		caliber = 2;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 0.5;
		tracerStartTime = 0.001;
		tracerEndTime = 10;
		audibleFire = 30;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};

	// .357 Magnum Ammo
	class OEC_Ammo_357: BulletBase
	{
		hit = 20;
		caliber = 2;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_338_Ball";
		audibleFire = 80;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 10;
		dangerRadiusHit = 14;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 10;
		cost = 6;
		airLock = 1;
		typicalSpeed = 890;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.001;
		tracerEndTime = 10;
		airFriction = -0.00061;
		class CamShakeExplode
		{
			power = 3.16228;
			duration = 0.6;
			frequency = 20;
			distance = 9.48683;
		};
		class CamShakeHit
		{
			power = 10;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class OEC_Ammo_357_Expansive: OEC_Ammo_357
	{
		hit = 27.5;
		caliber = 0.85;
	};

	// Gauss Ammo 
	class OEC_Ammo_Gauss: BulletBase
	{
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",3.1622777,1,1600};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2",3.1622777,1,1600};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3",3.1622777,1,1600};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4",3.1622777,1,1600};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5",3.1622777,1,1600};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6",3.1622777,1,1600};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.1,"soundHit5",0.15,"soundHit6",0.15};
		explosive = 0.8;
		explosionEffects = "OEC_ParticleEffect_GaussImpact";
		effectFly = "OEC_ParticleEffect_GaussTrail";
		craterEffects = "CUP_AA12AmmoImpact";
		hit = 30;
		caliber = 2;
		indirectHit = 60;
		indirectHitRange = 3;
		warheadName = "HE";
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 20;
		typicalSpeed = 770;
		deflecting = 0;
		deflectionSlowDown = 0.8;
		airFriction = -0.00061;
		//coefgravity = 1e-005;
		timeToLive = 1.25;
		fuseDistance = 0;
		model = "\hl_cmb_weapons\ar2\Data\bullettracer\tracer_blue";
		tracerScale = 2.5;
		tracerStartTime = 0.005;
		tracerEndTime = 12;
		class CamShakeExplode
		{
			power = "(19 * 0.2)";
			duration = "((round (19^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((2 + 19^0.5)*8)";
		};
		cartridge = "";
	};

	class OEC_Ammo_Hunter_Flechette: OEC_Ammo_AR2
	{
		hit = 0.0001;
		caliber = 0.0001;
		class EventHandlers 
		{
            init = "[_this select 0] execVM '\OECExtension\Scripts\Hunter\OEC_Hunter_Flechette.sqf';";
        };
	};

	class OEC_Ammo_Flechette_Charge: OEC_Ammo_Gauss
    {
		hit = 12;
		indirectHit = 12;
		indirectHitRange = 1.5;
		typicalSpeed = 0;
		
		//simulation = "shotBullet";
		explosionEffects = "OEC_ParticleEffect_FlechetteCharge";
        //model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
        explosionTime = 0.0005;
		explosive = 1;
		craterEffects = "";
		warheadName = "HE";
		//explosive = 1;
        //soundFly[] = {"\OECExtension\Weapons\data\sounds\OEC_5SEC_GRENFUSE.wss",20,1,200};
    };

    //Combine UGL Ammo
	// Cmb HE
	class OEC_Ammo_CMB20mm: G_40mm_HE
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		airfriction = -0.0012;
		typicalspeed = 185;
		caliber = 2;
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		fuseDistance = 0;
		warheadName = "HE";
		aiAmmoUsageFlags = "64 + 128";
		effectFly = "OEC_ParticleEffect_Gren";
	};

	// Cmb Instant Smoke 
	class OEC_Ammo_CMB20mm_smoke: OEC_Ammo_CMB20mm
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 185;

		explosionEffects = "OEC_ParticleEffect_ImpactSmoke";
		CraterEffects = "";

		soundHit1[] = { "rhsafrf\addons\rhs_sounds\smoke\GDM40_1.wss", 5, 1, 1500 };
		soundHit2[] = { "rhsafrf\addons\rhs_sounds\smoke\GDM40_2.wss", 5, 1, 1500 };
		multiSoundHit[] = { "soundHit1", 0.5, "soundHit2", 0.5 };

		aiAmmoUsageFlags = "4 + 64 + 128";

		explosive = 1;
		fuseDistance = 0;
		explosionTime = -1;
		cost = 1;

		effectFly = "OEC_ParticleEffect_Gren";
	};

	//cmb colored smoke
	class OEC_Ammo_CMB40mm_smokeRed: SmokeShellRed
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class OEC_Ammo_CMB40mm_smokeGreen: SmokeShellGreen
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};
	class OEC_Ammo_CMB40mm_smokeYellow: SmokeShellYellow
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		explosionTime = -1;
		timeToLive = 30;
	};

	// Cmb Stun Grenades
	class OEC_Ammo_CMB20mm_stun: OEC_Ammo_CMB20mm
	{
		model = "\A3\weapons_f\Ammo\UGL_slug";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		fuseDistance = 0;
		explosionTime = -1;
		ExplosionEffects = "RHS_flashbang_10";
		explosive = 1;
		cost = 2;
		aiAmmoUsageFlags = 64;

		effectFly = "OEC_ParticleEffect_Gren";
	};

    // Combine 20mm Flares

	class OEC_Ammo_CMB20mm_green: F_40mm_Green
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		effectFlare = "RHS_FlareShell_Green";
		aiAmmoUsageFlags = 0.5;
	};

    
	class OEC_Ammo_CMB20mm_red: F_40mm_Red
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		effectFlare = "RHS_FlareShell_Red";
		aiAmmoUsageFlags = 0.5;
	};

	
	class OEC_Ammo_CMB20mm_yellow: F_40mm_Yellow
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		aiAmmoUsageFlags = 0.5;
	};

    // Disposable for SIPL-0
    
	class OEC_Ammo_Rocket_sipl0Disposable: RocketBase
	{
		SoundSetExplosion[] = {"RocketsLight_Exp_SoundSet","RocketsLight_Tail_SoundSet","Explosion_Debris_SoundSet"};
		author = "OEC Extension";
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1",5.623413,1,1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2",5.623413,1,1800};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		model = "\CUP\Weapons\CUP_Weapons_M136\CUP_AT4_rocket.p3d";
		hit = 85;
		indirectHit = 25;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "OEC_Ammo_Penetrator_sipl0Disposable";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 200;
		initTime = 0.001;
		thrust = 0;
		thrustTime = 0;
		maxSpeed = 320;
		sideAirFriction = 0.01;
		airfriction = 0;
		timeToLive = 6;
		fuseDistance = 5;
		visibleFire = 24;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1,500};
		whistleDist = 32;
		airLock = 0;
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		initSpeed = 320;
		class CamShakeExplode
		{
			power = "(55 * 0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};

	class OEC_Ammo_Penetrator_sipl0Disposable: ammo_Penetrator_Base
	{
		caliber = 12.5;
		warheadName = "HEAT";
		hit = 200;
	};

	// SIPL-1 ammo
	class OEC_Ammo_Rocket_SIPL_HEAT75: RocketBase
	{
		EffectFly = "ArtilleryTrails";
		warheadName = "TandemHEAT";
		submunitionAmmo = "Ammo_Penetrator_SIPL_HEAT75";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 250;
		indirectHit = 14;
		indirectHitRange = 3;
		explosive = 0.85;
		cost = 100;
		airFriction = 0.05;
		sideAirFriction = 0;
		maxSpeed = 350;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 0;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		simulationStep = 0.02;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 256 + 512";
		irLock = 0;
		timeToLive = 25;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		soundHit1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",2.5118864,1,1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",2.5118864,1,1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",2.5118864,1,1800};
		multiSoundHit[] = {"soundHit1",0.34,"soundHit2",0.33,"soundHit3",0.33};
		class CamShakeExplode
		{
			power = 11;
			duration = 1.4;
			frequency = 20;
			distance = 99.3296;
		};
		class CamShakeHit
		{
			power = 110;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};

	class Ammo_Penetrator_SIPL_HEAT75: ammo_Penetrator_Base
	{
		caliber = 75;
		warheadName = "TandemHEAT";
		hit = 850;
	};

	class OEC_Ammo_Rocket_SIPL_HE: OEC_Ammo_Rocket_SIPL_HEAT75
	{
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		hit = 130;
		indirectHit = 90;
		indirectHitRange = 10;
		explosive = 1;
		fuseDistance = 10;
		aiAmmoUsageFlags = "64 + 128 + 512";
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "BombExplosion";
		effectsMissileInit = "";
		effectsMissile = "RHSUSF_SMAW_MissileTrail";
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
	};

	class OEC_Ammo_Rocket_SIPL_HEAT55: OEC_Ammo_Rocket_SIPL_HEAT75
	{
		warheadName = "HEAT";
		submunitionAmmo = "ammo_Penetrator_SIPL_HEAT55";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 95;
		indirectHit = 30;
		fuseDistance = 20;
		indirectHitRange = 5.1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
	};

	class ammo_Penetrator_SIPL_HEAT55: ammo_Penetrator_Base
	{
		caliber = 20;
		hit = 300;
	};

	// SP-5 9x39
	class OEC_Ammo_9x39_SP5 : OEC_Ammo_545x39
	{
		cartridge = "FxCartridge_9mm";
		hit = 11.5;
		caliber = 1.75;
		typicalSpeed = 275;
		airFriction = -0.00052;
		visibleFire = 1.25;
		audibleFire = 2.5;
		suppressionRadiusBulletClose = 3;
		suppressionRadiusHit = 5;
		deflecting = 10;
	};

	// GDM40 Instant Smoke 
	class OEC_Ammo_GDM40: OEC_Ammo_VOG25
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;

		explosionEffects = "OEC_ParticleEffect_ImpactSmoke";
		CraterEffects = "";

		soundHit1[] = { "rhsafrf\addons\rhs_sounds\smoke\GDM40_1.wss", 5, 1, 1500 };
		soundHit2[] = { "rhsafrf\addons\rhs_sounds\smoke\GDM40_2.wss", 5, 1, 1500 };
		multiSoundHit[] = { "soundHit1", 0.5, "soundHit2", 0.5 };

		aiAmmoUsageFlags = "4 + 64 + 128";

		explosive = 1;
		fuseDistance = 0;
		explosionTime = -1;
		cost = 1;

		effectFly = "OEC_ParticleEffect_Gren";
	};

    // VG40SZ Stun Grenades
	class OEC_Ammo_VG40SZ: OEC_Ammo_VOG25
	{
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		fuseDistance=2;
		explosionTime = -1;
		ExplosionEffects = "RHS_flashbang_10";
		explosive = 1;
		cost = 2;
		aiAmmoUsageFlags = 64;

		effectFly = "OEC_ParticleEffect_Gren";
	};

	// GP-25 Flare
	class OEC_Ammo_40mm_RedFlare: F_40mm_Red
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		effectFlare = "RHS_FlareShell_Red";
		aiAmmoUsageFlags = 0.5;
	};

    class OEC_Ammo_Special_SmokeStun: SubmunitionBullet
    {
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;
		airfriction = -0.0012;
        triggerTime = 0.2;
        submunitionConeAngle = 0.1;
        submunitionCount = 1;
        submunitionAmmo[] = {"OEC_Ammo_GDM40",0.85,"OEC_Ammo_VG40SZ",0.15};
        submunitionInitialOffset[] = {0, 0, -0.2};
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 1;
        timeToLive = 15;
		aiAmmoUsageFlags = "64 + 128";

		explosive = 1;
		fuseDistance = 0;
		explosionTime = -1;
		cost = 1;

        effectFly = "OEC_ParticleEffect_Gren";
    };

    // GP-25 Flare
	class OEC_Ammo_CMB20mm_RedFlare: F_40mm_Red
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		effectFlare = "RHS_FlareShell_Red";
		aiAmmoUsageFlags = 0.5;
	};

    class OEC_Ammo_CMB20mm_greenFlare: F_40mm_Green
	{
		brightness = 25; // def 12
		timeToLive = 60; // def 25
		intensity = 1000000;
		affectedByWind = 1;
		flareSize = 20;
		effectFlare = "RHS_FlareShell_Green";
		aiAmmoUsageFlags = 0.5;
	};

    class OEC_Ammo_762x51: BulletBase
	{
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 3;
		audibleFire = 45;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 820;
		caliber = 2;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};

    // 7.62x51 Machinegun Yellow Tracer Round
	class OEC_Ammo_762x51_TracerYellow: OEC_Ammo_762x51
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};

    class OEC_Ammo_Rocket_RPGdisposable: R_PG32V_F
	{
		AIAmmoUsageFlags = "128+256+512";
		model = "\rhsafrf\addons\rhs_weapons\rpg26\rpg26_projectile";
		warheadName = "HEAT";
		submunitionAmmo = "OEC_Ammo_Penetrator_Disposable";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1053;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 180;
		indirectHit = 10;
		indirectHitRange = 3.5;
		caliber = 0.8;
		cost = 217;
		airFriction = 0.0;
		sideAirFriction = 0.01;
		simulationStep = 0.01;
		maxSpeed = 115;
		initTime = 0.15;
		thrustTime = 0.5;
		thrust = 10;
		fuseDistance = 5;
		explosive = 0.35;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
		effectsMissile = "missile3";
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.1,0.7,250};
	};

    class OEC_Ammo_Penetrator_Disposable: rhs_ammo_base_penetrator
	{
		caliber = 20;
	};

    class OEC_Ammo_Rocket_PG7V: OEC_Ammo_Rocket_RPGdisposable
	{
		model = "\rhsafrf\addons\rhs_weapons\rpg7\projectiles\pg7v";
		airfriction = 0.82;
		sideAirFriction = 0.2105;
		thrustTime = 0.69;
		thrust = 195;
		submunitionAmmo = "OEC_Ammo_Penetrator_PG7V";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.1};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1053;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		hit = 220;
		indirectHit = 20;
		indirectHitRange = 4;
		cost = 200;
		simulationStep = 0.01;
		maxSpeed = 295;
		initTime = 0.1;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		whistleDist = 4;
		timeToLive = 6;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "missile3";
		airLock = 1;
		class CamShakeFire
		{
			power = 10;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
		};
		class EventHandlers;
	};
	class OEC_Ammo_Penetrator_PG7V: rhs_ammo_base_penetrator
	{
		caliber = 17.3333;
	};

    // Makarov 9x18
	class OEC_Ammo_9x18: BulletBase
	{
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 30;
		typicalSpeed = 380;
		airFriction = -0.0016;
		caliber = 4;
		deflecting = 25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		airLock = 1;
		tracerScale = 0.5;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
		audibleFire = 30;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};

    // KORD 12.7x108mm ammo
	class B_127x108_Ball;
	class OEC_ammo_127x108mm: B_127x108_Ball
	{
        caliber = 2.8;
		hit = 35;
        typicalSpeed = 835;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		timeToLive = 25;
		tracerStartTime = 0.005;
		tracerEndTime = 3;
		cost = 3;
	};

	// ZU23 23x152mm ammo
	class OEC_ammo_23mm_AA: B_35mm_AA
	{
		hit = 15;
		caliber = 1.11;
		indirectHit = 4.5;
		indirectHitRange = 1.8;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		explosive = 0.6;
		airLock = 1;
		typicalSpeed = 980;
		aiAmmoUsageFlags = "128 + 256";
		cost = 15;
		timeToLive = 14;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.005;
		tracerEndTime = 5.5;
		airFriction = -0.000471;
		muzzleEffect = "";
	};

    //30mm 2a72 autocannon ammo
	class OEC_Ammo_2a72: B_30mm_HE
	{
		hit = 40;
		indirectHit = 20;
		indirectHitRange = 2.5;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		cost = 10;
		explosive = 0.6;
		airfriction = -0.0002;
		caliber = 1.39;
		timeToLive = 15;
		displayName = "2a72 HE Shell";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		weaponType = "special";
        typicalSpeed = 1130;
		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 83.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 30;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};

	// 125mm 2A46 t80 Cannon Ammo
	class OEC_Ammo_2A46: Sh_125mm_HE
	{
		explosive = 0.7;
		hit = 200;
		indirectHit = 70;
		indirectHitRange = 9;
		typicalspeed = 850;
		deflecting = 1;
		caliber = 5;
		whistleDist = 60;
		airFriction = -0.0002;
		tracerScale = 3;
		tracerStartTime = 0.1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		cost = 300;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
	};


    //---------------------------------------------------------------------------------//
    //HAND GRENADES
    //---------------------------------------------------------------------------------//

    class OEC_Ammo_MK3A2: GrenadeHand
    {
		hit = 12;
		indirectHit = 12;
		indirectHitRange = 6;

        model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
        effectFly = "OEC_ParticleEffect_MK3A2";
        soundFly[] = {"\OECExtension\Weapons\data\sounds\OEC_5SEC_GRENFUSE.wss",20,1,200};
		class EventHandlers 
		{
            init = "[_this select 0] execVM '\OECExtension\Scripts\OEC_combineGrenade.sqf';";
        };
    };

	/*class OEC_Ammo_Flechette_Charge: GrenadeHand
    {
		scope = 1;
		hit = 6;
		indirectHit = 6;
		indirectHitRange = 3;

		simulation = "shotBullet";
		explosionEffects = "OEC_ParticleEffect_FlechetteCharge";
        model = "\rhsusf\addons\rhsusf_weapons\grenades_thrown\mk3a2\mk3a2";
        explosionTime = 0.005;
		craterEffects = "";
		warheadName = "HE";
		//explosive = 1;
        //soundFly[] = {"\OECExtension\Weapons\data\sounds\OEC_5SEC_GRENFUSE.wss",20,1,200};
    };*/

	class OEC_Ammo_m18Smoke_White: GrenadeHand
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_white_throw";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 22;
		cost = 100;
		simulation = "shotSmokeX";
		explosive = 0;
		deflecting = 30;
		explosionTime = 2;
		timeToLive = 60;
		fuseDistance = 0;
		soundHit[] = {"",0,1};
		SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1",1.2589254,1,100};
		SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2",1.2589254,1,100};
		SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3",1.2589254,1,100};
		SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1",0.12589253,1,70};
		SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2",0.12589253,1,70};
		grenadeFireSound[] = {"SmokeShellSoundHit1",0.25,"SmokeShellSoundHit2",0.25,"SmokeShellSoundHit3",0.5};
		grenadeBurningSound[] = {"SmokeShellSoundLoop1",0.5,"SmokeShellSoundLoop2",0.5};
		aiAmmoUsageFlags = "4 + 2";
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_White";
		whistleDist = 0;
	};

	class OEC_Ammo_m18Smoke_Red: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_red_throw";
		smokeColor[] = {0.8438,0.1383,0.1353,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Red";
	};

	class OEC_Ammo_m18Smoke_Green: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_green_throw";
		smokeColor[] = {0.2125,0.6258,0.48909998,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Green";
	};

	class OEC_Ammo_m18Smoke_Yellow: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow_throw";
		smokeColor[] = {0.9883,0.8606,0.0719,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Yellow";
	};

	class OEC_Ammo_m18Smoke_Purple: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_purple_throw";
		smokeColor[] = {0.4341,0.1388,0.41439998,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Yellow";
	};

	class OEC_Ammo_m18Smoke_Blue: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_blue_throw";
		smokeColor[] = {0.1183,0.1867,1,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Blue";
	};

	class OEC_Ammo_m18Smoke_Orange: OEC_Ammo_m18Smoke_White
	{
		model = "\A3\Weapons_f\ammo\smokegrenade_orange_throw";
		smokeColor[] = {0.6697,0.2275,0.10053,1};
		effectsSmoke = "OEC_ParticleEffect_Smoke_Orange";
	};

    class OEC_Ammo_HopperMine_Range: BoundingMineBase
	{
		hit = 50;
		indirectHit = 50;
		indirectHitRange = 6.5;
		model = "\OECExtension\Weapons\data\hoppermine\combine_mine.p3d";
		mineModelDisabled = "\OECExtension\Weapons\data\hoppermine\combine_mine_folded.p3d";
		defaultMagazine = "OEC_Magazine_HopperMine_Range";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01",3.1622777,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		soundActivation[] = {};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",1.9952624,1,20};
		explosionEffects = "BoundingMineExplosion";
		CraterEffects = "BoundingMineCrater";
		mineJumpEffects = "MineJumpEffect";
		whistleDist = 60;
		cost = 300;
		mineBoundingTime = 0.55;
		mineBoundingDist = 2.5;
		mineInconspicuousness = 40;
		mineTrigger = "OEC_RangeTrigger_Hopper";

		soundTrigger[] = {"\OECExtension\Weapons\data\hoppermine\combineMine_triggered.wss",3,10,75};

        triggerWhenDestroyed = 0;
        ace_explosives_defuseTime = 3;
        ace_explosives_size = 1;

		class EventHandlers 
		{
            init = "[_this select 0] execVM '\OECExtension\Scripts\OEC_hopperMine.sqf';";
        };
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

class CfgMineTriggers
{
	class RangeTrigger;
	class OEC_RangeTrigger_Hopper: RangeTrigger
	{
		mineTriggerRange = 7;
		mineTriggerActivationRange = 7;
		restrictZoneCenter[] = {0,0,0};
		restrictZoneRadius = 7;
		mineDelay = 0.5;
	};
};

class CfgMagazines
{
    class Default;
    class CA_Magazine;
    class CA_LauncherMagazine;
    class SmokeLauncherMag;
	class VehicleMagazine;
	class FakeMagazine;
    class HL_CMB_30Rnd_AR2_Mag;
    class HandGrenade;
    class ATMine_Range_Mag: CA_Magazine {};
    class 1Rnd_HE_Grenade_shell;
    class 30Rnd_65x39_caseless_mag;
    class 450Rnd_127x108_Ball;

    class OEC_Magazine_APFSuppressor_100Rnd: HL_CMB_30Rnd_AR2_Mag
    {
        ammo = "OEC_Ammo_APFSuppressor";
        count = 150;
        author = "OEC Extension";
		initSpeed = 770;
        displayName = "[OEC] 150Rnd Suppressor Cell";
        descriptionShort = "High Capacity Suppressor Cell.";
        displayNameShort = "150Rnd Cell";
		picture = "\OECExtension\Weapons\data\APFmag.paa";
        tracersEvery = 0;
        lastRoundsTracer = 0;
		mass = 40;
    };

	class OEC_Magazine_APFSuppressor_100Rnd_Exogen: HL_CMB_30Rnd_AR2_Mag
    {
        ammo = "OEC_Ammo_APFSuppressor_exogen";
        count = 150;
        author = "OEC Extension";
		initSpeed = 770;
        displayName = "[OEC] 150Rnd Anti-Exogen Suppressor Cell";
        descriptionShort = "High Capacity Anti-Exogen Suppressor Cell; Deals increased damage to xen creatures.";
        displayNameShort = "150Rnd Exo Cell";
		picture = "\OECExtension\Weapons\data\APFmagExogen.paa";
        tracersEvery = 0;
        lastRoundsTracer = 0;
		mass = 40;
    };

    class OEC_Magazine_AR2: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_AR2";
		author = "OEC Extension";
		displayName = "[OEC] 30rnd AR-2 Cell";
		descriptionShort = "Standard Capacity Pulse Cell.";
		count = 30;
		initSpeed = 750;
		picture = "\OECExtension\Weapons\data\AR2mag.paa";
		tracersEvery = 1;
		mass = 16;
	};

	class OEC_Magazine_R1: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_R1";
		author = "OEC Extension";
		displayName = "[OEC] 20rnd R-1 Cell";
		descriptionShort = "Reduced Capacity Pulse Cell; does not alert enemies.";
		count = 20;
		initSpeed = 770;
		picture = "\OECExtension\Weapons\data\R1mag.paa";
		tracersEvery = 1;
		mass = 20;
	};

    class OEC_Magazine_cmbSrifle: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_cmbSrifle_normal";
		author = "OEC Extension";
		displayName = "[OEC] R-2X Cell - Standard";
		displaynameshort = "Standard Cell";
		descriptionShort = "Standard R-2X cell. High damage, decent penetration, 1200m dissipation range.";
		count = 1;
		initSpeed = 1000;
		picture = "\OECExtension\Weapons\data\sniperMag.paa";
		tracersEvery = 1;
		mass = 2.5;
	};

	class OEC_Magazine_cmbSrifle_AP: OEC_Magazine_cmbSrifle
	{
		scope = 2;
		ammo = "OEC_Ammo_cmbSrifle_AP";
		author = "OEC Extension";
		displayName = "[OEC] R-2X Cell - Piercer";
		displaynameshort = "Piercer Cell";
		descriptionShort = "Anti-materiel R-2X cell. Medium damage, extreme penetration, 1200m dissipation range.";
		count = 1;
		initSpeed = 1000;
		picture = "\OECExtension\Weapons\data\sniperMagAP.paa";
		tracersEvery = 1;
		mass = 3.5;
	};

    class OEC_Magazine_MK3A2: HandGrenade
    {
        ammo = "OEC_Ammo_MK3A2";

		author = "OEC Extension";
        displayName = "[OEC] MK3A2 Explosive Grenade";
        displayNameShort = "MK3A2 Grenade";
        descriptionShort = "Repurposed Pre-War Explosive Grenade";

        picture = "\OECExtension\Weapons\data\FragNade.paa";
        model = "\rhsusf\addons\rhsusf_weapons\grenades\mk3a2\mk3a2";

		value = 4;
		mass = 8;
		initSpeed = 22;
    };

	class OEC_Magazine_M18smoke_White: HandGrenade
	{
		ammo = "OEC_Ammo_m18Smoke_White";

		author = "OEC Extension";
		displayName = "[OEC] M18 Smoke (White)";
		displayNameShort = "M18 White Smoke";
        descriptionShort = "Repurposed Pre-War Smoke Grenade";

		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_white";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";

		value = 2;
		mass = 4;
		initSpeed = 22;
	};

	class OEC_Magazine_M18smoke_Red: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Red";
		displayName = "[OEC] M18 Smoke (Red)";
		displayNameShort = "M18 Red Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_red";
	};

	class OEC_Magazine_M18smoke_Green: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Green";
		displayName = "[OEC] M18 Smoke (Green)";
		displayNameShort = "M18 Green Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_green";
	};

	class OEC_Magazine_M18smoke_Yellow: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Yellow";
		displayName = "[OEC] M18 Smoke (Yellow)";
		displayNameShort = "M18 Yellow Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_yellow";
	};

	class OEC_Magazine_M18smoke_Purple: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Purple";
		displayName = "[OEC] M18 Smoke (Purple)";
		displayNameShort = "M18 Purple Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_purple";
	};

	class OEC_Magazine_M18smoke_Blue: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Blue";
		displayName = "[OEC] M18 Smoke (Blue)";
		displayNameShort = "M18 Blue Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_blue";
	};

	class OEC_Magazine_M18smoke_Orange: OEC_Magazine_M18smoke_White
	{
		ammo = "OEC_Ammo_m18Smoke_Orange";
		displayName = "[OEC] M18 Smoke (Orange)";
		displayNameShort = "M18 Orange Smoke";
		picture = "\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
		model = "\A3\Weapons_f\ammo\smokegrenade_orange";
	};

    class OEC_Magazine_HopperMine_Range: ATMine_Range_Mag
	{
		author = "OEC Extension";
        displayName = "[OEC] Combine Hopper Mine";
        displayNameShort = "Hopper Mine";
        descriptionShort = "Combine-made bounding mine with IFF capabilities";

		mass = 10;
		ammo = "OEC_Ammo_HopperMine_Range";
		picture = "\OECExtension\Weapons\data\hopper.paa";
		model = "\OECExtension\Weapons\data\hoppermine\combine_mine_folded.p3d";
		class Library
		{
			libTextDesc = "test description1. Tell Petee if you found this";
		};
		allowedSlots[] = 
		{
			701, // Vest
			801, // Uniform
			901  // Backpack
		};
		priority = 1;

		ace_explosives_setupObject = "OEC_Place_HopperMine";
		useAction = 1;
        ace_explosives_placeable = 1;	
	};

    class OEC_Magazine_Gauss: CA_Magazine
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "OEC_Ammo_Gauss";
		author = "OEC Extension";
		displayName = "[OEC] 6rnd EM-1 Cell";
		displaynameshort = "Explosive Cell";
		descriptionShort = "Portable Explosive Pulse Ammo Cell.";
		count = 6;
		initSpeed = 780;
		picture = "\OECExtension\Weapons\data\GaussAmmo.paa";
		tracersEvery = 1;
		mass = 12.5;
	};

    class OEC_Magazine_SIPL0_M: CA_LauncherMagazine
	{
		displayName = "[OEC] SIPL-0 Rocket";
		displayNameShort = "HEAT";
		descriptionShort = "Rocket for SIPL-0 Disposable";
		author = "OEC Extension";
		scope = 2;
		ammo = "OEC_Ammo_Rocket_sipl0Disposable";
		type = "6 * 256";
		picture = "\CUP\Weapons\CUP_Weapons_M136\data\ui\m_m136_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_M136\CUP_M136_ammo";
		modelSpecial = "";
		mass = 40;
		initSpeed = 290;
	};
	class OEC_Magazine_SIPL0_fakeMag: FakeMagazine
	{
		allowedSlots[] = {701,901};
		scope = 1;
		scopeArsenal = 0;
		author = "OEC Extension";
		displayName = "[OEC] Disposable HEAT";
		displayNameShort = "HEAT";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rpg26rocket_ca.paa";
		model = "\A3\weapons_f\empty";
		ammo = "OEC_Disposable_rocket";
		type = "6 * 		256";
		initSpeed = 115;
		mass = 0;
	};
	class OEC_Magazine_Disposable: FakeMagazine
	{
		allowedSlots[] = {701,901};
		scope = 1;
		scopeArsenal = 0;
		author = "OEC Extension";
		displayName = "[OEC] Disposable AT";
		displayNameShort = "AT";
		picture = "\rhsafrf\addons\rhs_weapons\icons\rpg26rocket_ca.paa";
		model = "\A3\weapons_f\empty";
		ammo = "OEC_Disposable_rocket";
		type = "6 * 		256";
		initSpeed = 115;
		mass = 0;
	};

	//SIPL-1 mags
	class OEC_Magazine_SIPL_HEAT55: CA_LauncherMagazine
	{
		author = "OEC Extension";
		displayName = "[OEC] SIRR-1 Dual Purpose HE 55 Round";
		displayNameShort = "SIRR - HEDP 55";
		scope = 2;
		scopeArsenal = 2;
		descriptionShort = "Effective against: Infantry, Vehicles, Armor.";
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture = "\OECExtension\Weapons\data\CGM3hedpShell.paa";
		initSpeed = 350;
		ammo = "OEC_Ammo_Rocket_SIPL_HEAT55";
		type = "2*		256";
		mass = 25;
		allowedSlots[] = 
		{
			701, // Vest
			801, // Uniform
			901  // Backpack
		};

	};

	class OEC_Magazine_SIPL_HE44: OEC_Magazine_SIPL_HEAT55
	{
		author = "OEC Extension";
		displayName = "[OEC] SIRR-1 Thermobaric 44 Round";
		displayNameShort = "SIRR - TB";
		scope = 2;
		scopeArsenal = 2;
		descriptionShort = "Effective against: Infantry, Soft Vehicles, Buildings.";
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture = "\OECExtension\Weapons\data\CGM3heShell.paa";
		initSpeed = 350;
		ammo = "OEC_Ammo_Rocket_SIPL_HE";
		mass = 12.5;
	};

	class OEC_Magazine_SIPL_HEAT75: OEC_Magazine_SIPL_HEAT55
	{
		author = "OEC Extension";
		displayName = "[OEC] SIRR-1 Tandem HEAT 75 Round";
		displayNameShort = "SIRR - THEAT 75";
		scope = 2;
		scopeArsenal = 2;
		descriptionShort = "Effective against: Vehicles, Heavy Armor.";
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
		picture = "\OECExtension\Weapons\data\CGM3heatShell.paa";
		initSpeed = 350;
		ammo = "OEC_Ammo_Rocket_SIPL_HEAT75";
		mass = 30;
	};

    class OEC_Magazine_M320_HE: 1Rnd_HE_Grenade_shell
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 HE Grenade";
		displaynameshort = "HE Grenade";
		descriptionShort = "Special 40mm Combine High-Explosive Grenade";
		picture = "\OECExtension\Weapons\data\m320UglMagStun.paa";
		ammo = "OEC_Ammo_CMB20mm";
		count = 1;
		mass = 4;
		//initspeed = 80;
		scope = 2;
		scopearsenal = 2;
	};

	// Cmb 40mm Instant Smoke
	class OEC_Magazine_M320_Smoke: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Instant Smoke";
		displaynameshort = "Instant Smoke";
		descriptionShort = "Special 40mm Combine Instant Smoke";
		ammo = "OEC_Ammo_CMB20mm_smoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		picture = "\OECExtension\Weapons\data\uglSmokeWhite.paa";
		mass = 1;
	};

	// Cmb 40mm Stun Grenade
	class OEC_Magazine_M320_Stun: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Stun Grenade";
		descriptionShort = "Special 40mm Combine Stun Grenade";
		displaynameshort = "Stun Grenade";
		picture = "\OECExtension\Weapons\data\uglStun.paa";
		ammo = "OEC_Ammo_CMB20mm_stun";
		count = 1;
		mass = 8;
	};

	// Cmb 40mm Flares
	class OEC_Magazine_M320_red: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Flare (Red)";
		displaynameshort = "Red Flare";
		descriptionShort = "Special 40mm Combine Red Flare";
		ammo = "OEC_Ammo_CMB20mm_red";
        picture = "\OECExtension\Weapons\data\uglFlareRed.paa";
		count = 1;
		mass = 0.5;
	};

	class OEC_Magazine_M320_green: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Flare (Green)";
		displaynameshort = "Green Flare";
		descriptionShort = "Special 40mm Combine Green Flare";
		ammo = "OEC_Ammo_CMB20mm_green";
        picture = "\OECExtension\Weapons\data\uglFlareGreen.paa";
		count = 1;
		mass = 0.5;
	};

    class OEC_Magazine_M320_yellow: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Flare (Yellow)";
		displaynameshort = "Yellow Flare";
		descriptionShort = "Special 40mm Combine Yellow Flare";
		ammo = "OEC_Ammo_CMB20mm_yellow";
        picture = "\OECExtension\Weapons\data\uglFlareYellow.paa"; 
		count = 1;
		mass = 0.5;
	};

    // cmb 40mm colored smoke
    class OEC_Magazine_M320_smokeRed: OEC_Magazine_M320_HE
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Smoke (Red)";
		displaynameshort = "Red Smoke";
		descriptionShort = "Special 40mm Combine Red Marking Smoke Grenade";
		picture = "\OECExtension\Weapons\data\uglSmokeRed.paa";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		ammo = "OEC_Ammo_CMB40mm_smokeRed";
        count = 1;
		mass = 1;
	};

	class OEC_Magazine_M320_smokeGreen: OEC_Magazine_M320_smokeRed
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Smoke (Green)";
		displaynameshort = "Green Smoke";
		descriptionShort = "Special 40mm Combine Green Marking Smoke Grenade";
		picture = "\OECExtension\Weapons\data\uglSmokeGreen.paa";
		ammo = "OEC_Ammo_CMB40mm_smokeGreen";
        count = 1;
		mass = 1;
	};

	class OEC_Magazine_M320_smokeYellow: OEC_Magazine_M320_smokeRed
	{
		author = "OEC Extension";
		displayName = "[OEC] S/M-320 Smoke (Yellow)";
		displaynameshort = "Yellow Smoke";
		descriptionShort = "Special 40mm Combine Yellow Marking Smoke Grenade";
		picture = "\OECExtension\Weapons\data\uglSmokeYellow.paa";
		ammo = "OEC_Ammo_CMB40mm_smokeYellow";
        count = 1;
		mass = 1;
	};

    class OEC_Magazine_OICW_Base: Default
    {
        author = "OEC Extension";
		scope = 1;
		value = 1;
		displayName = "";
		model = "\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		modelSpecial = "";
		picture = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 820;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 25;
		weaponpoolavailable = 1;
		mass = 9;
		cost = 1;
    };

    class OEC_Magazine_OICW: OEC_Magazine_OICW_Base
    {
		scope = 2;
		ammo = "OEC_Ammo_OICW";
		author = "OEC Extension";
		displayName = "[OEC] 30rnd XM29 Magazine";
        picture = "\OECExtension\Weapons\data\OICWmag.paa";
		model = "\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		modelSpecialIsProxy = 1;
		count = 30;
		mass = 11.5;
		tracersEvery = 1;
    };

    class OEC_Magazine_357: OEC_Magazine_OICW_Base
    {
		scope = 2;
		ammo = "OEC_Ammo_357";
		author = "OEC Extension";
		displayName = "[OEC] 6Rnd .357 Cylinder";
        picture = "\OECExtension\Weapons\data\magnumMag.paa";
		modelSpecialIsProxy = 1;
		initspeed = 915;
		count = 6;
		mass = 6;
		tracersEvery = 1;
		lastRoundsTracer = 6;
    };

    class OEC_Magazine_OICW_HE_6rnd: 1Rnd_HE_Grenade_shell
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 HE 6Rnd GL Mag";
		displaynameshort = "HE Grenade";
		descriptionShort = "Standard 20mm Combine High-Explosive Grenade";
		picture = "\OECExtension\Weapons\data\oicwUglMagHE.paa";
		modelSpecial = "\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		modelSpecialIsProxy = 1;
		ammo = "OEC_Ammo_CMB20mm";
		count = 6;
		mass = 24.5;
		initspeed = 80;
		scope = 2;
		scopearsenal = 2;
	};

    class OEC_Magazine_OICW_Smoke_6rnd: OEC_Magazine_OICW_HE_6rnd
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 Instant Smoke 6Rnd GL Mag";
		displaynameshort = "Instant Smoke";
		descriptionShort = "Standard 20mm Combine Instant Smoke Grenade";
		ammo = "OEC_Ammo_CMB20mm_smoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		picture = "\OECExtension\Weapons\data\oicwUglMagSmokeWhite.paa";
		modelSpecial = "\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		initspeed = 80;
		mass = 12.75;
	};

	// Cmb 20mm Stun Grenade
	class OEC_Magazine_OICW_Stun_3rnd: OEC_Magazine_OICW_HE_6rnd
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 Stun Grenade 3Rnd GL Mag";
		descriptionShort = "Standard 20mm Combine Stun Grenade";
		displaynameshort = "Stun Grenade";
		picture = "\OECExtension\Weapons\data\oicwUglMagStun.paa";
		modelSpecial = "\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		ammo = "OEC_Ammo_CMB20mm_stun";
		initspeed = 80;
		count = 3;
		mass = 24.5;
	};

	// Cmb 20mm Flares
	class OEC_Magazine_OICW_green_6rnd: OEC_Magazine_OICW_HE_6rnd
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 Flare (Green) 6Rnd GL Mag";
		displaynameshort = "Green Flare";
		descriptionShort = "Standard 20mm Combine Green Flare";
		picture = "\OECExtension\Weapons\data\oicwUglMagFlareGreen.paa";
		ammo = "OEC_Ammo_CMB20mm_green";
		initspeed = 80;
		count = 6;
		mass = 5;
	};

    class OEC_Magazine_PulseSMG: OEC_Magazine_AR2
	{
		scope = 2;
		ammo = "OEC_Ammo_PulseSMG";
		author = "OEC Extension";
		picture = "\OECExtension\Weapons\data\pulseSMGmag.paa";
		displayName = "[OEC] 60rnd AR-1s Cell";
		descriptionShort = "Increased Capacity Pulse Cell.";
		count = 60;
		mass = 20;
	};

    class OEC_SMG46_Mag: OEC_Magazine_OICW_Base
    {
		scope = 2;
		ammo = "OEC_Ammo_46x30";
		author = "OEC Extension";
		displayName = "[OEC] 45rnd MP7 Magazine";
        picture = "\OECExtension\Weapons\data\SMG46mag.paa";
		modelSpecialIsProxy = 1;
		initspeed = 415;
		count = 45;
		mass = 6;
		tracersEvery = 0;
		lastRoundsTracer = 10;
    };

    class OEC_Magazine_SMG46_HE_2Rnd: OEC_Magazine_OICW_HE_6rnd
	{
		displayName = "[OEC] MP7 HE 2Rnd GL Mag";
		initspeed = 80;
		count = 2;
		mass = 8.25;
		picture = "\OECExtension\Weapons\data\uglHE.paa";
	};

    class OEC_Magazine_SMG46_Smoke_2Rnd: OEC_Magazine_OICW_Smoke_6rnd
	{
		displayName = "[OEC] MP7 Instant Smoke 2Rnd GL Mag";
		initspeed = 80;
		count = 2;
		mass = 4.125;
		picture = "\OECExtension\Weapons\data\uglSmokeWhite.paa";
	};

    class OEC_Magazine_SMG46_Stun_1Rnd: OEC_Magazine_OICW_Stun_3rnd
	{
		displayName = "[OEC] MP7 Stun 1Rnd GL Mag";
		initspeed = 80;
		count = 1;
		mass = 8.25;
		picture = "\OECExtension\Weapons\data\uglStun.paa";
	};

    class OEC_Magazine_SMG46_green_2Rnd: OEC_Magazine_OICW_green_6rnd
	{
		displayName = "[OEC] MP7 Flare (Green) 2Rnd GL Mag";
		initspeed = 80;
		count = 2;
		mass = 1.65;
		picture = "\OECExtension\Weapons\data\uglFlareGreen.paa";
	};

    class OEC_Magazine_SPAS12_8Rnd: 30Rnd_65x39_caseless_mag
    {
        author = "OEC Extension";
        scope = 2;
        displayName = "[OEC] 8 SPAS-12 Buckshot Shells";
        displayNameShort = "Buckshot";
        descriptionshort = "Buckshot shell for SPAS-12 Shotgun.";
        picture = "\OECExtension\Weapons\data\buckshotMag.paa";
        ammo = "OEC_Ammo_SPAS12_Buckshot";
        count = 8;
        initSpeed = 600;
        mass = 15;
        tracersEvery = 1;
    };

    class OEC_Magazine_SPAS12_8Rnd_Slug: OEC_Magazine_SPAS12_8Rnd
    {
        displayName = "[OEC] 8 SPAS-12 Slug Shells";
        displayNameShort = "Slug";
        descriptionshort = "Slug shell for SPAS-12 Shotgun.";
        picture = "\OECExtension\Weapons\data\slugMag.paa";
        ammo = "OEC_Ammo_SPAS12_Slug";
        tracersEvery = 1;
        mass = 20;
    };

    class OEC_Magazine_USP: OEC_Magazine_OICW_Base
    {
		scope = 2;
		ammo = "OEC_Ammo_46x30";
		author = "OEC Extension";
		displayName = "[OEC] 18rnd USP Match Magazine";
        picture = "\OECExtension\Weapons\data\pistolMag.paa";
		modelSpecialIsProxy = 1;
		initspeed = 405;
		count = 18;
		mass = 2;
		tracersEvery = 1;
		lastRoundsTracer = 18;
    };

    class OEC_Magazine_WallhammerShotgun_8Rnd: 30Rnd_65x39_caseless_mag
    {
        author = "OEC Extension";
        scope = 2;
        displayName = "[OEC] 8Rnd Shotgun Coagulum Cell";
        displayNameShort = "Coagulum Cell";
        descriptionshort = "Powerful Combine Shotgun Cells, designed to fire a concentrated pulse clump.";
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_aa12slug_ca.paa";
        ammo = "OEC_Ammo_WallhammerShotgun";
        count = 8;
        initSpeed = 300;
        mass = 12.5;
    };
    class OEC_Magazine_WallhammerShotgun_8Rnd_Shredder: OEC_Magazine_WallhammerShotgun_8Rnd
    {
        displayName = "[OEC] 8Rnd Shotgun Shredder Cell";
        displayNameShort = "Shredder Cell";
        descriptionshort = "Powerful Combine Shotgun Cells, designed to fire a spread pulse cone.";
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_aa12_ca.paa";
        ammo = "OEC_Ammo_WallhammerShotgun_Shredder";
    };

    class OEC_Magazine_Turret: OEC_Magazine_PulseSMG
	{
		scope = 2;
		ammo = "OEC_Ammo_Turret";
		author = "OEC Extension";
		picture = "\OECExtension\Weapons\data\turretMag.paa";
		displayName = "[OEC] 200rnd Combine Sterilizer Cell";
		descriptionShort = "Extreme Capacity Sterilizer Pulse Cell; 200m dissipation range";
		//model = "\a3\Props_F_Enoch\Military\Camps\PortableLight_02_single_folded_F.p3d";
		//hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Camps\data\Portable_light_02_Single_Sand_CO.paa"};
		count = 200;
		mass = 20;
		allowedSlots[] = 
		{
			701, // Vest
			801, // Uniform
			901  // Backpack
		};
	};

	class OEC_Magazine_Hunter_Flechette: OEC_Magazine_PulseSMG
	{
		ammo = "OEC_Ammo_Hunter_Flechette";
		displayName = "[OEC] Hunter Flechette Cartridge";
		initspeed = 200;
	};

    // KORD 12.7x108mm mags
    class OEC_Magazine_127x100_100Rnd: VehicleMagazine
	{
		author = "OEC Extension";
		displayName = "[OEC] 100Rnd 12.7x108mm";
		displayNameShort = "12.7x108mm";
		scope = 2;
		count = 100;
		ammo = "OEC_ammo_127x108mm";
		initSpeed = 990;
		tracersEvery = 1;
		nameSound = "mgun";
		weight = "0.13*50";
		cartridge = "FxCartridge_127";
	};

    class OEC_Magazine_127x100_50Rnd: OEC_Magazine_127x100_100Rnd
	{
		displayName = "[OEC] 50Rnd 12.7x108mm";
		scope = 2;
		count = 50;
	};

    class OEC_Magazine_762x51_100Rnd: VehicleMagazine
	{
		author = "OEC Extension";
		displayName = "[OEC] 7.62x51 Box (100Rnd)";
		scope = 2;
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		count = 100;
		ammo = "OEC_Ammo_762x51_TracerYellow";
		initSpeed = 860;
		tracersEvery = 1;
        nameSound = "mgun";
		mass = 64;
	};

	// ZU23 23x152mm mags
	class OEC_Magazine_AZP23_AA_100Rnd: VehicleMagazine
	{
		author = "OEC Extension";
		displayName = "[OEC] 100Rnd 23x152mm";
		displayNameShort = "23x152mm";
		ammo = "OEC_ammo_23mm_AA";
		scope = 2;
		count = 100;
		initSpeed = 860;
		maxLeadSpeed = 650;
		nameSound = "cannon";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {1.0,4};
	};

	class OEC_Magazine_AZP23_AA_1250Rnd: OEC_Magazine_AZP23_AA_100Rnd
	{
		displayName = "[OEC] 1250Rnd 23x152mm";
		displayNameShort = "23x152mm";
		ammo = "OEC_ammo_23mm_AA";
		scope = 2;
		count = 1250;
		initSpeed = 970;
	};

    class OEC_Magazine_2a72_20Rnd: 450Rnd_127x108_Ball
	{
		displayName = "[OEC] 20Rnd 2A72 30mm HE Shell";
		displayNameShort = "2A72 30mm He";
		nameSound = "heat";
		ammo = "OEC_Ammo_2a72";
		count = 20;
		maxLeadSpeed = 25;
		initSpeed = 1120;
		tracersEvery = 1;
		weight = "0.385*230";
	};

	// 125mm 2A46 T80 Cannon mags
	class OEC_Magazine_125mm_HE: VehicleMagazine
	{
		scope = 2;
		reloadTime = 6.5;
		magazineReloadTime = 6.5;
		count = 6;
		initSpeed = 850;
		tracersEvery = 1;
		ammo = "OEC_Ammo_2A46";
		//rhs_magazineIndex = 3;
		maxLeadSpeed = 40;
		muzzleImpulseFactor[] = {"14*0.5",14};
	};

    class OEC_Magazine_AK_Base: Default
    {
        author = "OEC Extension";
		scope = 1;  
		value = 1;
		displayName = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 25;
		weaponpoolavailable = 1;
		mass = 8;
		cost = 1;
    };

    class OEC_Magazine_545x39_30Rnd_Bakelite: OEC_Magazine_AK_Base
    {
        author = "OEC Extension";
		scope = 2;
		displayName = "[OEC] 30rnd 5.45x39 (Bakelite)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
		modelSpecialIsProxy = 1;
		ammo = "OEC_Ammo_545x39";
		count = 30;
		mass = 9;
		initSpeed = 910;
		tracersEvery = 0;
		lastRoundsTracer = 3;
		descriptionShort = "30Rnd 5.45x39mm Magazine";
    };

    class OEC_Magazine_545x39_30Rnd_Black: OEC_Magazine_545x39_30Rnd_Bakelite
    {
		author = "OEC Extension";
		displayName = "[OEC] 30rnd 5.45x39 (Black)";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_plum_AK_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
    };

	class OEC_Magazine_545x39_30Rnd_Taped: OEC_Magazine_545x39_30Rnd_Bakelite
	{
		author = "OEC Extension";
		displayName = "[OEC] 30rnd 5.45x39 (Taped)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_plum_AK_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"};
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_plum";
	};

	// 9x39 Val Mags
	class OEC_Magazine_9x39mm_SP5_20Rnd: OEC_Magazine_545x39_30Rnd_Black
	{
		author = "OEC Extension";
		displayName = "[OEC] 20Rnd 9x39 Sp-5";
		scope = 2;
		scopeArsenal = 2;
		ammo = "OEC_Ammo_9x39_SP5";
		count = 20;
		initSpeed = 280;
		lastRoundsTracer = 0;
		mass = 8;
		model = "\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x39_20mag";
		modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x39_6l25_20rnd";
		displayNameShort = "SP-5";
	};

    class OEC_Magazine_VOG25: 1Rnd_HE_Grenade_shell
	{
		author = "OEC Extension";
		displayName = "[OEC] VOG-25 HEAT";
		displaynameshort = "HE Grenade";
		descriptionShort = "Standard 40mm CIS High-Explosive Grenade";
		picture = "\rhsafrf\addons\rhs_weapons\gear\rhs_vog25_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vog25";
		modelSpecialIsProxy = 1;
		ammo = "OEC_Ammo_VOG25";
		count = 1;
		mass = 4.125;
		initspeed = 76.5;
		scope = 2;
		scopearsenal = 2;
	};

	class OEC_Magazine_VOG25_6Rnd: OEC_Magazine_VOG25
	{
		displayName = "[OEC] VOG-25 HEAT Drum (6Rnds)";
		displaynameshort = "HE Grenade Drum";
		descriptionShort = "Standard 40mm CIS High-Explosive Grenades, packed into a 6-round drum";
		count = 6;
		mass = 24.5;
	};

	// GMD40 Instant Smoke
	class OEC_Magazine_GDM40: OEC_Magazine_VOG25
	{
		author = "OEC Extension";
		displayName = "[OEC] GMD-40 Impact Smoke";
		displaynameshort = "Impact Smoke";
		descriptionShort = "Specialized 40mm CIS Impact Smoke Grenade";
		ammo = "OEC_Ammo_GDM40";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		picture = "\rhsafrf\addons\rhs_weapons2\gear\rhs_gdm40_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_gdm40";
		initspeed = 55;
	};

	class OEC_Magazine_GDM40_6Rnd: OEC_Magazine_GDM40
	{
		displayName = "[OEC] GMD-40 Impact Smoke Drum (6Rnds)";
		displaynameshort = "Impact Smoke Grenade Set";
		descriptionShort = "Specialized 40mm CIS Impact Smoke Grenades, packed into a 6-round drum";
		count = 6;
		mass = 24.5;
	};

	// VG40SZ Stun Grenade
	class OEC_Magazine_VG40SZ: OEC_Magazine_VOG25
	{
		author = "OEC Extension";
		displayName = "[OEC] VG-40SZ Stun Grenade";
		descriptionShort = "Specialized 40mm CIS Stun Grenade";
		displaynameshort = "Stun Grenade";
		picture = "\rhsafrf\addons\rhs_weapons\gear\rhs_vg40sz_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		ammo = "OEC_Ammo_VG40SZ";
		initspeed = 70;
	};

	// VG40OP Red Flares
	class OEC_Magazine_VG40OP_Red: OEC_Magazine_VOG25
	{
		author = "OEC Extension";
		displayName = "[OEC] VG-40OP Red Flare";
		displaynameshort = "Red Flare";
		descriptionShort = "Standard 40mm CIS Red Flare Grenade";
		ammo = "OEC_Ammo_40mm_RedFlare";
		initspeed = 70;
	};

	//Grenadier Special Submunition Mags (smoke + stun)
	class OEC_Magazine_SmokeStun_6Rnd: OEC_Magazine_VOG25
	{
		displayName = "[OEC] VG-40SZ Stun + GMD-40 Impact Smoke Mix Drum (6Rnds)";
		displaynameshort = "Stun and Impact Mix";
		descriptionShort = "Mix of specialized 40mm CIS Impact Smoke and Stun Grenades, packed into a 6-round drum";
		ammo = "OEC_Ammo_Special_SmokeStun";
		count = 6;
		mass = 10;
		initspeed = 70;
	};

    class OEC_Magazine_762x51_150Rnd: CA_Magazine
	{
		author = "OEC Extension";
		displayName = "[OEC] 7.62x51 Box (150Rnd)";
		scope = 2;
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		count = 150;
		type = "2*		256";
		ammo = "OEC_Ammo_762x51_TracerYellow";
		initSpeed = 860;
		tracersEvery = 1;
		mass = 64;
	};

    class OEC_Magazine_PG7V: CA_LauncherMagazine
	{
		author = "OEC Extension";
		displayName = "[OEC] PG-7V";
		displayNameShort = "PG-7V - AT";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7V_mag_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		descriptionShort = "Effective against: Vehicles, Armor.";
		model = "\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7v_mag";
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7v";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"camo_1","camo_2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa","rhsafrf\addons\rhs_weapons\rpg7\data\pg_7v_co.paa"};
		ammo = "OEC_Ammo_Rocket_PG7V";
		type = "6 * 		256";
		initSpeed = 114;
		mass = 31.46;
	};

    class OEC_Magazine_9x18_8Rnd: CA_Magazine
	{
		author = "OEC Extension";
		displayName = "[OEC] 8Rnd 9x18";
		displayNameShort = "9x18";
		scope = 2;
		picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		ammo = "OEC_Ammo_9x18";
		count = 8;
		mass = 10;
		initSpeed = 370;
		tracersEvery = 0;
	};
};

class CfgMagazineWells
{
    class OEC_MagazineWell_APFSuppressor
    {
        OEC_APFSuppressor_Mags[] =
        {
            "OEC_Magazine_APFSuppressor_100Rnd",
			"OEC_Magazine_APFSuppressor_100Rnd_Exogen"
        };
    };
};

class CfgSounds
{
	sounds[] = {};
    class OEC_HopperMine_Planted
    {
        name = "OEC_HopperMine_Planted";
        sound[] = {"OECExtension\Weapons\data\hoppermine\combineMine_planted.wss",3.1622777,1};
        titles[] = {};
    };
	class OEC_HopperMine_Alert
	{
		name = "OEC_HopperMine_Alert";
        sound[] = {"OECExtension\Weapons\data\hoppermine\combineMine_alert.wss",3.1622777,1};
        titles[] = {};
	};
	class OEC_HopperMine_Triggered
	{
		name = "OEC_HopperMine_Triggered";
        sound[] = {"OECExtension\Weapons\data\hoppermine\combineMine_triggered.wss",3.1622777,1};
        titles[] = {};
	};
};

class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;

    class RHS_AK74_shot_SoundSet;
    class RHS_rifle_small_Tail_SoundSet;

    class RHS_sd_AK74_Shot_SoundSet;
    class RHS_sd_Rifle1_Tail_SoundSet;

	class OEC_SoundSet_CombineSniper: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"WBK_SniperRifle_HL_Shot_FireClose","WBK_SniperRifle_HL_Shot_FireDistance"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};

    class OEC_SoundSet_GaussGun
    {
        soundShaders[] = 
        {
            "OEC_SoundShader_GaussGun_closeShot",
            "OEC_SoundShader_GaussGun_distShot"
        };
        volumeFactor = 1.6;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
};

class CfgSoundShaders
{
    class OEC_SoundShader_GaussGun_closeShot
    {
        samples[] = 
        {
            {"\OECExtension\Weapons\data\gaussgun\gaussShot.wss",1}
        };
        volume = 1;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class OEC_SoundShader_GaussGun_distShot
    {
        samples[] = 
        {
            {"\OECExtension\Weapons\data\gaussgun\gaussShot.wss",1}
        };
        volume = 1;
        range = 2200;
        rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CUP_PicatinnyTopShortMount;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class ItemInfo;
class Flashlight;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CBA_DisposableLaunchers
{
	OEC_Weapon_SIPL0_Loaded[] = {"OEC_Weapon_SIPL0","OEC_Weapon_SIPL0_Used"};
};



class CfgWeapons
{
    class Default;
    class ItemCore;
    class CannonCore;
	class SmokeLauncher;
    class GrenadeLauncher;
	class MGun;
	class InventoryUnderItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Weapon_Base_F;
    class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
    class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
        class EventHandlers;
	};
    class UGL_F;

    class Pistol;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};

    class arifle_MX_Base_F;
    class arifle_MX_F: arifle_MX_Base_F
    {
        class WeaponSlotsInfo;
        class GunParticles;
        class FullAuto;
    };
    class arifle_MXC_F: arifle_MX_Base_F
	{
        class GunParticles;
		class WeaponSlotsInfo;
	};

    class rhs_acc_pkas;
    class rhs_acc_ekp8_02;
    class rhs_acc_pso1m21;
    class rhs_acc_2dpZenit;
    class rhs_acc_dtk4short;
    class rhs_acc_dtk;
    class rhs_acc_pgs64_74u;

    class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
    class LMG_RCWS: MGun{};

	class pdw2000_base_F: Rifle_Short_Base_F{};

    class sgun_HunterShotgun_01_F;

    class autocannon_30mm_CTWS;

    class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};

    class srifle_GM6_F;

    class CUP_glaunch_6G30;
    
    class HL_CMB_arifle_AR2_base;

    //-------------------------------------------------------------//
    //HAND GRENADES
    //-------------------------------------------------------------//

    class Throw: GrenadeLauncher
    {
        muzzles[] += {"OEC_Throw_MK3A2", "OEC_Throw_M18smoke_White", "OEC_Throw_M18smoke_Red","OEC_Throw_M18smoke_Green","OEC_Throw_M18smoke_Yellow","OEC_Throw_M18smoke_Purple","OEC_Throw_M18smoke_Blue","OEC_Throw_M18smoke_Orange"};
        class ThrowMuzzle: GrenadeLauncher{};
        class OEC_Throw_MK3A2: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_MK3A2"};
        };
		class OEC_Throw_M18smoke_White: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_White"};
        };
		class OEC_Throw_M18smoke_Red: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Red"};
        };
		class OEC_Throw_M18smoke_Green: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Green"};
        };
		class OEC_Throw_M18smoke_Yellow: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Yellow"};
        };
		class OEC_Throw_M18smoke_Purple: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Purple"};
        };
		class OEC_Throw_M18smoke_Blue: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Blue"};
        };
		class OEC_Throw_M18smoke_Orange: ThrowMuzzle
        {
            magazines[] = {"OEC_Magazine_M18smoke_Orange"};
        };
    };

    class Put: Default
	{
        muzzles[] += {"OEC_Put_Hopper"};
		class PutMuzzle;
		class MineMuzzle: PutMuzzle{};
        class ClassicMineRangeMuzzle: PutMuzzle {};
        class OEC_Put_Hopper: ClassicMineRangeMuzzle
		{
			magazines[] = {"OEC_Magazine_HopperMine_Range"};
			displayName = "Deploy Hopper Mine";
		};
	};

    //-------------------------------------------------------------//
    //COMBINE WEAPONS
    //-------------------------------------------------------------//

    class OEC_Weapon_APFSuppressor: HL_CMB_arifle_AR2_base
    {
        author = "OEC";
        displayName = "[OEC] APF Suppressor";

        picture = "\OECExtension\Weapons\data\APFSuppressor.paa";
        model = "WBK_Combines\weapons\supressor_LMG.p3d";

        scope = 2;
        scopeArsenal = 2;
        magazines[] = {"OEC_Magazine_APFSuppressor_100Rnd", "OEC_Magazine_APFSuppressor_100Rnd_Exogen"};
        magazineWell[] = {"OEC_MagazineWell_APFSuppressor"};
        drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		reloadMagazineSound[] = {"WBK_Combines\weapons\APF_reload.ogg",1,1,30};
        reloadAction = "WBK_HLA_APFLMG_reload";
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\apf_weap_idle.rtm"};
        magazineReloadTime = 1.5;
        baseWeapon = "OEC_Weapon_APFSuppressor";
        _generalMacro = "";
        muzzles[] = {"this"};
		modes[] = {"FullAuto450", "FullAuto600", "FullAuto750","close","near","short","medium","far"};
		mass = 262;
		class Library
		{
			libTextDesc = "Overwatch Standard Issue HMG. Very high penetration, high damage, 150rnd magazine capacity.";
		};
        class FullAuto450: Mode_FullAuto
        {
            displayName = "450 RPM";
			reloadTime = 0.13333;
			aiRateOfFire = 0.13333;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"WBK_APF_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\APF_Fire_1.ogg",1.1,1,1000};
				begin2[] = {"WBK_Combines\weapons\APF_Fire_2.ogg",1.1,1,1000};
				begin3[] = {"WBK_Combines\weapons\APF_Fire_3.ogg",1.1,1,1000};
				begin4[] = {"WBK_Combines\weapons\APF_Fire_4.ogg",1.1,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
			};
			autoFire = 1;
			textureType = "semi";
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.0038;
			showToPlayer = 1;
        };
		class FullAuto600: FullAuto450
		{
			showToPlayer = 1;
			displayName = "600 RPM";
			reloadTime = 0.1;
			aiRateOfFire = 0.1;
			textureType = "burst";
		};
		class FullAuto750: FullAuto450
		{
			showToPlayer = 1;
			displayName = "750 RPM";
			reloadTime = 0.08;
			aiRateOfFire = 0.08;
			textureType = "fullAuto";
		};
        class close: FullAuto750
		{
			showToPlayer = 0;
			burst = 25;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 200;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 20;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
    };

    class OEC_Weapon_AR2: pdw2000_base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] AR-2 Pulse Rifle";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Pulse Rifle";
		model = "\hl_cmb_weapons\AR2\arifle_ar2.p3d";
		hiddenSelections[] = {};
		selectionfireanim = "muzzleFlash";
		reloadAction = "GestureReload_AR2";
		handanim[] = {"OFP2_ManSkeleton","\hl_cmb_weapons\Anim\ar2anim.rtm"};
		magazines[] = {"OEC_Magazine_AR2"};
		magazineWell[] = {};
        picture = "\OECExtension\Weapons\data\AR2.paa";
		inertia = 0.6;
		aimTransitionSpeed = 1;
		dexterity = 1.4;
		initSpeed = 715;
		recoil = "HL_CMB_arifle_AR2_Recoil";
		maxZeroing = 800;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"hl_cmb_weapons\sounds\ar2_dry",0.099999994,1,20};
		reloadMagazineSound[] = {"hl_cmb_weapons\sounds\ar2_reload",2.5,1,20};
		class Library
		{
			libTextDesc = "Overwatch Standard Issue Pulse Rifle. High penetration, high damage, 30rnd magazine capacity.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 125;
			class CowsSlot{};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot{};
		};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"hl_cmb_weapons\sounds\ar2_fire",2.2589254,1,1000};
				begin2[] = {"hl_cmb_weapons\sounds\ar2_fire",2.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.00093;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"hl_cmb_weapons\sounds\ar2_fire",1.9589254,1,1000};
				begin2[] = {"hl_cmb_weapons\sounds\ar2_fire",1.9589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.00093;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.005;
			aiRateOfFireDistance = 70;
			aiDispersionCoefY = 3;
			aiDispersionCoefX = 2;
		};
	};

    class OEC_Weapon_R1: OEC_Weapon_AR2
	{
		author = "OEC Extension";
        displayName = "[OEC] R-1 Silenced Pulse Rifle";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Special Issue Pulse Rifle";

		handanim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\ar_idle.rtm"};
		reloadMagazineSound[] = {"WBK_Combines\weapons\ordinal_ar_reload.ogg",1.4,1,25};
		reloadAction = "WBK_HLA_OrdinalArReload";
		baseWeapon = "OEC_Weapon_R1";
		model = "\WBK_Combines\weapons\ordinal_ar.p3d";
		picture = "\OECExtension\Weapons\data\R1rifle.paa";
		magazines[] = {"OEC_Magazine_R1"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Special Issue Pulse RIfle. Uses unique cells to grant stealth advantage. High penetration, high damage, 20rnd magazine capacity.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot{};
		};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.818383,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.818383,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.818383,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.00093;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.818383,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.818383,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.818383,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.00093;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.005;
			aiRateOfFireDistance = 70;
			aiDispersionCoefY = 3;
			aiDispersionCoefX = 2;
		};
	};

    class OEC_Weapon_CombineSniper: srifle_GM6_F
	{
		selectionfireanim = "muzzleFlash";
		class WeaponSlotsInfo
		{
			class CowsSlot{};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot
			{
				compatibleItems[] = {"OEC_Acc_pointer_blue"};
			};
		};

        modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F"};
        class OpticsModes
        {
            class scope
            {
                opticsID = 1;
                useModelOptics = 1;
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsZoomMin = "0.25/25";
                opticsZoomMax = "0.25/6";
                opticsZoomInit = "0.25/6";
                discreteinitIndex = 0;
                discretefov[] = {"0.25/6","0.25/25"};
                memoryPointCamera = "opticView";
                discreteDistanceInitIndex = 1;
                distanceZoomMin = 100;
                distanceZoomMax = 100;
                visionMode[] = {};
                thermalMode[] = {};
                opticsFlare = 1;
                opticsDisplayName = "R-2X";
                opticsDisablePeripherialVision = 0;
                cameraDir = "";
            };
        };

        author = "OEC Extension";
        displayName = "[OEC] R-2X Pulse Sniper Rifle";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Special Issue Pulse Sniper Rifle";
		class Library
		{
			libTextDesc = "Overwatch Special Issue Pulse Sniper Rifle. Pulse ammo has no damage dropoff and is not affected by gravity, but will dissipate beyond 1200m.";
		};
		baseWeapon = "OEC_Weapon_CombineSniper";
		drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		reloadAction = "WBK_HLA_OrdinalArReload";
		reloadMagazineSound[] = {"WBK_Combines\weapons\sniper_reload.wav",2,1,30};
		model = "WBK_Combines\weapons\assasin_sniper.p3d";
		picture = "\OECExtension\Weapons\data\R2Xsniper.paa";
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\assasin_sniper_idle.rtm"};
		magazines[] = {"OEC_Magazine_cmbSrifle", "OEC_Magazine_cmbSrifle_AP"};
        magazineWell[] = {};

		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OEC_SoundSet_CombineSniper"};
				begin1[] = {"\OECExtension\Weapons\Ammo\sounds\combinesniperrifle.wss",0.9,1,1000};
				soundBegin[] = {"begin1", 1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			dispersion = 0.000093;
			reloadTime = 2;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			minRange = 20;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};

    class OEC_Weapon_Gauss_Base: Rifle_Long_Base_F
	{
		author = "OEC Extension";
		scope = 0;
		displayName = "[OEC] EM-1 Pulse Assisted Gauss Gun";
		magazines[] = {"OEC_Magazine_Gauss"};
		magazineWell[] = {};
		reloadAction = "WBK_OICW_ReloadGL";
		recoil = "recoil_dmr_02";
		maxZeroing = 2000;
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\OICW_Idle.rtm"};
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page06_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		cursor = "srifle";
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_srifle_DMR_02_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_338
			{
				compatibleItems[] = {};
				iconPosition[] = {0.0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				compatibleItems[] = {};
				iconPosition[] = {0.5,0.36};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				compatibleItems[] = {};
				iconPosition[] = {0.22,0.42};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				compatibleItems[] = {};
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
		distanceZoomMin = 500;
		distanceZoomMax = 500;
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Dry_01",0.25118864,1,20};
		reloadMagazineSound[] = {"\OECExtension\Weapons\data\gaussgun\gaussReload.wss",1.0,1,10};
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.63095737,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.63095737,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.63095737,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.63095737,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.63095737,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.63095737,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.63095737,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.63095737,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.63095737,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.63095737,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.63095737,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.63095737,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modelOptics = "\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
		class OpticsModes
        {
            class Ironsights
            {
                opticsID = 0;
                useModelOptics = 0;
                opticsFlare = "true";
                opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
                opticsDisablePeripherialVision = 0.67;
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.1;
                opticsZoomInit = 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                distanceZoomMin = 100;
                distanceZoomMax = 100;
            };
            class Scope: Ironsights
            {
                opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				discreteFov[] = {"1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')","2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')","3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')","4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"};
				discreteInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 800;
				memoryPointCamera = "opticView";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
				visionMode[] = {"Normal","NVG"};
				thermalMode[] = {2,3};
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
            };
        };
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"OEC_SoundSet_GaussGun"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"OEC_SoundSet_GaussGun"};
			};
			reloadTime = 2.2;
			dispersion = 0.00044;
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
		};
		class single_close_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 700;
			midRangeProbab = 0.5;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 2;
	};

    class OEC_Weapon_Gauss: OEC_Weapon_Gauss_Base
	{
		author = "OEC Extension";
		scope = 2;
		model = "\OECExtension\Weapons\data\gaussgun\OEC_GaussRifle.p3d";
		dexterity = 1.68;
		displayName = "[OEC] EM-1 Pulse Assisted Gauss Gun";
		picture = "\OECExtension\Weapons\data\GaussGun.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionShort = "Special Issue Pulse Assisted Gauss Gun";
		inertia = 0.9;
		aimTransitionSpeed = 0.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 260;
		};
		class ItemInfo
		{
			priority = 1;
		};
	};

    class OEC_Weapon_M320_Base: Pistol_Base_F
	{
        scope = 1;
        scopearsenal = 1;
		magazines[] = {"OEC_Magazine_M320_Smoke", "OEC_Magazine_M320_Stun", "OEC_Magazine_M320_red", "OEC_Magazine_M320_green", "OEC_Magazine_M320_yellow", "OEC_Magazine_M320_smokeRed", "OEC_Magazine_M320_smokeGreen", "OEC_Magazine_M320_smokeYellow"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Special Issue Signal Launcher";
		};
		optics = 0;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		recoil = "recoil_mx";
		inertia = 0.2;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "RifleAssaultCloud";
			};
		};
		weaponInfoType = "rhs_rscOptics_pistol";
		discreteDistance[] = {100,200,300,400};
		discreteDistanceInitIndex = 1;
		opticsZoomMin = 0.275;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot{};
			holsterScale = 0;
		};
		reloadAction = "rhs_GestureReloadM320_pistol";
		descriptionShort = "Signal Launcher<br />Caliber: 40mm";
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m320.rtm"};
		dexterity = 1.8;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"rhs_m203_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
            };
			reloadTime = 0.1;
			dispersion = 0.00093;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.1;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload",0.794328,1,10};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		muzzles[] = {"this"};
		magazineReloadSwitchPhase = 0.56;
	};
	class OEC_Weapon_M320marker: OEC_Weapon_M320_Base
	{
        author = "OEC Extension";
        displayName = "[OEC] S/M-320 Launcher Pistol";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Special Issue Signal/Marking Pistol";
		picture = "\OECExtension\Weapons\data\SM320.paa";
		model = "\rhsusf\addons\rhsusf_weapons\m320\M320standalone.p3d";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		weaponInfoType = "rhs_rscOptics_pistol_usf";
		cameraDir = "gl_look";
        magazines[] = {"OEC_Magazine_M320_Smoke", "OEC_Magazine_M320_Stun", "OEC_Magazine_M320_red", "OEC_Magazine_M320_green", "OEC_Magazine_M320_yellow", "OEC_Magazine_M320_smokeRed", "OEC_Magazine_M320_smokeGreen", "OEC_Magazine_M320_smokeYellow"};
		magazineWell[] = {};
		discreteDistance[] = {50,100,150,200,250,300,350};
		discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
		discreteDistanceInitIndex = 0;
		maxZeroing = 350;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 33;
		};
		class ItemInfo
		{
			priority = 1;
		};
	};

    class OEC_Weapon_Magnum: hgun_Pistol_heavy_02_F
    {
        author = "OEC Extension";
        displayName = "[OEC] .357 Magnum";
		scopeArsenal = 2;
		scope = 2;
		baseWeapon = "OEC_Weapon_Magnum";
		picture = "\OECExtension\Weapons\data\Magnum.paa";
        model = "\WBK_OICW\A_HalfLife_Revolver.p3d";
        reloadAction = "WBK_HL_Revolver_Reload";
        magazines[] = {"OEC_Magazine_357"};
        magazineWell[] = {};
        reloadMagazineSound[] = {"WBK_OICW\revolver_reload.ogg",1,1,30};
        reloadSound[] = {"WBK_OICW\revolver_reload.ogg",1,1,30};
        class Library
		{
			libTextDesc = "Overwatch Standard Issue Sidearm. Handed out to commanders of Civil Protection and Transhuman Arm.";
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot{};
            class MuzzleSlot{};
            class UnderBarrelSlot{};
            class PointerSlot{};
        };
        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
                closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"WBK_HLRevolver_Shot_Base_Soundset"};
                begin1[] = {"WBK_Combines\weapons\pulse_smg_fire_4.ogg",0.9,1,1000};
                begin2[] = {"WBK_Combines\weapons\pulse_smg_fire_3.ogg",0.9,1,1000};
                begin3[] = {"WBK_Combines\weapons\pulse_smg_fire_2.ogg",0.9,1,1000};
                begin4[] = {"WBK_Combines\weapons\pulse_smg_fire_1.ogg",0.9,1,1000};
                soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
                        frequency = 1;
                        volume = "interior";
                    };
                    class TailTrees
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
                        frequency = 1;
                        volume = "(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailMeadows
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
                        frequency = 1;
                        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
                        frequency = 1;
                        volume = "(1-interior/1.4)*houses";
                    };
                };
            };
            reloadTime = 0.75;
            recoil = "recoil_single_dmr";
            recoilProne = "recoil_single_prone_dmr";
            dispersion = 0.0051;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.05;
            aiDispersionCoefX = 0;
            aiDispersionCoefY = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            textureType = "semi";
        };
    };

    class OEC_Weapon_OICW: arifle_MXC_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {};
			};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot{};
		};
		reloadMagazineSound[] = {"WBK_Combines\weapons\OICW_reloadSnd.ogg",1,1,30};
		reloadSound[] = {"WBK_Combines\weapons\OICW_reloadSnd.ogg",1,1,30};
		author = "OEC Extension";
        displayName = "[OEC] XM29 OICW Rifle";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Ballistic Rifle";
		baseWeapon = "OEC_Weapon_OICW";
		modelOptics = "\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
		model = "\WBK_OICW\OICW\OICW.p3d";
		hiddenSelections[] = {};
		selectionfireanim = "muzzleFlash";
        picture = "\OECExtension\Weapons\data\OICW.paa";
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\OICW_Idle.rtm"};
		reloadAction = "WBK_OICW_ReloadMain";
		recoil = "recoil_mk20";
		discreteDistanceInitIndex = 0;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		magazines[] = {"OEC_Magazine_OICW"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Standard Issue Ballistic Rifle with a 6-round over-barrel grenade launcher. Medium penetration, high damage, 30rnd magazine capacity.";
		};
        muzzles[] = {"this","EGLM1"};
		class EGLM1: UGL_F
		{
			reloadAction = "WBK_OICW_ReloadGL";
			displayName = "OICW 20mm 6GL";
			descriptionShort = "20mm 6GL";
            useModelOptics = 10;
			useExternalOptic = 0;
			magazines[] = {"OEC_Magazine_OICW_HE_6rnd", "OEC_Magazine_OICW_Smoke_6rnd", "OEC_Magazine_OICW_Stun_3rnd", "OEC_Magazine_OICW_green_6rnd"};
			magazineWell[] = {};
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
			discreteDistanceInitIndex = 0;
			reloadMagazineSound[] = {"WBK_Combines\weapons\OICW_reloadSnd.ogg",1,1,30};
			reloadSound[] = {"WBK_Combines\weapons\OICW_reloadSnd.ogg",1,1,30};
            class Single: Mode_SemiAuto
			{
				displayName = "Single";
				textureType = "semi";
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
					soundClosure[] = {"closure1",1};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
					begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
					soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
				};
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				dispersion = 0;
				minRange = 30;
				minRangeProbab = 0.1;
				midRange = 200;
				midRangeProbab = 0.7;
				maxRange = 400;
				maxRangeProbab = 0.05;
			};
		};
        weaponInfoType = "CUP_RscOptics_XM29";
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = "1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomMax = "4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				opticsZoomInit = "2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')";
				discreteFov[] = {"1 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')","2 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')","3 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')","4 call (uiNamespace getVariable 'cba_optics_fnc_setOpticMagnificationHelper')"};
				discreteInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 800;
				memoryPointCamera = "opticView";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
				visionMode[] = {"Normal","NVG"};
				thermalMode[] = {2,3};
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
				modelOptics = "\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
			};
		};
        modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","single_far_optics1", "fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_OICWRifleCombine_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\pulse_smg_fire_4.ogg",0.9,1,1000};
				begin2[] = {"WBK_Combines\weapons\pulse_smg_fire_3.ogg",0.9,1,1000};
				begin3[] = {"WBK_Combines\weapons\pulse_smg_fire_2.ogg",0.9,1,1000};
				begin4[] = {"WBK_Combines\weapons\pulse_smg_fire_1.ogg",0.9,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.00093;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_OICWRifleCombine_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\pulse_smg_fire_4.ogg",0.9,1,1000};
				begin2[] = {"WBK_Combines\weapons\pulse_smg_fire_3.ogg",0.9,1,1000};
				begin3[] = {"WBK_Combines\weapons\pulse_smg_fire_2.ogg",0.9,1,1000};
				begin4[] = {"WBK_Combines\weapons\pulse_smg_fire_1.ogg",0.9,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.00093;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.005;
			aiRateOfFireDistance = 70;
			aiDispersionCoefY = 3;
			aiDispersionCoefX = 2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00093;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00093;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00093;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00093;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiBurstTerminable = 1;
		};
	};

    class OEC_Weapon_PulseSMG: OEC_Weapon_AR2
	{
		author = "OEC Extension";
        displayName = "[OEC] AR-1s Pulse SMG";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Pulse Submachine Gun";
		model = "\WBK_Combines\weapons\grunt_ar.p3d";
		handanim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\arsmg_idle.rtm"};
        magazines[] = {"OEC_Magazine_PulseSMG","OEC_Magazine_Hunter_Flechette"};
		magazineWell[] = {};
		reloadMagazineSound[] = {"WBK_Combines\weapons\ordinal_ar_reload.ogg",1.05,1,16};
		reloadAction = "WBK_HLA_OrdinalArReload";
		picture = "\OECExtension\Weapons\data\PulseSMG.paa";
		muzzles[] = {"this"};
		mass = 85;
		initSpeed = -1;
        class Library
		{
			libTextDesc = "Overwatch Standard Issue Pulse SMG. High penetration, medium damage, 60rnd magazine capacity.";
		};
        modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_AR1_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\AR1_Fire_4.ogg",0.9,1,1000};
				begin2[] = {"WBK_Combines\weapons\AR1_Fire_2.ogg",0.9,1,1000};
				begin3[] = {"WBK_Combines\weapons\AR1_Fire_3.ogg",0.9,1,1000};
				begin4[] = {"WBK_Combines\weapons\AR1_Fire_1.ogg",0.9,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.075;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.0051;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.005;
			aiRateOfFireDistance = 70;
			aiDispersionCoefY = 3;
			aiDispersionCoefX = 2;
		};
	};

    class OEC_Weapon_SIPL0_Loaded: Launcher_Base_F
	{
		displayName = "[OEC] SIPL-0";
    	author = "OEC Extension";
		scope = 1;
		scopeArsenal = 1;
		baseWeapon = "OEC_launcher_SIPL0";
		model = "\CUP\Weapons\CUP_Weapons_M136\CUP_at4.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_M136\data\ui\gear_at4_x_ca.paa";
		UiPicture = "\a3\weapons_f\data\ui\icon_at_ca.paa";
		modelOptics = "-";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		reloadAction = "ReloadRPG";
		magazineReloadTime = 0.1;
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_M136\Data\Anim\handanim_at4.rtm"};
		maxZeroing = 400;
		weaponInfoType = "RscWeaponZeroing";
		distanceZoomMin = 50;
		distanceZoomMax = 400;
		discreteDistance[] = {50,100,150,200,250,300,350,400};
		discreteDistanceCameraPoint[] = {"eye_1","eye_2","eye_3","eye_4","eye_5","eye_6","eye_7","eye_8"};
		discreteDistanceInitIndex = 0;
		memorypointcamera = "eye";
		cameraDir = "look";
		magazines[] = {"OEC_Magazine_SIPL0_M"};
		jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";
		AGM_Backblast_Angle = 45;
		AGM_Backblast_Range = 100;
		AGM_Backblast_Damage = 0.7;
		AGM_UsedTube = "AGM_launch_M136_Used_F";
		ace_overpressure_angle = 45;
		ace_overpressure_damage = 0.5;
		ace_overpressure_range = 10;
		class GunParticles
		{
			class effect1
			{
				positionName = "BackBlast2";
				directionName = "BackBlast1";
				effectName = "CUP_at4_backblast";
			};
		};
		sounds[] = {"StandardSound"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"CUP\Weapons\CUP_Weapons_M136\data\sound\M136_s1.wss","db18",1,900};
				begin2[] = {"CUP\Weapons\CUP_Weapons_M136\data\sound\M136_s2.wss","db18",1,900};
				begin3[] = {"CUP\Weapons\CUP_Weapons_M136\data\sound\M136_s3.wss","db18",1,900};
				begin4[] = {"CUP\Weapons\CUP_Weapons_M136\data\sound\M136_s4.wss","db18",1,900};
				soundBegin[] = {"begin1",1,"begin2",1,"begin3",1,"begin4",1};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			dispersion = 0.07;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\Dry",1,1,35};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_M136\data\sfx\Fly",0.31622776,1.5,900};
		recoil = "recoil_single_law";
		value = 20;
		canLock = 0;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 2500;
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		descriptionShort = "SIPL-0 Disposable Launcher";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			mass = 107.4;
		};
		inertia = 0.9;
		aimTransitionSpeed = 0.5;
		class ItemInfo
		{
			priority = 3;
		};
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class EventHandlers
		{
			fired = "_this call CBA_fnc_firedDisposable";
		};
	};
	class OEC_Weapon_SIPL0: OEC_Weapon_SIPL0_Loaded
	{
		displayName = "[OEC] SIPL-0 Disaposable";
		descriptionShort = "Standard Issue Portable Launcher - Disposable";
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "OEC_Weapon_SIPL0";
		magazines[] = {"OEC_Magazine_SIPL0_M"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 147.4;
		};
	};
	class OEC_Weapon_SIPL0_Used: OEC_Weapon_SIPL0_Loaded
	{
		displayName = "[OEC] SIPL-0 (Used)";
		descriptionShort = "Standard Issue Portable Launcher - Used";
		author = "OEC Extension";
		baseWeapon = "OEC_Weapon_SIPL0_Used";
		scope = 1;
		model = "\CUP\Weapons\CUP_Weapons_M136\CUP_AT4_used.p3d";
		magazines[] = {"CBA_FakeLauncherMagazine"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 107.4;
		};
	};

    // SIPL-1 Launcher for OEC
	class OEC_Weapon_SIPL_base: Launcher_Base_F
	{
		displayName = "[OEC] SIRR-1";
    	author = "OEC Extension";
		scope = 0;
		model = "\A3\Weapons_F_Tank\Launchers\MRAWS\launch_MRAWS_F.p3d";
		picture = "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_darkgreen_F_X_CA.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\a3\Weapons_F_Tank\Launchers\MRAWS\Data\Anim\MRAWS.rtm"};
		magazines[] = {"OEC_Magazine_SIPL_HEAT55","OEC_Magazine_SIPL_HEAT75","OEC_Magazine_SIPL_HE44"};
		hiddenSelections[] = {"camo1","camo2"};
		reloadAction = "ReloadRPG";
		recoil = "recoil_rpg";
		maxZeroing = 600;
		modelOptics = "\a3\Weapons_F_Tank\acc\reticle_MRAWSNew.p3d";
		weaponInfoType = "RscOpticsRangeFinderMRAWS";
		opticsZoomMin = 0.1083;
		opticsZoomMax = 0.1083;
		opticsZoomInit = 0.1083;
		cameraDir = "look";
		ace_reloadlaunchers_enabled = 1;
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.0875;
				opticsZoomMax = 0.0875;
				opticsZoomInit = 0.0875;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] = {"Normal","NVG"};
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			};
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.9952624,1,1500};
				soundBegin[] = {"begin1",1};
                soundSetShot[] = {"Launcher_MRAWS_Shot_SoundSet","Launcher_MRAWS_Tail_SoundSet"};
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			dispersion = 0.07;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",0.4466836,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",0.25118864,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",0.31622776,1.5,900};
		canLock = 0;
		weaponLockDelay = 3.0;
		lockAcquire = 0;
		inertia = 0.9;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 130;
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0.15,0.5};
				iconScale = 0.25;
                compatibleItems[] = {};
			};
		};
		descriptionShort = "Standard Issue Recoilles Rifle";
	};

    class OEC_Weapon_SIPL_green: OEC_Weapon_SIPL_base
	{
		displayName = "[OEC] SIRR-1 Green";
		descriptionShort = "Standard Issue Recoilles Rifle - Green";
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "OEC_launcher_SIPL_green";
		picture = "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_darkgreen_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_darkgreen_01_F_co","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Weap_SIPL";
            variant = "green";
        };
	};

	class OEC_Weapon_SIPL_olive: OEC_Weapon_SIPL_base
	{
		displayName = "[OEC] SIRR-1 Olive";
		descriptionShort = "Standard Issue Recoilles Rifle - Olive";
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "OEC_launcher_SIPL_olive";
		picture = "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_olive_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_olive_01_F_co","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Weap_SIPL";
            variant = "olive";
        };
	};

	class OEC_Weapon_SIPL_sand: OEC_Weapon_SIPL_base
	{
		displayName = "[OEC] SIRR-1 Sand";
		descriptionShort = "Standard Issue Recoilles Rifle - Sand";
		author = "Dirt's OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "OEC_launcher_SIPL_sand";
		picture = "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_sand_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_sand_01_F_co","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Weap_SIPL";
            variant = "sand";
        };
	};

    class OEC_Weapon_SMG46: arifle_MXC_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
			class CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				//displayName = "$STR_A3_CowsSlot0";
                iconPosition[] = {0.4,0.32};
				iconScale = 0.15;
				compatibleItems[] = {"optic_Aco_smg","optic_Holosight_smg_blk_F"};
			};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot{};
		};
		author = "OEC Extension";
        displayName = "[OEC] MP7 Combine SMG";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Ballistic Submachine Gun";
        picture = "\OECExtension\Weapons\data\SMG46.paa";
		baseWeapon = "OEC_Weapon_SMG46";
		model = "\WBK_Combines\weapons\grunt_smg.p3d";
		reloadMagazineSound[] = {"WBK_Combines\weapons\smg_reload.ogg",1,1,30};
		reloadSound[] = {"WBK_Combines\weapons\smg_reload.ogg",1,1,30};
		hiddenSelections[] = {};
		selectionfireanim = "muzzleFlash";
		reloadAction = "WBK_HL_Smg_reload_combine";
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\combine_smg_idle.rtm"};
		recoil = "HL_CMB_SMG_01_Recoil";
		magazines[] = {"OEC_SMG46_Mag"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Standard Issue Ballistic Submachinegun with a 2-round under-barrel grenade launcher. High penetration and high damage (at short ranges), 45rnd magazine capacity.";
		};
		muzzles[] = {"this","EGLM2"};
		class EGLM2: UGL_F
		{
			reloadAction = "GestureReloadMXUGL";
			displayName = "MP7 20mm 2GL";
			descriptionShort = "20mm 2GL";
            useModelOptics = 10;
			useExternalOptic = 0;
			magazines[] = {"OEC_Magazine_SMG46_HE_2Rnd", "OEC_Magazine_SMG46_Smoke_2Rnd", "OEC_Magazine_SMG46_Stun_1Rnd", "OEC_Magazine_SMG46_green_2Rnd"};
			magazineWell[] = {};
			cameraDir = "OP_look";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
			discreteDistanceInitIndex = 0;
			reloadMagazineSound[] = {"WBK_Combines\weapons\OICW_reloadSnd.ogg",1,1,30};
			reloadSound[] = {"WBK_Combines\weapons\OICW_reloadSnd.ogg",1,1,30};
            class Single: Mode_SemiAuto
			{
				displayName = "Single";
				textureType = "semi";
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10};
					soundClosure[] = {"closure1",1};
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.707946,1,200};
					begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.707946,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
					soundSetShot[] = {"UGL_shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
				};
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
				dispersion = 0;
				minRange = 30;
				minRangeProbab = 0.1;
				midRange = 200;
				midRangeProbab = 0.7;
				maxRange = 400;
				maxRangeProbab = 0.05;
			};
		};
        weaponInfoType = "CUP_RscOptics_XM29";
        modes[] = {"FullAuto","single_medium_optics1","single_medium_optics2","single_far_optics1", "fullauto_medium"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_SMGHL_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\pulse_smg_fire_4.ogg",0.9,1,1000};
				begin2[] = {"WBK_Combines\weapons\pulse_smg_fire_3.ogg",0.9,1,1000};
				begin3[] = {"WBK_Combines\weapons\pulse_smg_fire_2.ogg",0.9,1,1000};
				begin4[] = {"WBK_Combines\weapons\pulse_smg_fire_1.ogg",0.9,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.06;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.0075;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.005;
			aiRateOfFireDistance = 70;
			aiDispersionCoefY = 3;
			aiDispersionCoefX = 2;
		};
		class single_medium_optics1: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class single_medium_optics2: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics1: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			dispersion = 0.00087;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiBurstTerminable = 1;
		};
	};

    class OEC_Weapon_SMG46_Sighted: OEC_Weapon_SMG46
    {
        class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Aco_smg";
			};
        };
    };

    class OEC_Weapon_SPAS12: Rifle_Base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] SPAS-12 Shotgun";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Ballistic Shotgun.";
		model = "CUP\Weapons\CUP_Weapons_SPAS12\CUP_sgun_SPAS12";
		picture = "\OECExtension\Weapons\data\SPAS12.paa";
		magazines[] = {"OEC_Magazine_SPAS12_8Rnd", "OEC_Magazine_SPAS12_8Rnd_Slug"};
        magazineWell[] = {};
		handAnim[] = {"OFP2_ManSkeleton","\CUP\Weapons\CUP_Weapons_SPAS12\data\anim\spas_hand.rtm"};
		inertia = 0.5;
		aimTransitionSpeed = 0.9;
		bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.5011872,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.5011872,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.5011872,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.5011872,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.39810717,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		reloadMagazineSound[] = {"WBK_Combines\weapons\shotgun_reloadSnd.ogg",1,1,30};
		drySound[] = {"CUP\Weapons\CUP_Weapons_SPAS12\data\sfx\Dry",1,1,35};
		cursor = "sgun";
		optics = 1;
		modelOptics = "-";
		selectionFireAnim = "zasleh";
        reloadAction = "WBK_HLA_ChargerShotgun_reload";
		modes[] = {"Single", "FullAuto"};
		discreteDistance[] = {100};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		fireSpreadAngle = 0.7848246;
		jsrs_soundeffect = "JSRS2_Distance_Effects_Shotgun";
		ACE_twistDirection = 0;
		ACE_barrelTwist = 0.0;
		ACE_barrelLength = 469.9;
		class Single: Mode_SemiAuto
		{
            sounds[] = {"StandardSound"};
			class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
            };
            aiRateOfFire = 1;
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 0.25;
			magazineReloadTime = 6;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
		};
        class FullAuto: Mode_FullAuto
		{
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
            };
            aiRateOfFire = 1;
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 0.25;
			magazineReloadTime = 6;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
		};
		class Library
		{
			libTextDesc = "$STR_CUP_lib_spas12";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95.8;
			class CowsSlot{};
			class PointerSlot{};
			class MuzzleSlot{};
		};
	};
    class OEC_Weapon_USP: Pistol_Base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] USP Match";
		scopeArsenal = 2;
		scope = 2;
		baseWeapon = "OEC_Weapon_USP";
		model = "\hl_cmb_weapons\usp\usp.p3d";
		picture = "\OECExtension\Weapons\data\USPmatch.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction = "WBK_HL_pistol_reload";
		reloadMagazineSound[] = {"WBK_Combines\weapons\pistol_reload.ogg",1,1,30};
		magazines[] = {"OEC_Magazine_USP"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Standard Issue Sidearm. Widely adopted by Civil Protection and Transhuman Arm.";
		};
		descriptionShort = "Semi-automatic pistol";
		selectionfireanim = "muzzleFlash";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_PISTHL_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\pulse_smg_fire_4.ogg",0.9,1,1000};
				begin2[] = {"WBK_Combines\weapons\pulse_smg_fire_3.ogg",0.9,1,1000};
				begin3[] = {"WBK_Combines\weapons\pulse_smg_fire_2.ogg",0.9,1,1000};
				begin4[] = {"WBK_Combines\weapons\pulse_smg_fire_1.ogg",0.9,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.0051;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiDispersionCoefX = 0;
			aiDispersionCoefY = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};

    class OEC_Weapon_WallhammerShotgun: sgun_HunterShotgun_01_F
    {
        author = "OEC Extension";
        displayName = "[OEC] Wallhammer Shotgun";
        baseWeapon = "OEC_Weapon_WallhammerShotgun";
        magazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd"};
        magazineWell[] = {};

        picture = "\OECExtension\Weapons\data\WallhammerShotgun.paa";
		drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		reloadAction = "WBK_HLA_ChargerShotgun_reload";
		reloadMagazineSound[] = {"WBK_Combines\weapons\shotgun_reloadSnd.ogg",1,1,30};
		model = "WBK_Combines\weapons\charger_shotgun.p3d";
        mass = 135;
		class GunParticles
		{
			class Effect1
			{
				directionName = "konec hlavne";
				effectName = "StarterPistolCloud1";
				positionName = "usti hlavne";
			};
			class Effect2
			{
				directionName = "usti hlavne";
				effectName = "StarterPistolCloud2";
				positionName = "konec hlavne";
			};
			class FirstEffect
			{
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\shotgun_idle.rtm"};
		inertia = 0.5;
		fireSpreadAngle = 1;
        class Single: Mode_SemiAuto
		{
			displayName = "Coagulum Cell";
			sounds[] = {"StandardSound"};
			dispersion = 0;
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
			};
			soundContinuous = 0;
			reloadTime = 0.1;
		};
		bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.5011872,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.5011872,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.5011872,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.5011872,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.39810717,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
       
        muzzles[] = {"this","Shredder_Muzzle"};
		class Shredder_Muzzle: sgun_HunterShotgun_01_F
		{
			drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		    reloadAction = "WBK_HLA_ChargerShotgun_reload";
		    reloadMagazineSound[] = {"WBK_Combines\weapons\shotgun_reloadSnd.ogg",1,1,30};
			displayName = "Shredder Mode";
			descriptionShort = "Shredder Mode Switch";
			magazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd_Shredder"};
			magazineWell[] = {};
            class Single: Mode_SemiAuto
			{
                
				displayName = "Shredder Cell";
				textureType = "topDown";
				sounds[] = {"StandardSound"};
				dispersion = 0;
                class BaseSoundModeType;
                class StandardSound: BaseSoundModeType
                {
                    soundSetShot[] = {"WBK_SPAS_Shot_Base_Soundset"};
                };
                class SilencedSound: BaseSoundModeType
                {
                    soundsetshot[] = {"Mk18_silencerShot_SoundSet","Mk18_silencerTail_SoundSet","Mk18_silencerInteriorTail_SoundSet"};
                };
                soundContinuous = 0;
                reloadTime = 0.1;

			};
            bullet1[] = {"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",0.5011872,1,15};
            bullet2[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",0.5011872,1,15};
            bullet3[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",0.5011872,1,15};
            bullet4[] = {"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",0.5011872,1,15};
            bullet5[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",0.39810717,1,15};
            bullet6[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",0.39810717,1,15};
            bullet7[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",0.39810717,1,15};
            bullet8[] = {"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",0.39810717,1,15};
            bullet9[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",0.2238721,1,15};
            bullet10[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",0.2238721,1,15};
            bullet11[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",0.2238721,1,15};
            bullet12[] = {"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",0.2238721,1,15};
            soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		};
    };

    class OEC_Weapon_Turret: OEC_Weapon_PulseSMG
    {
		picture = "";
		model = "";
        type = 1;
		showAimCursorInternal = 1;
		scopeCurator = 1;
		scope = 1;
		displayName = "Combine Turret Pulse Gun";
		magazines[] = {"OEC_Magazine_Turret"};
		initSpeed = 0;
        modes[] = {"FullAuto","aiMode"};
		soundBullet[] = {};

		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"OECExtension\Drones\data\shoot1.wss",1.6,1,1000};
				begin2[] = {"OECExtension\Drones\data\shoot2.wss",1.6,1,1000};
				begin3[] = {"OECExtension\Drones\data\shoot3.wss",1.6,1,1000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.0051;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 2;
			midRangeProbab = 0.7;
			maxRange = 3;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.005;
			aiRateOfFireDistance = 70;
			aiDispersionCoefY = 0;
			aiDispersionCoefX = 0;
        };
        class aiMode: FullAuto
        {
            showToPlayer = 0;
			soundBurst = 0;
            aiBurstTerminable = 1;
			burst = 200;
			aiRateOfFire= 1e-006;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 0;
			minRange = 1;
			minRangeProbab = 0.15;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.6;
		};
    };

    //-------------------------------------------------------------------------------//
    //CISDF WEAPONS
    //-------------------------------------------------------------------------------//

    class OEC_Weapon_2A46_Cannon: cannon_120mm
	{
		aiDispersioncoefX = 3.5;
		aiDispersioncoefY = 6.5;
		canLock = 0;
		scope = 1;
		nameSound = "cannon";
		displayName = "[OEC] 2A46 125mm Cannon";
		showaimcursorinternal = 0;
		cursor = "EmptyCursor";
		cursoraim = "cannon";
		cursoraimon = "cannon";
		reloadSound[] = {"",1.0,1,200};
		reloadMagazineSound[] = {"",1.0,1,200};
		ballisticsComputer = 0;
		flash = "gunfire";
		flashSize = 10;
		maxLeadSpeed = 100;
		reloadTime = 6.5;
		aiRateOfFire = 6.6;
		aiRateOfFireDistance = 10;
		magazineReloadTime = 6.5;
		autoReload = 0;
		magazines[] = {"OEC_Magazine_125mm_HE"};
		magazineWell[] = {};
		modes[] = {"single","close","short","medium"};
		class Single: Mode_SemiAuto
		{
			displayName = "125mm HE";
			displayNameShort = "125mm HE";
			reloadTime = 10;
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			aiBurstTerminable = 1;
			minRange = 1;
			minRangeProbab = 1;
			midRange = 2;
			midRangeProbab = 1;
			maxRange = 3;
			maxRangeProbab = 1;
			dispersion = 0.0009375;
			textureType = "semi";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_120mm_Shot_SoundSet","RHS_120mm_int_Shot_SoundSet","RHS_cannon_Tail_SoundSet"};
			};
		};
		class close: Single
		{
			aiRateOfFireDistance = 100;
			minRange = 10;
			minRangeProbab = 0.15;
			midRange = 50;
			midRangeProbab = 0.4;
			maxRange = 100;
			maxRangeProbab = 0.8;
			showToPlayer = 0;
		};
		class short: close
		{
			aiRateOfFireDistance = 400;
			minRange = 100;
			minRangeProbab = 0.6;
			midRange = 250;
			midRangeProbab = 0.85;
			maxRange = 400;
			maxRangeProbab = 0.8;
		};
		class medium: close
		{
			aiRateOfFireDistance = 800;
			minRange = 400;
			minRangeProbab = 0.6;
			midRange = 600;
			midRangeProbab = 0.85;
			maxRange = 800;
			maxRangeProbab = 0.8;
		};
	};

    class OEC_Weapon_2a72: autocannon_30mm_CTWS
	{
		aiDispersioncoefX = 2;
		aiDispersioncoefY = 3;
		airateoffire = 1;
		airateoffiredistance = 1000;
		scope = 1;
		displayName = "[OEC] 2A72 30mm Autocannon";
		nameSound = "cannon";
		reloadTime = 0.2;
		magazinereloadtime = 12;
		autoFire = 1;
		canLock = 0;
		magazines[] = {"OEC_Magazine_2a72_20Rnd"};
		magazineWell[] = {};
		cursor = "EmptyCursor";
		cursorAim = "mg";
		cursorSize = 1;
		ballisticsComputer = 0;
		muzzles[] = {"this"};
		class gunParticles
		{
			class Shell
			{
				positionName = "ejector_30mm";
				directionName = "ejector_30mm_dir";
				effectName = "RHS_30mm_Catridge";
			};
			class Effect
			{
				positionname = "Usti hlavne";
				directionname = "Konec hlavne";
				effectname = "AutoCannonFired";
			};
		};
        modes[] = {"LowROF", "close","med", "far"};
		class LowROF: Mode_FullAuto
		{
			displayName = "30mm HE";
			displayNameShort = "30mm HE";
			reloadTime = 0.25;
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			aiBurstTerminable = 1;
			minRange = 1;
			minRangeProbab = 0.4;
			midRange = 2;
			midRangeProbab = 0.5;
			maxRange = 3;
			maxRangeProbab = 0.1;
			dispersion = 0.0009375;
			textureType = "burst";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_autocannon_Shot_SoundSet","RHS_autocannon_int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
			};
		};
		class close: LowROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 8;
			burstRangeMax = 12;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 150;
			minRange = 0;
			minRangeProbab = 0.4;
			midRange = 75;
			midRangeProbab = 0.5;
			maxRange = 150;
			maxRangeProbab = 0.1;
		};
		class med: close
		{
			burst = 6;
			burstRangeMax = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.4;
			midRange = 200;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 1;
			burstRangeMax = 4;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 550;
			maxRangeProbab = 0.1;
		};
	};

    class OEC_Weapon_6G30: CUP_glaunch_6G30
    {
        author = "OEC Extension";
        displayName = "[OEC] 6G30 Launcher";
        baseWeapon = "OEC_Weapon_6G30";
        magazines[] = {"OEC_Magazine_VG40SZ_6Rnd", "OEC_Magazine_VOG25_6Rnd", "OEC_Magazine_GDM40_6Rnd", "OEC_Magazine_SmokeStun_6Rnd", "OEC_Magazine_VOG25","OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};
        magazineWell[] = {};

        class Single: Mode_SemiAuto
	  	{
            sounds[] = {"StandardSound"};
            class StandardSound
            {
            soundSetShot[] = {"CUP_GrenadeLaunchers_Shot_SoundSet","UGL_Tail_SoundSet","UGL_InteriorTail_SoundSet"};
            weaponSoundEffect = "DefaultRifle";
            begin1[] = {"CUP\Weapons\CUP_Weapons_GrenadeLaunchers\data\sfx\g_launcher",1,1,200};
            soundBegin[] = {"begin1",1};
                class SoundTails
                {
                    class TailInterior
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800};
                        frequency = 1;
                        volume = "interior";
                    };
                    class TailTrees
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*trees";
                    };
                    class TailForest
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*forest";
                    };
                    class TailMeadows
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
                    };
                    class TailHouses
                    {
                        sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800};
                        frequency = 1;
                        volume = "(1-interior/1.4)*houses";
                    };
                };
            };
            
        minRange = 15;
        minRangeProbab = 0.5;
        midRange = 40;
        midRangeProbab = 0.5;
        maxRange = 250;
        maxRangeProbab = 0.5;
        showToPlayer = 1;
        canShootInWater = 0;
        requiredOpticType = 0;
        reloadTime = 0.5;
	    dispersion = 0.01;
	    autoFire = 0;
	    soundContinuous = 0;
	    soundBurst = 0;
	    };
    };

    class OEC_Weapon_AKS74N: arifle_MX_F
    {
        author = "OEC Extension";
        displayName = "[OEC] AKS-74N";
        baseWeapon = "OEC_Weapon_AKS74N";
        magazines[] = {"OEC_Magazine_545x39_30Rnd_Bakelite","OEC_Magazine_545x39_30Rnd_Black", "OEC_Magazine_545x39_30Rnd_Taped"};
        magazineWell[] = {};
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_aks74n_ca.paa";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74.rtm"};
        optics = 0;
		reloadAction = "RHS_GestureReloadAK_1hand";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 74.5;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {"OEC_Acc_Suppressor_DTK4", "OEC_Acc_Muzzle_DTK"};
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {"OEC_Acc_Pointer_Zenit"};
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {"OEC_Acc_Scope_PKAS", "OEC_Acc_Collimator_EKP802", "OEC_Acc_Scope_PSO1"};
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {};
            };
        };

        class GunParticles: GunParticles
	    {
		    class SecondEffect
		    {
			    positionName = "Nabojnicestart";
			    directionName = "Nabojniceend";
			    effectName = "CaselessAmmoCloud";
		    };

		    class RHS_BarrelRefract
		    {
			    positionName = "usti hlavne";
			    directionName = "usti hlavne up";
			    effectName = "RHS_BarrelRefract";
		    };
	    };

	    changeFiremodeSound[]=
	    {
		    "A3\sounds_f\weapons\closure\firemode_changer_2",
		    0.56234133,
		    1,
		    20
	    };

        modes[] = {"Single","FullAuto","close","short","medium", "far_optic2"};
        class Single: Mode_SemiAuto
        {
            aiBurstTerminable	= 1;
            reloadTime			= 0.0923;
            dispersion			= 0.00093;
            minRange			= 2;
            minRangeProbab		= 0.01;
            midRange			= 200;
            midRangeProbab		= 0.01;
            maxRange			= 375;
            maxRangeProbab		= 0.01;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class FullAuto: Fullauto
        {
            aiBurstTerminable	= 1;
            reloadTime			= 0.0923;
            dispersion			= 0.00093;
            minRange			= 0;
            minRangeProbab		= 0.3;
            midRange			= 5;
            midRangeProbab		= 0.7;
            maxRange			= 10;
            maxRangeProbab		= 0.04;
            aiRateOfFire		= 1e-006;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class close: Fullauto
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
        class short: close
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.04;
		};
        class medium: close
		{
			burst = 2;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 350;
			minRange = 150;
			minRangeProbab = 0.05;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
		};
        class far_optic2: close
		{
			burst = 3;
			requiredOpticType = 2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 650;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.4;
			maxRange = 450;
			maxRangeProbab = 0.01;
		};

        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "OEC_Acc_Muzzle_DTK";
            };
        };
    };
    
    class OEC_Weapon_AKS74N_GP25: OEC_Weapon_AKS74N
    {
        author = "OEC Extension";
        displayName = "[OEC] AKS-74N (GP-25)";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_aks74n_gp25_ca.paa";
        model = "\rhsafrf\addons\rhs_weapons3\aks74\rhs_aks74n_gp25";
        dexterity = 1.8;
        inertia = 0.67;
        handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
        muzzles[] = {"this","OEC_Muzzle_GP25"};
        scope = 2;
        baseWeapon = "OEC_Weapon_AKS74N_GP25";
        _generalMacro = "OEC_Weapon_AKS74N_GP25";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 107;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {"OEC_Acc_Suppressor_DTK4", "OEC_Acc_Muzzle_DTK"};
            };
            class PointerSlot {};
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {"OEC_Acc_Scope_PKAS", "OEC_Acc_Collimator_EKP802", "OEC_Acc_Scope_PSO1"};
            };
            class UnderBarrelSlot {};
        };

        class OEC_Muzzle_GP25: UGL_F
        {
            displayName = "[OEC] GP-25";
            descriptionShort = "Grenade launcher<br/>Caliber: 40mm";
            useModelOptics = 0;
            useExternalOptic = 0;
            reloadaction = "RHS_GestureReloadGP30";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
            magazines[] = {"OEC_Magazine_VOG25","OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};
            magazineWell[] = {};
            recoil = "rhs_recoil_gp25";

            class Single: Mode_SemiAuto
            {
                sounds[] = {"StandardSound"};
                class BaseSoundModeType
                {
                    closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1.0,1,10};
                    soundClosure[] = {"closure1",1};
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
                    begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                };
                minRange = 20;
                minRangeProbab = 0.1;
                midRange = 40;
                midRangeProbab = 0.7;
                maxRange = 250;
                maxRangeProbab = 0.05;
                showToPlayer = 1;
                artilleryCharge = 1;
                artilleryDispersion = 1;
                canShootInWater = 0;
                requiredOpticType = -1;
            };
            modes[] = {"Single"};
            cameraDir = "OP_look";
            discreteDistance[] = {50,100,150,200,250,300,350,400};
            discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
            discreteDistanceInitIndex = 2;
            magazineReloadSwitchPhase = 0.36;
        };
    };
    class OEC_Weapon_AKS74N_GP25_PKAS: OEC_Weapon_AKS74N_GP25
    {
        class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OEC_Acc_Scope_PKAS";
			};
        };
    };

    class OEC_Weapon_AKS74U: arifle_MXC_F
    {
        author = "OEC Extension";
        displayName = "[OEC] AKS-74U";
        baseWeapon = "OEC_Weapon_AKS74U";
        magazines[] = {"OEC_Magazine_545x39_30Rnd_Bakelite","OEC_Magazine_545x39_30Rnd_Black", "OEC_Magazine_545x39_30Rnd_Taped"};
        magazineWell[] = {};
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_aks74u_ca.paa";
		discreteDistance[] = {350,500};
	    discreteDistanceInitIndex = 0;
	    discreteDistanceCameraPoint[] = {"eye","eye_500"};
        initSpeed = -0.835;
        dexterity = 1.6;
	    inertia = 0.33;
		cameraDir = "eye_look";
		model = "\rhsafrf\addons\rhs_weapons2\aks74u\rhs_aks74u";	
	    hiddenSelections[] = {"camo"};
	    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons2\aks74u\data\rhs_aks74u_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_aks74u.rtm"};
        optics = 0;
		reloadAction = "RHS_GestureReloadAKSU";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 59;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {"OEC_Acc_Muzzle_PGS64"};
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {};
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {};
            };
        };

        class GunParticles: GunParticles
	    {
		    class SecondEffect
		    {
			    positionName = "Nabojnicestart";
			    directionName = "Nabojniceend";
			    effectName = "CaselessAmmoCloud";
		    };

		    class RHS_BarrelRefract
		    {
			    positionName = "usti hlavne";
			    directionName = "usti hlavne up";
			    effectName = "RHS_BarrelRefract";
		    };
	    };

	    changeFiremodeSound[]=
	    {
		    "A3\sounds_f\weapons\closure\firemode_changer_2",
		    0.56234133,
		    1,
		    20
	    };

        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00139;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.04;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class Single_AI: Single
        {
            showToPlayer = 0;
            burstRangeMax = 3;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 375;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
        };
        class FullAuto: Mode_FullAuto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00139;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            class StandardSound
            {
                soundSetShot[] = {"RHS_ak74_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"RHS_sd_AK74_Shot_SoundSet","RHS_sd_Rifle1_Tail_SoundSet"};
            };
        };
        class single_medium_optics1: Single
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            aiRateOfFireDispersion = 3;
        };
        class fullauto_medium: FullAuto
        {
            showToPlayer = 0;
            burst = 2;
            burstRangeMax = 5;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1.0;
            aiRateOfFireDispersion	= 2;
        };
      
        class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "OEC_Acc_Muzzle_PGS64";
			};
		};
    };

    class OEC_Weapon_ASVal: OEC_Weapon_AKS74N
	{
		author = "OEC Extension";
        displayName = "[OEC] AS Val";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_asval_ca.paa";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "CIS Special Forces Rifle";
		recoil = "rhs_recoil_asval";
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 3;
		magazines[] = {"OEC_Magazine_9x39mm_SP5_20Rnd"};
		magazineWell[] = {};
		discreteDistance[] = {100,150,200,220,250,270,300,320,350,370,400,420};
		discreteDistanceCameraPoint[] = {"eye","eye_150","eye_200","eye_220","eye_250","eye_270","eye_300","eye_320","eye_350","eye_370","eye_400","eye_420"};
		cameraDir = "eye_look";
		maxZeroing = 420;
		model = "\rhsafrf\addons\rhs_weapons2\asval\rhs_asval";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons2\asval\data\asval_co.paa","rhsafrf\addons\rhs_weapons2\asval\data\mag_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_asval.rtm"};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		initSpeed = -1.0535;
		dexterity = 1.7;
		inertia = 0.45;

		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 74.5;
            class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {};
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {};
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {"OEC_Acc_Scope_PSO1"};
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {};
            };
        };

        class GunParticles: GunParticles
	    {
		    class SecondEffect
		    {
			    positionName = "Nabojnicestart";
			    directionName = "Nabojniceend";
			    effectName = "CaselessAmmoCloud";
		    };

		    class RHS_BarrelRefract
		    {
			    positionName = "usti hlavne";
			    directionName = "usti hlavne up";
			    effectName = "RHS_BarrelRefract";
		    };
	    };

	    changeFiremodeSound[]=
	    {
		    "A3\sounds_f\weapons\closure\firemode_changer_2",
		    0.56234133,
		    1,
		    20
	    };

        modes[] = {"Single","FullAuto","close","short","medium", "far_optic2"};
        class Single: Mode_SemiAuto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00163;
            minRange = 2;
            minRangeProbab = 0.01;
            midRange = 150;
            midRangeProbab = 0.01;
            maxRange = 250;
            maxRangeProbab = 0.01;
            class StandardSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
            class SilencedSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
        };
        class FullAuto: Mode_Fullauto
        {
            aiBurstTerminable = 1;
            reloadTime = 0.08;
            dispersion = 0.00163;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.04;
            aiRateOfFire = 1e-006;
            class StandardSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
            class SilencedSound
			{
				soundSetShot[] = {"RHS_ASVAL_Closure_SoundSet","RHS_ASVAL_ShotSD_SoundSet","RHS_rifle1_SD_Tail_SoundSet"};
			};
        };
        class close: FullAuto
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
        class short: close
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
			minRange = 30;
			minRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
        class medium: close
		{
			burst = 2;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 350;
			minRange = 100;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
        class far_optic2: close
		{
			burst = 3;
			requiredOpticType = 2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 650;
			minRange = 150;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.4;
			maxRange = 250;
			maxRangeProbab = 0.01;
		};

		class LinkedItems{};
		baseWeapon = "OEC_Weapon_ASVal";
		_generalMacro = "OEC_Weapon_ASVal";
		// rhs_pso1m21_type = "rhs_acc_pso1m21";

	};
    class OEC_Weapon_ASVal_PSO1: OEC_Weapon_ASVal
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "OEC_Acc_Scope_PSO1";
            };
        };
    };

    class OEC_Weapon_DSHKM: LMG_RCWS
	{
		type = 1;
		initSpeed = 0;
		class gunParticles
		{
			class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "Usti hlavne";
				directionname = "Konec hlavne";
			};
			class effect2
			{
				effectname = "RHS_145mm_Catridge";
				positionname = "machinegun_eject_pos";
				directionname = "machinegun_eject_dir";
			};
		};
		reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
		scope = 1;
		autoFire = 1;
		displayName = "[OEC] KORD HMG";
		ballisticscomputer = 2;
		magazineReloadTime = 12;
		magazines[] = {"OEC_Magazine_127x100_100Rnd", "OEC_Magazine_127x100_50Rnd"};
		soundServo[] = {"",0.0001,1.0};
		reloadTime = 0.1;
        flash = "gunfire";
		flashSize = 0.6;
		dispersion = 0.002;
		minRange = 1;
		minRangeProbab = 0.1;
		midRange = 400;
		midRangeProbab = 0.7;
		maxRange = 1200;
		maxRangeProbab = 0.04;
		aiDispersionCoefY = 7.0;
		aiDispersionCoefX = 7.0;
		aiRateOfFire = 0.3;
		aiRateOfFireDistance = 1500;
		maxLeadSpeed = 600;
		canLock = 0;
		modes[] = {"manual","close","short","medium"};
		class manual: MGun
		{
			displayName = "[OEC] KORD HMG";
			autoFire = 1;
			reloadTime = 0.095;
			dispersion = 0.002;
			showToPlayer = 1;
			burst = 1;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;

            class StandardSound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_DSHKM_Shot_SoundSet","RHS_DSHKM_Int_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 9;
			burstRangeMax = 14;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 5;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
	};

	class OEC_Weapon_DSHKM_BMP3: OEC_Weapon_DSHKM
	{
		class gunParticles
		{
			class Shell
			{
				positionName = "ejector_30mm";
				directionName = "ejector_30mm_dir";
				effectName = "MachineGunCartridge2";
			};
			class Effect
			{
				positionname = "Usti hlavne3";
				directionname = "Konec hlavne3";
				effectname = "MachineGunCloud";
			};
		};
	};

	class OEC_Weapon_DSHKM_BTR80: OEC_Weapon_DSHKM
	{
		class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "Usti hlavne";
				directionname = "Konec hlavne";
			};
			class effect2
			{
				effectname = "RHS_145mm_Catridge";
				positionname = "machinegun_eject_pos";
				directionname = "machinegun_eject_dir";
			};
	};

	class OEC_Weapon_DSHKM_t80: OEC_Weapon_DSHKM
	{
		class GunParticles: GunParticles
		{
			class effect1a
			{
				effectname = "MachineGunCloud";
				positionname = "Mgun_end";
				directionname = "Mgun_start";
			};
			class effect1
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectname = "MachineGunEject";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};
		};
	};

    class OEC_Weapon_Makarov: Pistol_Base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] Makarov Pistol";
		scopeArsenal = 2;
		scope = 2;
		baseWeapon = "OEC_Weapon_Makarov";
		model = "\rhsafrf\addons\rhs_weapons2\pistols\pm\rhs_makarov_pm";
		modelOptics = "-";
		picture = "\A3\weapons_F\Pistols\Rook40\data\UI\gear_Rook40_x_ca.paa";
		magazines[] = {"OEC_Magazine_9x18_8Rnd"};
		magazineWell[] = {};
		descriptionShort = "CIS Standard Issue Handgun";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Pistols\Rook40\data\Rook40_co"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.22387211,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1.0,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
            sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_pp2000_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
			};
			class BaseSoundModeType{};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.1;
			dispersion = 0.00435;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.2;
		aimTransitionSpeed = 1.6;
		dexterity = 1.8;
		initSpeed = 450;
		recoil = "recoil_pistol_rook40";
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
            holsterOffset = "holster";
			holsterScale = 0.95;
		};
	};

    class OEC_Weapon_PKM: Rifle_Long_Base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] PKM";
        baseWeapon = "OEC_Weapon_PKM";
		scope = 2;
        inertia = 0.85;
		dexterity = 1.0;
		magazines[] = {"OEC_Magazine_762x51_150Rnd"};
        magazineWell[] = {};
		reloadAction = "GestureReloadM200";
		recoil = "rhs_recoil_pkm";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		nameSound = "Mgun";
        UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_pkm_ca.paa";
		model = "\rhsafrf\addons\rhs_weapons\pkm\pkm.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\pkm\pkm_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkm.rtm"};
        hasBipod = 1;
		maxRecoilSway = 0.015;
		swayDecaySpeed = 1.25;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		aimTransitionSpeed = 0.5;

		class ItemInfo
		{
			priority = 1;
		};

		magazineReloadSwitchPhase = 0.46;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{

		 class MuzzleSlot: MuzzleSlot
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class CowsSlot: CowsSlot 
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class UnderBarrelSlot: UnderBarrelSlot
            {
                compatibleItems[] = {};
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
		};

        changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.56234133,1,20};
		muzzles[] = {"this"};
		modes[] = {"FullAuto","Single","close","short","medium"};
		discreteDistance[] = {420,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200","eye_1300","eye_1400","eye_1500"};
		discreteDistanceInitIndex = 0;
		cameraDir = "eye_look";
		maxZeroing = 1500;

		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
			class RHS_BarrelRefract
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne up";
				effectName = "RHS_BarrelRefract";
			};
        };

		class Eventhandlers: Eventhandlers
		{
			class RHS_pk_firedSoundHandler
			{
				fired = "_this params ['_unit','_weapon']; private _soundArray = ['RHS_rattle_pk_1','RHS_rattle_pk_2','RHS_rattle_pk_3','RHS_rattle_pk_4','RHS_rattle_pk_5','RHS_rattle_pk_6'];[_unit,_weapon,_soundArray,3] call RHS_fnc_beltRattle; private _sound = 'RHS_boltSnap_pk';[_unit,_weapon,_sound] call RHS_fnc_boltSnap";
			};
		};

		WW2_boltSnapSound = "RHS_boltSnap_pk";
		WW2_boltSnapDelay = 0.1;

        class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.092;
			dispersion = 0.0014545;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiBurstTerminable = 0;
			aiRateOfFire = 1e-006;
			showToPlayer = 1;
			class StandardSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
			class SilencedSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.092;
			dispersion = 0.00101;
			autoFire = 0;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
			class StandardSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
			class SilencedSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
		};
		class close: FullAuto
		{
			burst = 40;
			burstRangeMax = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 30;
			burstRangeMax = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 20;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 375;
			midRangeProbab = 0.6;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};

        aiDispersionCoefY = 14;
		aiDispersionCoefX = 8;
	};

    class OEC_PKT: MGun
	{
		scope = 1;
		reloadTime = 0.075;
		autoFire = 1;
		soundContinuous = 0;
		dispersion = 0.003;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 600;
		maxRangeProbab = 0.01;
		aiDispersionCoefY = 7.0;
		aiDispersionCoefX = 7.0;
		magazineReloadTime = 7;
		maxLeadSpeed = 600;
		canLock = 0;
	};
    class OEC_Weapon_PKM_Vehicle: OEC_PKT
	{
		type = 1;
		showAimCursorInternal = 1;
		scope = 1;
		displayName = "[OEC] Coaxial PKM";
		magazines[] = {"OEC_Magazine_762x51_100Rnd"};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		initSpeed = 0;
        /*class gunParticles
		{
			class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "Usti hlavne2";
				directionname = "Konec hlavne2";
			};
		};*/

		modes[] = {"manual","close","short","medium"};
		class manual: MGun
		{
			displayName = "Vehicle-Mounted PKM";
			autoFire = 1;
			reloadTime = 0.075;
			dispersion = 0.00125;
			showToPlayer = 1;
			soundContinuous = 0;
			burst = 1;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
            class StandardSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
			class SilencedSound
            {
                soundSetShot[] = {"RHS_pk_Shot_SoundSet","RHS_rifle_med_Tail_SoundSet"};
            };
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
            aiBurstTerminable = 0;
			burst = 12;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 4;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 4;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};

	class OEC_Weapon_vicPKM_BMP3_bow1: OEC_Weapon_PKM_Vehicle
	{
		class gunParticles
		{
			class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "muzzle2";
				directionname = "end2";
			};
		};
	};

	class OEC_Weapon_vicPKM_BMP3_bow2: OEC_Weapon_PKM_Vehicle
	{
		class gunParticles
		{
			class effect1
			{
				effectname = "MachineGunCloud";
				positionname = "muzzle3";
				directionname = "end2";
			};
		};
	};


    class OEC_Weapon_RPG7: Launcher_Base_F
    {
        displayName = "[OEC] RPG-7V2";
        descriptionShort = "Rocket launcher<br/>Caliber: 70mm<br/>Type: Rocket-propelled grenade launcher";
        author = "OEC Extension";
        useModelOptics = 0;
        useExternalOptic = 0;
        scope = 2;
        scopeArsenal = 2;
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_rpg7_ca.paa";
        model = "\rhsafrf\addons\rhs_weapons\rpg7\rhs_rpg7v2";
        modelOptics = "-";
        reloadAction = "RHS_GestureReloadRPG7";
        handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\RPG7gripPrevraceny.rtm"};
        class GunParticles
        {
            class effect1
            {
                positionName = "konec hlavne";
                directionName = "usti hlavne";
                effectName = "RocketBackEffectsRPGNT";
            };
        };
        magazineReloadSwitchPhase = 0.3;
        magazines[] = {"OEC_Magazine_PG7V"};
        magazineWell[] = {};
        modes[] = {"single","single_optics1","single_optics2"};
        class single: Mode_SemiAuto
        {
            reloadTime = 0.1;
            minRange = 10;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.3;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 300;
            aiRateOfFireDispersion = 6;
            dispersion = 0.013;
            class BaseSoundModeType{};
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                weaponSoundEffect = "DefaultRifle";
                begin1[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,1100};
                begin2[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_2",2.35,1,1100};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            sound[] = {"rhsafrf\addons\rhs_sounds\rpg\rpg_1",2.35,1,900};

        };
        class single_optics1: single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 10;
            minRangeProbab = 0.4;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.2;
        };
        class single_optics2: single_optics1
        {
            requiredOpticType = 2;
            minRange = 10;
            midRange = 300;
            maxRange = 400;
        };
        discreteDistance[] = {100,150,200,300};
        discreteDistanceCameraPoint[] = {"eye_100","eye_150","eye_200","eye_300"};
        discreteDistanceInitIndex = 0;
        cameraDir = "eye_look";
        inertia = 0.8;
        dexterity = 1.2;
        aimTransitionSpeed = 0.5;
        maxZeroing = 500;
        recoil = "rhs_recoil_rpg7";
        sound[] = {"A3\Sounds_F\weapons\Launcher\rpg32",1.99526,1,800};
        drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.562341,1,50};

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 126.7;
            class CowsSlot{};
            class PointerSlot{};
        };
        class ItemInfo
        {
            priority = 3;
        };

        baseWeapon = "OEC_Weapon_RPG7";
	};

    class OEC_Weapon_ZU23: CannonCore
	{
		displayName = "2A14";
		ballisticsComputer = 2;
		canLock = 0;
		weaponLockSystem = 0;
		reloadMagazineSound[] = {"rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_2a14_reload",10.0,1,20};
		scope = 1;
		nameSound = "cannon";
		cartridgePos = "eject1";
		cartridgeVel = "eject1dir";
		cursor = "emptyCursor";
		cursorAim = "mg";
		cursorAimOn = "";
		cursorSize = 1;
		flash = "gunfire";
		flashSize = 0.1;
		class gunParticles
		{
			class effect1
			{
				positionName = "eject1";
				directionName = "eject1dir";
				effectName = "RHS_23mm_Catridge";
			};
			class effect2
			{
				positionName = "eject2";
				directionName = "eject2dir";
				effectName = "RHS_23mm_AmmoBeltLink";
			};
			class effect3
			{
				positionName = "eject3";
				directionName = "eject3dir";
				effectName = "RHS_23mm_Catridge";
			};
			class effect4
			{
				positionName = "eject4";
				directionName = "eject4dir";
				effectName = "RHS_23mm_AmmoBeltLink";
			};
		};
		magazines[] = {"OEC_Magazine_AZP23_AA_1250Rnd","OEC_Magazine_AZP23_AA_100Rnd"};
		magazineReloadTime = 9;
		modes[] = {"manual","close","short","medium"};
		class manual: CannonCore
		{
			displayName = "2A14 23x152mm";
			autoFire = 1;
			reloadTime = 0.03;
			dispersion = 0.005;
			multiplier = 1;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_KPVT_Closure_SoundSet","RHS_KPVT_Shot_SoundSet","RHS_KPVT_Int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
			};
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 20;
			burstRangeMax = 30;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 15;
			burstRangeMax = 25;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 3;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 10;
			burstRangeMax = 15;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 3;
			minRange = 800;
			minRangeProbab = 0.3;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1200;
			maxRangeProbab = 0.3;
		};
	};

	class OEC_Weapon_ZU23_Shilka: OEC_Weapon_ZU23
	{
		type = 1;
		ballisticsComputer = 4;
		canLock = 0;
		weaponLockSystem = "1 + 2 + 8";
		displayName = "2A14";
		reloadMagazineSound[] = {"rhsafrf\addons\rhs_c_heavyweapons\sounds\rhs_2a14_reload",10.0,1,20};
		scope = 1;
		nameSound = "cannon";
		cartridgePos = "eject1";
		cartridgeVel = "eject1dir";
		cursor = "emptyCursor";
		cursorAim = "mg";
		cursorAimOn = "";
		cursorSize = 1;
		flash = "gunfire";
		flashSize = 0.1;
		class gunParticles
		{
			class effect1
			{
				positionName = "eject1";
				directionName = "eject1dir";
				effectName = "RHS_23mm_Catridge";
			};
			class effect2
			{
				positionName = "eject2";
				directionName = "eject2dir";
				effectName = "RHS_23mm_AmmoBeltLink";
			};
			class effect3
			{
				positionName = "eject3";
				directionName = "eject3dir";
				effectName = "RHS_23mm_Catridge";
			};
			class effect4
			{
				positionName = "eject4";
				directionName = "eject4dir";
				effectName = "RHS_23mm_AmmoBeltLink";
			};
		};
		magazines[] = {"OEC_Magazine_AZP23_AA_1250Rnd"};
		magazineReloadTime = 9;
		modes[] = {"manual","close","short","medium"};
		class manual: OEC_Weapon_ZU23
		{
			displayName = "2A14 23x152mm";
			autoFire = 1;
			reloadTime = 0.03;
			dispersion = 0.005;
			multiplier = 1;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_KPVT_Closure_SoundSet","RHS_KPVT_Shot_SoundSet","RHS_KPVT_Int_Shot_SoundSet","RHS_autocannon_Tail_SoundSet"};
			};
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 40;
			burstRangeMax = 60;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 40;
			burstRangeMax = 60;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 3;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1200;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 40;
			burstRangeMax = 60;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 2500;
			aiRateOfFireDispersion = 3;
			minRange = 1200;
			minRangeProbab = 0.3;
			midRange = 1800;
			midRangeProbab = 0.58;
			maxRange = 2500;
			maxRangeProbab = 0.3;
		};
	};


    //-----------------------------------------------------------//
    //ACCESSORIES
    //-----------------------------------------------------------//

    class OEC_Acc_Scope_PKAS: rhs_acc_pkas
    {
        author = "OEC Extension";
        displayName = "[OEC] PK-AS Short Scope";
    };

    class OEC_Acc_Collimator_EKP802: rhs_acc_ekp8_02
    {
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\accessories\rhs_acc_ekp8_02_ca.paa";
        scope=2;
        author = "OEC Extension";
        displayName = "[OEC] EKP-8-02 Collimator Sights";
        model = "\rhsafrf\addons\rhs_accessory\scopes\ekp-8-02\rhs_ekp_8_02";
        inertia = 0;
    };

    class OEC_Acc_Scope_PSO1: rhs_acc_pso1m21
    {
        author = "OEC Extension";
        displayName = "[OEC] PSO-1 Scope";
    };
    
    
    class OEC_Acc_Pointer_Zenit: rhs_acc_2dpZenit
    {
        author = "OEC Extension";
        displayName = "[OEC] Zenit Flashlight";
    };

    class OEC_Acc_Suppressor_DTK4: rhs_acc_dtk4short
    {
      author = "OEC Extension";
      displayName = "[OEC] DTK4 Suppressor";
    };

    class OEC_Acc_Muzzle_DTK: rhs_acc_dtk
    {
      author = "OEC Extension";
      displayName = "[OEC] DTK (Standard)";
    };

    class OEC_Acc_Muzzle_PGS64: rhs_acc_pgs64_74u
    {
      author = "OEC Extension";
      displayName = "[OEC] PGS64";
    };

    class OEC_Acc_Pointer_blue: ItemCore
	{
		author = "OEC Extension";
        displayName = "[OEC] Combine Sniper Laser";
		scopeArsenal = 2;
		scope = 2;
		picture = "\A3\weapons_F\Data\UI\gear_accv_pointer_CA.paa";
		model = "\A3\weapons_f\acc\accv_pointer_F";
		descriptionShort = "Combine blue laser";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 6;
			class Pointer
			{
                isIR = 0;
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				DotSize = 0.2;
                irDotSize = 0.2;
                dotColor[] = {438,748,973};
				beamThickness = 0.12;
				beamMaxLength = 1200;
				beamColor[] = {471,867,891};
			};
			class FlashLight{};
		};
		inertia = 0.1;
	};
};

class CfgVehicles
{
	class MineGeneric;
	class MineBase: MineGeneric {};

	class ACE_Explosives_Place_APERSBoundingMine;

	class OEC_HopperMine: MineBase
	{
		author = "OEC Extension";
		mapSize = 0.08;
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\APERSBoundingMine.jpg";
		scopeCurator = 2;
		scope = 2;
		ammo = "OEC_Ammo_HopperMine_Range";
		displayName = "[OEC] Hopper Mine";
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\OECExtension\Weapons\data\hoppermine\combine_mine_folded.p3d";
		descriptionShort = "Combine Hopper Mine";
	};

	class OEC_Place_HopperMine: ACE_Explosives_Place_APERSBoundingMine
	{
		model = "\OECExtension\Weapons\data\hoppermine\combine_mine_folded.p3d";
	};
};

class XtdGearModels
{
    class CfgWeapons
    {
		class OEC_ACEX_Weap_SIPL
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "SIRR-1 Variants";
                values[] = 
                {
                    "olive",
                    "green",
                    "sand"
                };
                class olive { label = "Olive"; };
                class green { label = "Green"; };
                class sand { label = "Sand"; };
            };
        };
	};
};