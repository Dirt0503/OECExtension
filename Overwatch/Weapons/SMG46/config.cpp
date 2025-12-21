class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_SMG46
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
    units[] = {};
    weapons[] = {"OEC_Weapon_SMG46", "OEC_Weapon_SMG46_Sighted"};
  };
};

class CfgMagazines
{
	class OEC_Magazine_OICW_Base;
    class OEC_SMG46_Mag: OEC_Magazine_OICW_Base
    {
		scope = 2;
		ammo = "OEC_Ammo_46x30";
		author = "OEC Extension";
		displayName = "[OEC] 45rnd MP7 Magazine";
        picture = "\CUP\Weapons\CUP_Weapons_Ammunition\data\ui\m_mp7x20_ca.paa";
		modelSpecialIsProxy = 1;
		initspeed = 380;
		count = 45;
		mass = 4.5;
		tracersEvery = 0;
		lastRoundsTracer = 10;
    };

    // SMG UGL 6Rnd mags

    // CMB 20mm HE
	class 1Rnd_HE_Grenade_shell;
	class OEC_Magazine_OICW_HE_6rnd;
    class OEC_Magazine_SMG46_HE_2Rnd: OEC_Magazine_OICW_HE_6rnd
	{
		displayName = "[OEC] MP7 HE 2Rnd Mag";
		initspeed = 80;
		count = 2;
		mass = 8.25;
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
	};
    // Cmb 20mm Instant Smoke
	class OEC_Magazine_OICW_Smoke_6rnd;
	class OEC_Magazine_SMG46_Smoke_2Rnd: OEC_Magazine_OICW_Smoke_6rnd
	{
		displayName = "[OEC] MP7 Instant Smoke 2Rnd Mag";
		initspeed = 80;
		count = 2;
		mass = 4.125;
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
	};
    // Cmb 20mm Stun Grenade
	class OEC_Magazine_OICW_Stun_3rnd;
	class OEC_Magazine_SMG46_Stun_1Rnd: OEC_Magazine_OICW_Stun_3rnd
	{
		displayName = "[OEC] MP7 Stun 1Rnd Mag";
		initspeed = 80;
		count = 1;
		mass = 8.25;
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
	};
    // Cmb 20mm Flares
	class OEC_Magazine_OICW_red_6rnd;
	class OEC_Magazine_SMG46_red_2Rnd: OEC_Magazine_OICW_red_6rnd
	{
		displayName = "[OEC] MP7 Flare (Red) 2Rnd Mag";
		initspeed = 80;
		count = 2;
		mass = 1.65;
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
	};
    class OEC_Magazine_OICW_green_6rnd;
	class OEC_Magazine_SMG46_green_2Rnd: OEC_Magazine_OICW_green_6rnd
	{
		displayName = "[OEC] MP7 Flare (Green) 2Rnd Mag";
		initspeed = 80;
		count = 2;
		mass = 1.65;
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class UGL_F;
	class arifle_MXC_F
	{
		class WeaponSlotsInfo;
    };
    class OEC_Weapon_SMG46: arifle_MXC_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
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
        picture = "\CUP\Weapons\CUP_Weapons_MP7\data\ui\gear_smg_MP7_X_CA.paa";
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
			libTextDesc = "Overwatch Standard Issue Ballistic Submachinegun. Equipped with a 2-round under-barrel grenade launcher.";
		};
		muzzles[] = {"this","EGLM2"};
		class EGLM2: UGL_F
		{
			reloadAction = "GestureReloadMXUGL";
			displayName = "MP7 20mm 2GL";
			descriptionShort = "20mm 2GL";
            useModelOptics = 10;
			useExternalOptic = 0;
			magazines[] = {"OEC_Magazine_SMG46_HE_2Rnd", "OEC_Magazine_SMG46_Smoke_2Rnd", "OEC_Magazine_SMG46_Stun_1Rnd", "OEC_Magazine_SMG46_red_2Rnd", "OEC_Magazine_SMG46_green_2Rnd"};
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
};