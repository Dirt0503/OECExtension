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
        picture = "\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		modelSpecialIsProxy = 1;
		initspeed = 390;
		count = 18;
		mass = 2;
		tracersEvery = 0;
		lastRoundsTracer = 0;
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
		picture = "\hl_cmb_weapons\UI\w_usp_x_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[] = {"OEC_Magazine_USP"};
		magazineWell[] = {};
		class Library
		{
			libTextDesc = "Overwatch Standard Issue Handgun. Widely adopted by Civil Protection and Transhuman Arm.";
		};
		descriptionShort = "Semi-automatic pistol";
		selectionfireanim = "muzzleFlash";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
		};
	};
};