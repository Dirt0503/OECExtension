class CfgPatches
{
    class OEC_Extension_Resistance_Vehicles_Statics
    {
        addonRootClass = "OEC_Extension_Resistance";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance",
            "rhs_c_heavyweapons",
            "cup_weapons_grenadelaunchers"
        };
        units[] = 
		{
			"OEC_KORD_tripod_base",
			"OEC_KORD_tripod_CIS",
			"OEC_KORD_high_base",
			"OEC_ZU23_base",
			"OEC_ZU23_CIS"
		};
        weapons[] = 
		{
			"OEC_Weapons_ZU23",
			"OEC_Weapons_DSHKM"
		};
    };
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		OEC_Zu23_Cargo = "OEC_Zu23_Cargo";
		OEC_Zu23_Gunner = "OEC_Zu23_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class OEC_KIA_SPG_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\A3\cargoposes_F\Anim\gunner_static_low01_KIA.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class OEC_Zu23_Cargo: Crew
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\Hilux_Cargo01.rtm";
			connectTo[] = {"OEC_KIA_ZU23_Gunner",1};
			interpolateTo[] = {"OEC_KIA_ZU23_Gunner",1};
		};
		class RHS_Zu23_Gunner: Crew
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\rhs_zu23_gunner.rtm";
			connectTo[] = {"OEC_KIA_ZU23_Gunner",1};
			interpolateTo[] = {"OEC_KIA_ZU23_Gunner",1};
		};
		class OEC_KIA_ZU23_Gunner: OEC_KIA_SPG_Gunner
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\KIA_Hilux_Cargo01.rtm";
		};
	};
};
/*
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_StaticWeapon_GetOut_Low = "amovppnemstpsraswrfldnon";
		RHS_StaticWeapon_GetOut_Medium = "amovpknlmstpsraswrfldnon";
		RHS_LowKORD_Gunner = "RHS_LowKORD_Gunner";
		RHS_KORD_Gunner = "RHS_KORD_Gunner";
		RHS_DShKM_Gunner = "RHS_DShKM_Gunner";
		RHS_LowTripod_Gunner = "RHS_LowTripod_Gunner";
		RHS_Zu23_Cargo = "RHS_Zu23_Cargo";
		RHS_Zu23_Gunner = "RHS_Zu23_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_LowKORD_Gunner: Crew
		{
			file = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\anim\sittingGunner.rtm";
			connectTo[] = {"Static_Dead",1};
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKCurve[] = {1};
			righHandIKBeg = 1;
			righHandIKEnd = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
		class RHS_DShKM_Gunner: Crew
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\DShKM_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKCurve[] = {1};
			righHandIKBeg = 1;
			righHandIKEnd = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
		};
		class RHS_LowTripod_Gunner: RHS_DShKM_Gunner
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\LowTripod_Gunner.rtm";
		};
		class RHS_KORD_Gunner: RHS_DShKM_Gunner
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\standingGunner.rtm";
		};
		class RHS_Zu23_Cargo: Crew
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\Hilux_Cargo01.rtm";
			connectTo[] = {"RHS_KIA_ZU23_Gunner",1};
			interpolateTo[] = {"RHS_KIA_ZU23_Gunner",1};
		};
		class RHS_Zu23_Gunner: Crew
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\rhs_zu23_gunner.rtm";
			connectTo[] = {"RHS_KIA_ZU23_Gunner",1};
			interpolateTo[] = {"RHS_KIA_ZU23_Gunner",1};
		};
		class RHS_KIA_ZU23_Gunner: RHS_KIA_SPG_Gunner
		{
			file = "rhsafrf\addons\rhs_heavyweapons\data\anim\KIA_Hilux_Cargo01.rtm";
		};
	};
}; */

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
		tracerEndTime = 3;
		cost = 3;
	};

	// ZU23 23x152mm ammo
	class B_35mm_AA;
	class OEC_ammo_23mm_AA: B_35mm_AA
	{
		hit = 9;
		indirectHit = 4.5;
		indirectHitRange = 1.8;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		explosive = 0.6;
		airLock = 1;
		cost = 15;
		timeToLive = 14;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 5.5;
		airFriction = -0.000471;
		muzzleEffect = "";
		caliber = 1.11;
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
		initSpeed = 840;
		tracersEvery = 1;
		nameSound = "mgun";
		weight = "0.13*50";
		cartridge = "FxCartridge_127";
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
		initSpeed = 980;
		maxLeadSpeed = 650;
		nameSound = "cannon";
		tracersEvery = 1;
	};

	class OEC_Magazine_AZP23_AA_1250Rnd: OEC_Magazine_AZP23_AA_100Rnd
	{
		displayName = "[OEC] 1250Rnd 23x152mm";
		displayNameShort = "23x152mm";
		ammo = "OEC_ammo_23mm_AA";
		scope = 2;
		count = 1250;
	};
};

