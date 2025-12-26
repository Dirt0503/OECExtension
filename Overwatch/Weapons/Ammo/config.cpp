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

	// SPAS-12 Shells
	class BulletBase;
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
		timeToLive = 0.38961039;
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
		timeToLive = 0.666666667;
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
		timeToLive = 0.666666667;
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
		hit = 50;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 5;
		audibleFire = 40;
		visibleFireTime = 3;
		cost = 7;
		caliber = 4;
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
		hit = 50;
		caliber = 75;
		tracerScale = 2.5;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		effectFly = "OEC_Light_AlienPulse_Orange_sRifle";
	};

	// Pulse SMG Ammo
	class OEC_Ammo_PulseSMG: OEC_Ammo_AR2
	{
		hit = 9;
		caliber = 1.5;
		timeToLive = 0.333333334;
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
		airFriction = -0.0075;
		caliber = 1.3;
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

    //Combine UGL Ammo
	// Cmb HE
    class G_40mm_HE;
	class OEC_Ammo_VOG25;
	class OEC_Ammo_CMB20mm: G_40mm_HE
	{
		model = "\A3\weapons_f\ammo\UGL_slug";
		airfriction = -0.0012;
		typicalspeed = 185;
		caliber = 2;
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		fuseDistance = 15;
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

		explosionEffects = "RHS_GDM40Effect";
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
	class SmokeShellYellow;
	class SmokeShellGreen;
	class SmokeShellRed;
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
		fuseDistance = 2;
		explosionTime = -1;
		ExplosionEffects = "RHS_flashbang_10";
		explosive = 1;
		cost = 2;
		aiAmmoUsageFlags = 64;

		effectFly = "OEC_ParticleEffect_Gren";
	};

    // Combine 20mm Flares
    class F_40mm_Green;
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

    class F_40mm_Red;
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

	class F_40mm_Yellow;
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
    class RocketBase;
	class ammo_Penetrator_Base;
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
		fuseDistance = 15;
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
};