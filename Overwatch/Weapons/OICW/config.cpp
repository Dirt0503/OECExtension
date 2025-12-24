class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_OICW
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
    units[] = {};
    weapons[] = {"OEC_Weapon_OICW"};
  };
};

class CfgMagazines
{
    class Default;
	class CA_Magazine;
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
        picture = "\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
		model = "\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		modelSpecialIsProxy = 1;
		count = 30;
		mass = 11.5;
		tracersEvery = 1;
    };

    // OICW UGL 6Rnd mags
	// CMB 20mm HE
	class 1Rnd_HE_Grenade_shell;
	class OEC_Magazine_OICW_HE_6rnd: 1Rnd_HE_Grenade_shell
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 HE 6Rnd Mag";
		displaynameshort = "HE Grenade";
		descriptionShort = "Standard 20mm Combine High-Explosive Grenade";
		picture = "\cup\weapons\cup_weapons_xm29\data\ui\m_xm29_he_ca.paa";
		modelSpecial = "\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		modelSpecialIsProxy = 1; // check this if error
		ammo = "OEC_Ammo_CMB20mm";
		count = 6;
		mass = 24.5;
		initspeed = 80;
		scope = 2;
		scopearsenal = 2;
	};

	// Cmb 20mm Instant Smoke
	class OEC_Magazine_OICW_Smoke_6rnd: OEC_Magazine_OICW_HE_6rnd
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 Instant Smoke 6Rnd Mag";
		displaynameshort = "Impact Smoke";
		descriptionShort = "Standard 20mm Combine Instant Smoke Grenade";
		ammo = "OEC_Ammo_CMB20mm_smoke";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		picture = "\cup\weapons\cup_weapons_xm29\data\ui\m_xm29_he_ca.paa";
		modelSpecial = "\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		initspeed = 80;
		mass = 12.75;
	};

	// Cmb 20mm Stun Grenade
	class OEC_Magazine_OICW_Stun_3rnd: OEC_Magazine_OICW_HE_6rnd
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 Stun Grenade 3Rnd Mag";
		descriptionShort = "Standard 20mm Combine Stun Grenade";
		displaynameshort = "Stun Grenade";
		picture = "\cup\weapons\cup_weapons_xm29\data\ui\m_xm29_he_ca.paa";
		modelSpecial = "\cup\weapons\cup_weapons_xm29\CUP_xm29_he_mag.p3d";
		ammo = "OEC_Ammo_CMB20mm_stun";
		initspeed = 80;
		count = 3;
		mass = 24.5;
	};

	// Cmb 20mm Flares
	class OEC_Magazine_OICW_red_6rnd: OEC_Magazine_OICW_HE_6rnd
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 Flare (Red) 6Rnd Mag";
		displaynameshort = "Red Flare";
		descriptionShort = "Standard 20mm Combine Red Flare";
		ammo = "OEC_Ammo_CMB20mm_red";
		initspeed = 80;
		count = 6;
		mass = 5;
	};
	class OEC_Magazine_OICW_green_6rnd: OEC_Magazine_OICW_HE_6rnd
	{
		author = "OEC Extension";
		displayName = "[OEC] XM29 Flare (Green) 6Rnd Mag";
		displaynameshort = "Green Flare";
		descriptionShort = "Standard 20mm Combine Green Flare";
		ammo = "OEC_Ammo_CMB20mm_green";
		initspeed = 80;
		count = 6;
		mass = 5;
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class ItemCore;
	class InventoryUnderItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_MXC_F
	{
		class WeaponSlotsInfo;
	};

    class OEC_Weapon_OICW_Rifle: arifle_MXC_F
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
		baseWeapon = "OEC_Weapon_OICW_Rifle";
		modelOptics = "\CUP\Weapons\CUP_Weapons_XM29\CUP_xm29_optics.p3d";
		model = "\WBK_OICW\OICW\OICW.p3d";
		hiddenSelections[] = {};
		selectionfireanim = "muzzleFlash";
        picture = "\CUP\Weapons\CUP_Weapons_xm29\data\ui\CUP_arifle_m29_caseless_woodland_ca.paa";
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
			libTextDesc = "Overwatch Standard Issue Ballistic Rifle. Equipped with a 6-round over-barrel grenade launcher.";
		};
        muzzles[] = {"this","EGLM1"};
		class EGLM1: UGL_F
		{
			reloadAction = "WBK_OICW_ReloadGL";
			displayName = "OICW 20mm 6GL";
			descriptionShort = "20mm 6GL";
            useModelOptics = 10;
			useExternalOptic = 0;
			magazines[] = {"OEC_Magazine_OICW_HE_6rnd", "OEC_Magazine_OICW_Smoke_6rnd", "OEC_Magazine_OICW_Stun_3rnd", "OEC_Magazine_OICW_red_6rnd", "OEC_Magazine_OICW_green_6rnd"};
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
};