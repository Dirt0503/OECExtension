class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_Heavy
    {
        addonRootClass = "OEC_Extension_Resistance_Weapons";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Weapons",
            "rhs_c_heavyweapons",
            "cup_weapons_grenadelaunchers"
        };
        units[] = {};
        weapons[] = 
		{
			"OEC_Weapons_ZU23",
			"OEC_Weapons_DSHKM",
			"OEC_Weapons_DSHKM_t80",
            "OEC_Weapons_vicPKM",
            "OEC_Weapons_2a72",
			"OEC_Weapons_2A46_Cannon"
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
	class SmokeShell;
	class MissileCore: Default{};
	class MissileBase: MissileCore
	{
		class EventHandlers;
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
	class B_35mm_AA;
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
    class B_30mm_HE;
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
	class Sh_125mm_HE;
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
};

class CfgMagazines
{
	class SmokeLauncherMag;
	class CA_Magazine;
	class VehicleMagazine;

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

    // 30mm 2a72 autocannon mags
    class 450Rnd_127x108_Ball;
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
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class SmokeLauncher;
	class MGun;

    class LMG_RCWS: MGun{};

    // PKM 7.62x51
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
    class OEC_Weapons_vicPKM: OEC_PKT
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

    // KORD 12.7x108mm gun
	class OEC_Weapons_DSHKM: LMG_RCWS
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
	class OEC_Weapons_DSHKM_t80: OEC_Weapons_DSHKM
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

	// zu23 autocannon
	class CannonCore;
	class OEC_Weapons_ZU23: CannonCore
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

	// 2A72 30mm autocannon
    class autocannon_30mm_CTWS;
	class OEC_Weapons_2a72: autocannon_30mm_CTWS
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
			minRangeProbab = 1;
			midRange = 2;
			midRangeProbab = 1;
			maxRange = 3;
			maxRangeProbab = 1;
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
			minRangeProbab = 1;
			midRange = 75;
			midRangeProbab = 1;
			maxRange = 150;
			maxRangeProbab = 1;
		};
		class med: close
		{
			burst = 6;
			burstRangeMax = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 1;
			midRange = 200;
			midRangeProbab = 1;
			maxRange = 300;
			maxRangeProbab = 1;
		};
		class far: close
		{
			burst = 1;
			burstRangeMax = 4;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 250;
			minRangeProbab = 1;
			midRange = 400;
			midRangeProbab = 1;
			maxRange = 550;
			maxRangeProbab = 1;
		};
	};
	// 2A46 T80 125mm Cannon
	class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class OEC_Weapons_2A46_Cannon: cannon_120mm
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
};