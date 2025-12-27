class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_AR2
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = {"OEC_Extension_Overwatch_Weapons", "CUP_Weapons_VSS"};
    units[] = {};
    weapons[] = {"OEC_Weapon_AR2", "OEC_Weapon_R1"};
  };
};

class CfgMagazines
{
	class CA_Magazine;
	class OEC_Magazine_AR2: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_AR2";
		author = "OEC Extension";
		displayName = "[OEC] 30rnd AR-2 Cell";
		descriptionShort = "Standard Capacity Pulse Cell; 400m dissipation range";
		count = 30;
		initSpeed = 750;
		picture = "\OECExtension\Overwatch\Weapons\data\AR2mag.paa";
		tracersEvery = 1;
		mass = 25;
	};

	class OEC_Magazine_R1: CA_Magazine
	{
		scope = 2;
		ammo = "OEC_Ammo_R1";
		author = "OEC Extension";
		displayName = "[OEC] 20rnd R-1 Cell";
		descriptionShort = "Reduced Capacity Pulse Cell; 400m dissipation range, does not alert enemies";
		count = 20;
		initSpeed = 770;
		picture = "\OECExtension\Overwatch\Weapons\data\R1mag.paa";
		tracersEvery = 1;
		mass = 20;
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class pdw2000_base_F: Rifle_Short_Base_F{};
	class OEC_Weapon_AR2: pdw2000_base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] AR-2 Pulse Rifle";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Pulse Rifle";
		model = "\hl_cmb_weapons\AR2\arifle_ar2.p3d";
		hiddenSelections[] = {};
		selectionfireanim = "muzzleFlash";
		reloadAction = "GestureReload_AR2";
		handanim[] = {"OFP2_ManSkeleton","\hl_cmb_weapons\Anim\ar2anim.rtm"};
		magazines[] = {"OEC_Magazine_AR2"};
		magazineWell[] = {};
        picture = "\hl_cmb_weapons\UI\w_ar2_x_ca.paa";
		inertia = 0.6;
		aimTransitionSpeed = 1;
		dexterity = 1.4;
		initSpeed = 715;
		recoil = "HL_CMB_arifle_AR2_Recoil";
		maxZeroing = 800;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.25118864,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.25118864,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.25118864,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.25118864,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		drySound[] = {"hl_cmb_weapons\sounds\ar2_dry",0.099999994,1,20};
		reloadMagazineSound[] = {"hl_cmb_weapons\sounds\ar2_reload",2.5,1,20};
		class Library
		{
			libTextDesc = "Overwatch Standard Issue Pulse Rifle. Pulse ammo has no damage dropoff and is not affected by gravity, but will dissipate beyond 400m.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 125;
			class CowsSlot{};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot{};
		};
		modes[] = {"Single","FullAuto"};
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
				begin1[] = {"hl_cmb_weapons\sounds\ar2_fire",2.2589254,1,1000};
				begin2[] = {"hl_cmb_weapons\sounds\ar2_fire",2.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
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
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
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
				begin1[] = {"hl_cmb_weapons\sounds\ar2_fire",1.9589254,1,1000};
				begin2[] = {"hl_cmb_weapons\sounds\ar2_fire",1.9589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
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
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
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
	};

	// R-1 Silenced Pulse Rifle
	class OEC_Weapon_R1: OEC_Weapon_AR2
	{
		author = "OEC Extension";
        displayName = "[OEC] R-1 Silenced Pulse Rifle";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Special Issue Pulse Rifle";

		handanim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\ar_idle.rtm"};
		reloadMagazineSound[] = {"WBK_Combines\weapons\ordinal_ar_reload.ogg",1.4,1,25};
		reloadAction = "WBK_HLA_OrdinalArReload";
		baseWeapon = "OEC_Weapon_R1";
		model = "\WBK_Combines\weapons\ordinal_ar.p3d";
		picture = "\OECExtension\Overwatch\Weapons\data\R1rifle.paa";
		magazines[] = {"OEC_Magazine_R1"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Special Issue Pulse RIfle. Lo-Power cells are virtually silent, have no damage dropoff, and are not affected by gravity, but will dissipate beyond 400m.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class MuzzleSlot{};
			class UnderBarrelSlot{};
			class PointerSlot{};
		};
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.818383,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.818383,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.818383,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
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
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_01",2.818383,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_02",2.818383,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_short_03",2.818383,1,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.501187,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.501187,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				soundSetShot[] = {"CUP_MP7_Closure_SoundSet","CUP_MP7_ShotSD_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.099;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
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
	};
};