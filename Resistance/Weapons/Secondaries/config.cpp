class CfgPatches
{
    class OEC_Extension_Resistance_Weapons_Secondaries
    {  
        addonRootClass = "OEC_Extension_Resistance_Weapons";
        requiredAddons[] = {"OEC_Extension_Resistance_Weapons"};
        units[] = {};
        weapons[] = {"OEC_Weapons_Makarov"};
    };
};

class Mode_SemiAuto;
class MuzzleSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class OEC_Weapons_Makarov: Pistol_Base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] Makarov Pistol";
		scopeArsenal = 2;
		scope = 2;
		baseWeapon = "OEC_Weapons_Makarov";
		model = "\rhsafrf\addons\rhs_weapons2\pistols\pm\rhs_makarov_pm";
		modelOptics = "-";
		picture = "\A3\weapons_F\Pistols\Rook40\data\UI\gear_Rook40_x_ca.paa";
		magazines[] = {"OEC_Magazine_9x18_8Rnd"};
		magazineWell[] = {};
		descriptionShort = "CIS Standard Issue Handgun";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F\Pistols\Rook40\data\Rook40_co"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",0.22387211,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",1.0,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
            sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_pp2000_Shot_SoundSet","RHS_rifle_small_Tail_SoundSet"};
			};
			class BaseSoundModeType{};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.1;
			dispersion = 0.00435;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		inertia = 0.2;
		aimTransitionSpeed = 1.6;
		dexterity = 1.8;
		initSpeed = 450;
		recoil = "recoil_pistol_rook40";
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
            holsterOffset = "holster";
			holsterScale = 0.95;
		};
	};
};