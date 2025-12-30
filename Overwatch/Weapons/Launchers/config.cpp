class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_WallhammerShotgun
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapons_SIPL_base",
            "OEC_Weapons_SIPL_olive",
            "OEC_Weapons_SIPL_green",
            "OEC_Weapons_SIPL_sand",
            "OEC_Weapons_SIPL0_Loaded",
            "OEC_Weapons_SIPL0",
            "OEC_Weapons_SIPL0_Used"
        };
    };
};

class CfgMagazines
{
    // disposable mag
	class CA_LauncherMagazine;
	class FakeMagazine;
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
		displayNameShort = "SIRR - DPHE 55";
		scope = 2;
		scopeArsenal = 2;
		descriptionShort = "Effective against: Vehicles, Armor.";
		model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT55_F_ca.paa";
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
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
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
		picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
		initSpeed = 350;
		ammo = "OEC_Ammo_Rocket_SIPL_HEAT75";
		mass = 30;
	};
};

class Mode_SemiAuto;
class CBA_DisposableLaunchers
{
	OEC_Weapons_SIPL0_Loaded[] = {"OEC_Weapons_SIPL0","OEC_Weapons_SIPL0_Used"};
};
class PointerSlot;
class CfgWeapons
{
    // SIPL-0 disposable launcher for OEC
    class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
	class OEC_Weapons_SIPL0_Loaded: Launcher_Base_F
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
	class OEC_Weapons_SIPL0: OEC_Weapons_SIPL0_Loaded
	{
		displayName = "[OEC] SIPL-0 Disaposable";
		descriptionShort = "Standard Issue Portable Launcher - Disposable";
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "OEC_Weapons_SIPL0";
		magazines[] = {"OEC_Magazine_SIPL0_M"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 147.4;
		};
	};
	class OEC_Weapons_SIPL0_Used: OEC_Weapons_SIPL0_Loaded
	{
		displayName = "[OEC] SIPL-0 (Used)";
		descriptionShort = "Standard Issue Portable Launcher - Used";
		author = "OEC Extension";
		baseWeapon = "OEC_Weapons_SIPL0_Used";
		scope = 1;
		model = "\CUP\Weapons\CUP_Weapons_M136\CUP_AT4_used.p3d";
		magazines[] = {"CBA_FakeLauncherMagazine"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 107.4;
		};
	};

    // SIPL-1 Launcher for OEC
	class OEC_Weapons_SIPL_base: Launcher_Base_F
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

	class OEC_Weapons_SIPL_olive: OEC_Weapons_SIPL_base
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

	class OEC_Weapons_SIPL_green: OEC_Weapons_SIPL_base
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

	class OEC_Weapons_SIPL_sand: OEC_Weapons_SIPL_base
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