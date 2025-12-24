class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_Sniper
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = 
    {
        "OEC_Extension_Overwatch_Weapons",
        "rhsusf_c_weapons"
    };
    units[] = {};
    weapons[] = {"OEC_Weapon_cmbSrifle"};
  };
};

class CfgMagazines
{
	class CA_Magazine;
	class OEC_Magazine_cmbSrifle: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_cmbSrifle_normal";
		author = "OEC Extension";
		displayName = "[OEC] R-2X Cell - Standard";
		count = 1;
		initSpeed = 1000;
		picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m781_ca.paa";
		tracersEvery = 1;
		mass = 2.5;
	};
	class OEC_Magazine_cmbSrifle_AP: OEC_Magazine_cmbSrifle
	{
		scope = 2;
		ammo = "OEC_Ammo_cmbSrifle_AP";
		author = "OEC Extension";
		displayName = "[OEC] R-2X Cell - Piercer";
		count = 1;
		initSpeed = 1000;
		picture = "\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m443_ca.paa";
		tracersEvery = 1;
		mass = 5;
	};
}; 

class Mode_SemiAuto;
class CfgWeapons
{
    class srifle_GM6_F
	{
		class WeaponSlotsInfo;
	};
	class OEC_Weapon_cmbSrifle: srifle_GM6_F
	{
		selectionfireanim = "muzzleFlash";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot{};
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
		baseWeapon = "OEC_Weapon_cmbSrifle";
		drySound[] = {"WBK_Combines\weapons\shotgun_empty.wav",1,1,10};
		reloadAction = "WBK_HLA_OrdinalArReload";
		reloadMagazineSound[] = {"WBK_Combines\weapons\sniper_reload.wav",2,1,30};
		model = "WBK_Combines\weapons\assasin_sniper.p3d";
		handAnim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\assasin_sniper_idle.rtm"};
		magazines[] = {"OEC_Magazine_cmbSrifle", "OEC_Magazine_cmbSrifle_AP", "OEC_Magazine_cmbSrifle_HE"};
        magazineWell[] = {};

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
				soundSetShot[] = {"WBK_SniperRifleCombine_Shot_Base_Soundset"};
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
};