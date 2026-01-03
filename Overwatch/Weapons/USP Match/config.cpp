class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_USP
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
    units[] = {};
    weapons[] = {"OEC_Weapon_USP"};
  };
};

class CfgMagazines
{
	class OEC_Magazine_OICW_Base;
    class OEC_Magazine_USP: OEC_Magazine_OICW_Base
    {
		scope = 2;
		ammo = "OEC_Ammo_46x30";
		author = "OEC Extension";
		displayName = "[OEC] 18rnd USP Match Magazine";
        picture = "\OECExtension\Overwatch\Weapons\data\pistolMag.paa";
		modelSpecialIsProxy = 1;
		initspeed = 405;
		count = 18;
		mass = 2;
		tracersEvery = 1;
		lastRoundsTracer = 18;
    };
};

class CowsSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class OEC_Weapon_USP: hgun_P07_F
	{
		author = "OEC Extension";
        displayName = "[OEC] USP Match";
		scopeArsenal = 2;
		scope = 2;
		baseWeapon = "OEC_Weapon_USP";
		model = "\hl_cmb_weapons\usp\usp.p3d";
		picture = "\OECExtension\Overwatch\Weapons\data\USPmatch.paa";
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
};