class CfgWeapons
{
	class Default;
	class SmokeLauncher;
	class MGun;

    class LMG_RCWS: MGun{};

    // KORD 12.7x108mm gun
	class OEC_Weapons_DSHKM: LMG_RCWS
	{
		type = 1;
		initSpeed = 0;
		class GunParticles
		{
			class effect1a
			{
				effectname = "MachineGunCloud";
				positionname = "Usti hlavne";
				directionname = "Konec hlavne";
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
		reloadMagazineSound[] = {"a3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",1,1,10};
		scope = 1;
		autoFire = 1;
		displayName = "[OEC] KORD HMG";
		ballisticscomputer = 2;
		magazineReloadTime = 12;
		magazines[] = {"OEC_Magazine_127x100_100Rnd"};
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

	// zu23 autocannon
	class CannonCore;
	class OEC_Weapons_ZU23: CannonCore
	{
		type = 1;
		ballisticsComputer = 2;
		canLock = 0;
		weaponLockSystem = 1;
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
};

class CfgVehicles
{
	class House;
	class ThingX;

    class LandVehicle;
    class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
		class ViewPilot;
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = 0;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class StaticMGWeapon: StaticWeapon{};
	class StaticATWeapon: StaticWeapon{};
	class StaticAAWeapon: StaticWeapon{};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class ViewOptics;
	};


    // KORD 12.7mm Emplacements

    class OEC_KORD_tripod_base: StaticMGWeapon
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_Base.paa";
		model = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_KORD_MSV_ca.paa";
		mapSize = 2.5;
		displayName = "KORD HMG (Low Tripod)";
		sensorPosition = "gunnerView";
		class Hitpoints
		{
			class HitHull
			{
				armor = 1;
				passThrough = 1;
				name = "telo";
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = -0.0;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = 1;
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500,1700,2000};
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				animationSourceStickX = "MainTurret_Inertia";
				animationSourceStickY = "MainGun_Inertia";
				gunnerLeftHandAnimName = "otochlaven_shake";
				gunnerRightHandAnimName = "otochlaven_shake";
                gunnerLeftLegAnimName = "leg_left";
				gunnerRightLegAnimName = "leg_right";
				selectionFireAnim = "zasleh";
				turretInfoType = "RHS_RscWeaponZeroing";
				minElev = -20;
				maxelev = 15;
				maxturn = 60;
				minturn = -60;
				weapons[] = {"OEC_Weapons_DSHKM"};
				magazines[] = {"OEC_Magazine_127x100_100Rnd", "OEC_Magazine_127x100_100Rnd", "OEC_Magazine_127x100_100Rnd"};
				gunnerAction = "RHS_LowKORD_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
				disableSoundAttenuation = 1;
                class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "rhs_weap_nsvt_effects";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		armorStructural = 10.0;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};

    class OEC_KORD_tripod_CIS: OEC_KORD_tripod_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_MSV.paa";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Turrets";
		crew = "OEC_Units_CIS_rifleman";
		typicalCargo[] = {"OEC_Units_CIS_rifleman"};
	};

