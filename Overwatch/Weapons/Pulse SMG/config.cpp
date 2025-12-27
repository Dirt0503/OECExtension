class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_PulseSMG
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = {"OEC_Extension_Overwatch_Weapons"};
    units[] = {};
    weapons[] = {"OEC_Weapon_PulseSMG"};
  };
};

class CfgMagazines
{
	class OEC_Magazine_AR2;
    class OEC_Magazine_PulseSMG: OEC_Magazine_AR2
	{
		scope = 2;
		ammo = "OEC_Ammo_PulseSMG";
		author = "OEC Extension";
		picture = "\hl_cmb_weapons\UI\m_ar2_ca.paa";
		displayName = "[OEC] 60rnd AR-1s Cell";
		count = 60;
		mass = 30;
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
  class OEC_Weapon_AR2;
  class OEC_Weapon_PulseSMG: OEC_Weapon_AR2
	{
		author = "OEC Extension";
        displayName = "[OEC] AR-1s Pulse SMG";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Overwatch Standard Issue Pulse Submachine Gun";
		model = "\WBK_Combines\weapons\grunt_ar.p3d";
		handanim[] = {"OFP2_ManSkeleton","WBK_Combines\weapons\arsmg_idle.rtm"};
        magazines[] = {"OEC_Magazine_PulseSMG"};
		magazineWell[] = {};
		reloadMagazineSound[] = {"WBK_Combines\weapons\ordinal_ar_reload.ogg",1.05,1,16};
		reloadAction = "WBK_HLA_OrdinalArReload";
		picture = "\OECExtension\Overwatch\Weapons\data\PulseSMG.paa";
		muzzles[] = {"this"};
		mass = 85;
        class Library
		{
			libTextDesc = "Overwatch Standard Issue Pulse SMG. Pulse ammo has no damage dropoff and is not affected by gravity, but will dissipate beyond 200m.";
		};
        modes[] = {"FullAuto"};
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
				soundSetShot[] = {"WBK_AR1_Shot_Base_Soundset"};
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
			reloadTime = 0.075;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.0051;
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