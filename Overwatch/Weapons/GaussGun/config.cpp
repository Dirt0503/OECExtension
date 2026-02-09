class CfgPatches
{
    class OEC_Extension_Overwatch_Weapons_Gauss
    {
        addonRootClass = "OEC_Extension_Overwatch_Weapons";
        requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
        units[] = {};
        weapons[] = 
        {
            "OEC_Weapon_Gauss_Base",
            "OEC_Weapon_Gauss"
        };
    };
};

class CfgMagazines
{
	class CA_Magazine;
	class OEC_Magazine_Gauss: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_Gauss";
		author = "OEC Extension";
		displayName = "[OEC] 6rnd EM-1 Cell";
		descriptionShort = "Portable Explosive Pulse Ammo Cell.";
		count = 6;
		initSpeed = 770;
		picture = "\OECExtension\Overwatch\Weapons\data\GaussAmmo.paa";
		tracersEvery = 1;
		mass = 16;
	};
};

class CfgSoundShaders
{
    class OEC_SoundShader_GaussGun_closeShot
    {
        samples[] = 
        {
            {"OECExtension\Overwatch\Weapons\data\gaussgun\gaussShot.wss",1}
        };
        volume = 1;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class OEC_SoundShader_GaussGun_distShot
    {
        samples[] = 
        {
            {"OECExtension\Overwatch\Weapons\data\gaussgun\gaussShot.wss",1}
        };
        volume = 1;
        range = 2200;
        rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
    };
};

class CfgSoundSets
{
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

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
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
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
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
		reloadMagazineSound[] = {"OECExtension\Overwatch\Weapons\data\gaussgun\gaussReload.wss",1.0,1,10};
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
		model = "OECExtension\Overwatch\Weapons\data\gaussgun\OEC_GaussRifle.p3d";
		dexterity = 1.68;
		displayName = "[OEC] EM-1 Pulse Assisted Gauss Gun";
		picture = "\OECExtension\Overwatch\Weapons\data\GaussGun.paa";
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
};