    class OEC_KORD_high_base: OEC_KORD_tripod_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_base.paa";
		displayName = "KORD HMG (High Stand)";
		model = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\KORD_6u16sp";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord6u16sp_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_KORD_high_MSV_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -7;
				maxelev = 45;
				gunnerAction = "rhs_KORD_Gunner";
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				turretInfoType = "RHS_RscWeaponZeroing";
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
			};
		};
	};

    class OEC_KORD_high_CIS: OEC_KORD_high_base
	{
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_MSV.paa";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Turrets";
		crew = "OEC_Units_CIS_rifleman";
		typicalCargo[] = {"OEC_Units_CIS_rifleman"};
	};


    // ZU23 Emplacement
    class OEC_ZU23_base: StaticCannon
	{
		mapSize = 3;
		displayname = "ZU-23-2 Emplacement";
		model = "\rhsafrf\addons\rhs_heavyweapons\ZU23\rhs_zu23";
		icon = "\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_zu23_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\RHS_ZU23_MSV_ca.paa";
		transportSoldier = 11;
		cargoProxyIndexes[] = {1};
		getInProxyOrder[] = {1,2};
		cargoAction[] = {"vehicle_coshooter_1"};
		cargoIsCoDriver[] = {1,1};
		initCargoAngleY = 180;
		memoryPointsGetInCargo = "pos_cargo_dir";
		memoryPointsGetInCargoDir = "pos_cargo";
		memoryPointsGetInDriver = "pos_driver_dir";
		memoryPointsGetInDriverDir = "pos_driver";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class Hitpoints
		{
			class HitHull
			{
				armor = 1;
				passThrough = 1;
				name = "telo";
			};
		};
		armorStructural = 4;
		explosionShielding = 0.5;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4","SlingLoadCargo5"};
		class ViewPilot: ViewPilot
		{
			initAngleX = -0.0;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minElev = -10;
				maxElev = 85;
				initElev = 0;
				maxHorizontalRotSpeed = 0.55;
				maxVerticalRotSpeed = 0.35;
				weapons[] = {"OEC_weap_zu23"};
				canUseScanner = 0;
				magazines[] = {"OEC_Magazine_AZP23_AA_100Rnd","OEC_Magazine_AZP23_AA_100Rnd","OEC_Magazine_AZP23_AA_100Rnd"};
				gunnerAction = "RHS_Zu23_Gunner";
				gunnerInAction = "RHS_Zu23_Gunner";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerLeftHandAnimName = "handle_elev_hand";
				gunnerRightHandAnimName = "handle_trav_hand";
				gunnerLeftLegAnimName = "otocVez";
				gunnerRightLegAnimName = "otocVez";
				animationSourceStickX = "MainTurret_Inertia";
				animationSourceStickY = "MainGun_Inertia";
				selectionFireAnim = "zasleh";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope";
				soundServo[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret",1.4,1.0,30};
				soundServoVertical[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev",2,1.0,30};
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerForceOptics = 0;
				memoryPointGun[] = {"muzzle_1","muzzle_2"};
				lodTurnedIn = 0;
				lodTurnedOut = 0;
				turretInfoType = "RHS_RscWeaponZU23_T3_Optic";
				class ViewGunner
				{
					initAngleX = 0;
					initAngleY = -9;
					minAngleX = -30;
					maxAngleX = 30;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				class OpticsIn
				{
					class Collimator: ViewOptics
					{
						opticsDisplayName = "COLLIMATOR";
						initFov = 0.636364;
						minFov = 0.636364;
						maxFov = 0.636364;
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
					class CollimatorZoom: Collimator
					{
						initFov = 0.35;
						minFov = 0.35;
						maxFov = 0.35;
					};
					class T3_Optic
					{
						opticsDisplayName = "T3";
						camPos = "commanderview";
						camDir = "view_t3_dir";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope.p3d";
					};
				};
				disableSoundAttenuation = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = -100;
						material = -1;
						name = "Hit_Turret";
						armorComponent = "Hit_Turret";
						visual = "vez";
						passThrough = 0.015;
						minimalHit = -0.2;
						explosionShielding = 0.1;
						radius = 0.1;
					};
					class HitGun
					{
						armor = -100;
						material = -1;
						name = "Hit_Gun";
						armorComponent = "Hit_Gun";
						visual = "-";
						passThrough = 0.015;
						minimalHit = -0.2;
						explosionShielding = 0.1;
						radius = 0.1;
					};
					class Hit_Optic_Collimator
					{
						armor = -40;
						explosionShielding = 0;
						name = "";
						visual = "vis_optic_TPN4";
						armorComponent = "Hit_Optic_ESSA";
						passThrough = 0;
					};
					class Hit_Optic_T3
					{
						armor = -40;
						explosionShielding = 0;
						name = "";
						visual = "vis_optic_TPN4";
						armorComponent = "Hit_Optic_ESSA";
						passThrough = 0;
					};
				};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = "rhs_weap_2A14";
			};
			class fire_anim: muzzle_source
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: muzzle_source
			{
				source = "ammorandom";
			};
			class ReloadMagazine: muzzle_source
			{
				source = "reloadmagazine";
			};
			class maingunT_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class mainTurretT_source: maingunT_source{};
			class Elevation
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 5;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_destruct.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "O_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};

	class OEC_ZU23_CIS: OEC_ZU23_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_ZU23_MSV.paa";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_AA";
		crew = "OEC_Units_CIS_rifleman";
		typicalCargo[] = {"OEC_Units_CIS_rifleman", "OEC_Units_CIS_JrSergeant"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
		class EventHandlers
		{
			init = "_this call oec_fnc_cisZu23Assign;";
		};
	};
};