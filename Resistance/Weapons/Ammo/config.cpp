class CfgPatches
{
    class OEC_Extension_Resistance_Ammo
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons";
        requiredAddons[] = {"OEC_Extension_Resistance_Weapons"};
        units[] = {};
        weapons[] = {};
    };
};

// 5.45x39 Ammo
class CfgAmmo
{
    class B_65x39_Caseless;
    class OEC_Ammo_545x39: B_65x39_Caseless
    {
		hit = 10;
		caliber = 1;
        typicalSpeed = 900;
    };

	// SP-5 9x39
	class OEC_Ammo_9x39_SP5 : OEC_Ammo_545x39
	{
		cartridge = "FxCartridge_9mm";
		hit = 11.5;
		caliber = 3;
		typicalSpeed = 275;
		airFriction = -0.00052;
		visibleFire = 1.25;
		audibleFire = 2.5;
		suppressionRadiusBulletClose = 3;
		suppressionRadiusHit = 5;
		deflecting = 10;
	};

	// GP-25 UGL
	// VOG25 HEAT 
	class G_40mm_HE;
	class OEC_Ammo_VOG25: G_40mm_HE
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		airfriction = -0.0012;
		typicalspeed = 76.5;
		warheadName = "HEAT";
		aiAmmoUsageFlags = "64 + 128";
		effectFly = "OEC_ParticleEffect_Gren";
	};

	// GDM40 Instant Smoke 
	class OEC_Ammo_GDM40: OEC_Ammo_VOG25
	{
		model = "\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		hit = 1;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalspeed = 70;

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
	class F_40mm_Red;
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

	// Smoke and Stun randomization for Grenadier
	class SubmunitionBullet;
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

	// 7.62x51 Machinegun Round
	class BulletBase;
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

	// Launcher Ammo
	// Disposable
	class RocketBase;
	class R_PG32V_F: RocketBase{};
	class OEC_Ammo_Rocket_Disposable: R_PG32V_F
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
	class rhs_ammo_base_penetrator;
	class OEC_Ammo_Penetrator_Disposable: rhs_ammo_base_penetrator
	{
		caliber = 20;
	};

	// RPG7 Rockets
	class OEC_Ammo_Rocket_PG7V: OEC_Ammo_Rocket_Disposable
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
};