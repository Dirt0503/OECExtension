class CfgPatches
{
  class OEC_Extension_Overwatch_Weapons_Magnum
  {  
    addonRootClass = "OEC_Extension_Overwatch_Weapons";
    requiredAddons[] = {"OEC_Extension_Overwatch_Weapons", "WBK_OICW_Rifle"};
    units[] = {};
    weapons[] = {"OEC_Weapon_Magnum"};
  };
};

class CfgMagazines
{
	class OEC_Magazine_OICW_Base;
    class OEC_Magazine_357: OEC_Magazine_OICW_Base
    {
		scope = 2;
		ammo = "OEC_Ammo_357";
		author = "OEC Extension";
		displayName = "[OEC] 6Rnd .357 Cylinder";
        picture = "\OECExtension\Overwatch\Weapons\data\magnumMag.paa";
		modelSpecialIsProxy = 1;
		initspeed = 915;
		count = 6;
		mass = 8;
		tracersEvery = 1;
		lastRoundsTracer = 6;
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class hgun_Pistol_heavy_02_F
	{
		class WeaponSlotsInfo;
	};
    class OEC_Weapon_Magnum: hgun_Pistol_heavy_02_F
    {
        author = "OEC Extension";
        displayName = "[OEC] .357 Magnum";
		scopeArsenal = 2;
		scope = 2;
		baseWeapon = "OEC_Weapon_Magnum";
		picture = "\OECExtension\Overwatch\Weapons\data\Magnum.paa";
        model = "\WBK_OICW\A_HalfLife_Revolver.p3d";
        reloadAction = "WBK_HL_Revolver_Reload";
        magazines[] = {"OEC_Magazine_357"};
        magazineWell[] = {};
        reloadMagazineSound[] = {"WBK_OICW\revolver_reload.ogg",1,1,30};
        reloadSound[] = {"WBK_OICW\revolver_reload.ogg",1,1,30};
        class Library
		{
			libTextDesc = "Overwatch Standard Issue Sidearm. Handed out to commanders of Civil Protection and Transhuman Arm.";
		};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot{};
            class MuzzleSlot{};
            class UnderBarrelSlot{};
            class PointerSlot{};
        };
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
                soundSetShot[] = {"WBK_HLRevolver_Shot_Base_Soundset"};
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
            reloadTime = 0.75;
            recoil = "recoil_single_dmr";
            recoilProne = "recoil_single_prone_dmr";
            dispersion = 0.0051;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.05;
            aiDispersionCoefX = 0;
            aiDispersionCoefY = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            textureType = "semi";
        };
    };
};