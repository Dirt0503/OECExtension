#include "\OECExtension\cfgFunctions.hpp"

class CfgPatches
{
    class OEC_Extension_Gear
    {
        addonRootClass = "OEC_Extension";
        requiredAddons[] = 
        {
            "OEC_Extension",
            "OEC_Extension_Weapons",
            "OEC_Extension_Items",
            "OEC_Extension_Units"
        };
        units[] = 
        {
            //Overwatch Gear
            "OEC_Overwatch_Backpack_Base",
            "OEC_Overwatch_Backpack_Invisible",
            "OEC_Overwatch_Backpack_OxygenTank_Dark",
            "OEC_Overwatch_Backpack_OxygenTank_White",
            "OEC_Overwatch_Backpack_OxygenTank_Airwatch",
            "OEC_Overwatch_Backpack_Dark",
            "OEC_Overwatch_Backpack_White",
            "OEC_Overwatch_Backpack_LR_Black",

            //CISDF Gear
            "OEC_CIS_Backpack_RD54",
            "OEC_CIS_Backpack_SCBA_Bag",
            "OEC_CIS_Backpack_Engineer_RK30",
            "OEC_CIS_Backpack_RPG_Bag",
            "OEC_CIS_Backpack_Medic_Bag",
            "OEC_CIS_Backpack_R148",
            "OEC_CIS_Throwbag"
        };
        weapons[] = 
        {
            //Overwatch Gear
            "OEC_Overwatch_Uniform_Base",
            "OEC_Overwatch_Uniform_Soldier",
            "OEC_Overwatch_Uniform_AT",
            "OEC_Overwatch_Uniform_CE",
            "OEC_Overwatch_Uniform_Medic",
            "OEC_Overwatch_Uniform_TL",
            "OEC_Overwatch_Uniform_TL_AT",
            "OEC_Overwatch_Uniform_TL_CE",
            "OEC_Overwatch_Uniform_Recon",
            "OEC_Overwatch_Uniform_Elite",
            "OEC_Overwatch_Uniform_Elite_AT",
            "OEC_Overwatch_Uniform_Elite_CE",
            "OEC_Overwatch_Uniform_Elite_Medic",
            "OEC_Overwatch_Uniform_Wallhammer",
            "OEC_Overwatch_Uniform_Airwatch",
            "OEC_Overwatch_Uniform_APF",

            "OEC_Overwatch_Vest_Soldier",
            "OEC_Overwatch_Vest_AT",
            "OEC_Overwatch_Vest_CE",
            "OEC_Overwatch_Vest_Medic",
            "OEC_Overwatch_Vest_Recon",
            "OEC_Overwatch_Vest_TL",
            "OEC_Overwatch_Vest_TL_AT",
            "OEC_Overwatch_Vest_TL_CE",
            "OEC_Overwatch_Vest_Elite",
            "OEC_Overwatch_Vest_Elite_AT",
            "OEC_Overwatch_Vest_Elite_CE",
            "OEC_Overwatch_Vest_Recon_TL",
            "OEC_Overwatch_Vest_Elite_Medic",
            "OEC_Overwatch_Vest_Wallhammer_Heavy",
            "OEC_Overwatch_Vest_APF",
            "OEC_Overwatch_Vest_Airwatch",
            
            "OEC_Overwatch_Helmet_Soldier",
            "OEC_Overwatch_Helmet_Airwatch",
            "OEC_Overwatch_Helmet_AT",
            "OEC_Overwatch_Helmet_CE",
            "OEC_Overwatch_Helmet_Medic",
            "OEC_Overwatch_Helmet_Recon",
            "OEC_Overwatch_Helmet_TL",
            "OEC_Overwatch_Helmet_Elite",
            "OEC_Overwatch_Helmet_Elite_Medic",
            "OEC_Overwatch_Helmet_Recon_TL",
            "OEC_Overwatch_Helmet_Wallhammer",
            "OEC_Overwatch_Helmet_APF",

            //CISDF Gear
            "OEC_CIS_Uniform_Flora",
            "OEC_CIS_Uniform_TTSKO",
            "OEC_CIS_Uniform_6sh112",
            "OEC_CIS_Uniform_CBRN_White",
            "OEC_CIS_Uniform_Gorka_Black",
            "OEC_CIS_Uniform_Izlom",
            "OEC_CIS_Uniform_M88_Winter",

            "OEC_CIS_Vest_6b13",
            "OEC_CIS_Vest_6b13_9sh93",
            "OEC_CIS_Vest_6b13_9sh93_VOG",
            "OEC_CIS_Vest_6b13_9sh93_Radio",
            "OEC_CIS_Vest_6b13_9sh93_Headset",
            "OEC_CIS_Vest_Chicom",
            "OEC_CIS_Vest_Chicom_Khaki",
            "OEC_CIS_Vest_Beltbag1",
            "OEC_CIS_Vest_ModularCarrier",
            "OEC_CIS_Vest_ModularCarrier_Light",
            "OEC_CIS_Vest_PlateCarrier_Black",

            "OEC_CIS_Helmet_6B26_Flora",
            "OEC_CIS_Helmet_6b26_ESS",
            "OEC_CIS_Helmet_6b26_Green",
            "OEC_CIS_Helmet_6b26_ESS_Green",
            "OEC_CIS_Helmet_Alytn",
            "OEC_CIS_Helmet_Alytn_VisorDown",
            "OEC_CIS_Beanie_Green",
            "OEC_CIS_Helmet_White",
            "OEC_CIS_Helmet_Black",
            "OEC_CIS_HeadSet_Black",
            "OEC_CIS_Ushanka",
            "OEC_CIS_Helmet_Tsh4",
            "OEC_CIS_Helmet_Tsh4_Balaclava",
            "OEC_CIS_Helmet_Tsh4_ESS",

            //Misc Gear
            "OEC_Misc_Helmet_Headcrab",

            //Rebel Gear
            "OEC_Rebel_Civ_Uniform_White",
            "OEC_Rebel_Civ_Uniform_Blue",

            //Zombie Gear
            "OEC_Zombie_Uniform_Soldier",
            "OEC_Zombie_Vest_Soldier"
        };
    };
};

class CfgGlasses
{
    class G_Balaclava_blk;
	class None
	{
		identityTypes[] += {"OEC_scarf",130};
	};
	
	class OEC_CIS_Facewear_Scarf : G_Balaclava_blk
	{
        scope = 2;
        scopeArsenal = 2;
		author = "OEC Extension";
        displayName = "[OEC] Scarf";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_scarf";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_scarf_ca.paa";
		identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
	};

	class OEC_CIS_Facewear_Balaclava_Olive: G_Balaclava_blk
	{
		author = "OEC Extension";
        displayName = "[OEC] Balaclava Olive";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala1";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_balaclava_ca.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala1_olive_co.paa"};
        scope = 2;
        scopeArsenal = 2;
        identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_Bala";
            variant = "bala1";
        };
	};

    class OEC_CIS_Facewear_Balaclava_Olive2: G_Balaclava_blk
	{
		author = "OEC Extension";
        displayName = "[OEC] Balaclava Olive";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_balaclava_ca.paa";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_bala2_olive_co.paa"};
        scope = 2;
        scopeArsenal = 2;
        identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_Bala";
            variant = "bala2";
        };
	};

    class OEC_CIS_Facewear_Empty: None
	{
		author = "OEC Extension";
        displayName = "[OEC] Empty";
        scope = 2;
        scopeArsenal = 2;
        identityTypes[] = {"NoGlasses",0,"OEC_scarf",30};
	};

    class G_AirPurifyingRespirator_02_olive_F;
    class OEC_CIS_Facewear_APR: G_AirPurifyingRespirator_02_olive_F
    {
        author = "OEC Extension";
        displayName = "[OEC] Air Purifying Respirator (Olive)";
        scope = 2;
        scopeArsenal = 2;

        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_APR";
            variant = "olive";
        };
    }; 

    class G_AirPurifyingRespirator_02_black_F;
    class OEC_CIS_Facewear_APR_Black: G_AirPurifyingRespirator_02_black_F
    {
        author = "OEC Extension";
        displayName = "[OEC] Air Purifying Respirator (Black)";
        scope = 2;
        scopeArsenal = 2;

        class XtdGearInfo
        {
            model = "OEC_ACEX_Goggles_CIS_APR";
            variant = "black";
        };
    }; 

    class OEC_CIS_Facewear_Squares_Tinted: None
	{
		author = "OEC Extension";
        displayName = "[OEC] Square Glasses";
        scope = 2;
        scopeArsenal = 2;
		model = "\A3\characters_f_beta\heads\glasses\g_squares_tinted";
		picture = "\A3\Characters_F\data\ui\icon_g_squares_CA.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\characters_f\civil\data\nikos_wear_co.paa"};
		identityTypes[] = {"Squares", 100};
		mass = 2;
	};
};


class CfgVehicles
{
    class ContainerSupply;
	class Supply35: ContainerSupply
	{
		maximumLoad = 35;
	};
    class Supply75: ContainerSupply
	{
		maximumLoad = 75;
	};
    class Supply500: ContainerSupply
	{
		maximumLoad = 500;
	};

    class Bag_Base;
    class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
    class B_AssaultPack_Base;
    class Item_Base_F;
    class OEC_Unit_CIS_Infantry_Base;

    class OEC_Overwatch_Backpack_Base: Bag_Base
    {
        author = "OEC Extension";
        maximumLoad = 140;
        mass = 20;
    };

    class OEC_Overwatch_Backpack_Invisible: OEC_Overwatch_Backpack_Base
    {
        scope = 2;
        model = "\OECExtension\Gear\data\Empty.p3d";
        displayName = "[OEC] Invisible Backpack";
    };

    class OEC_Overwatch_Backpack_OxygenTank_Dark: OEC_Overwatch_Backpack_Base
    {
        scope = 2;
        picture = "\WBK_Combines\grunt\data\icon_backpack.paa";
        model = "\WBK_Combines\grunt\backpack.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_dark.paa","\WBK_Combines\grunt\data\grenade.paa"};
		hiddenSelectionsMaterials[] = {};
        displayName = "[OEC] Oxygen Tank - Dark";
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Oxygen";
            variant = "dark";
        };
    };
    class OEC_Overwatch_Backpack_OxygenTank_White: OEC_Overwatch_Backpack_OxygenTank_Dark
    {
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_white.paa","\WBK_Combines\grunt\data\grenade.paa"};
        displayName = "[OEC] Oxygen Tank - Light";
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Oxygen";
            variant = "light";
        };
    };
    class OEC_Overwatch_Backpack_OxygenTank_Airwatch: OEC_Overwatch_Backpack_OxygenTank_Dark
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_dark.paa"};
        model = "\WBK_Combines\grunt\backpack_civ.p3d";
        displayName = "[OEC] Oxygen Tank - Airwatch";
        tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
        class XtdGearInfo{};
    };

    class OEC_Overwatch_Backpack_Dark: OEC_Overwatch_Backpack_Base
    {
        scope = 2;
        picture = "\WBK_Combines\grunt\data\icon_backpack.paa";
		model = "\WBK_Combines\grunt\backpack_nobaloons.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_dark.paa","\WBK_Combines\grunt\data\grenade.paa"};
		hiddenSelectionsMaterials[] = {};
        displayName = "[OEC] Combine Backpack - Dark";
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Empty";
            variant = "dark";
        };
    };
    class OEC_Overwatch_Backpack_White: OEC_Overwatch_Backpack_Dark
    {
        hiddenSelectionsTextures[] = {"\WBK_Combines\grunt\data\body_white.paa","\WBK_Combines\grunt\data\grenade.paa"};
        displayName = "[OEC] Combine Backpack - Light";
        class XtdGearInfo
        {
            model = "OEC_ACEX_Backpack_CMB_Empty";
            variant = "light";
        };
    };

    class OEC_Overwatch_Backpack_LR_Black: OEC_Overwatch_Backpack_Base
    {
        scope = 2;
        displayName = "[OEC] Radio Backpack";
        model = "\HL_Combine\data\MPF_Radio.p3d";
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"HL_Combine\data\Backpack\MPF_Radio.paa","HL_Combine\data\Backpack\MPF_Radio.paa"};
		hiddenSelectionsMaterials[] = {"HL_Combine\data\Materials\Armor.rvmat","HL_Combine\data\Materials\Lens\Blue.rvmat"};
        tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
        class XtdGearInfo{};
    };

    class OEC_CIS_Backpack_RD54: B_AssaultPack_Base
	{
        scope = 2;
        scopeArsenal = 2;
        author = "OEC Extension";
        displayName = "[OEC] RD-54";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_rd54_flora2_ca.paa";
        model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RD54_backpack_nobodyarmor";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\RD54_flora2_co.paa"};
        maximumLoad = 100;
        mass = 35;
	};

    class OEC_CIS_Backpack_SCBA_Bag: Bag_Base
	{
        scope = 2;
        scopeArsenal = 2;
        author = "OEC Extension";
        displayName = "[OEC] Self-Contained Breathing Apparatus";
        descriptionShort = "Caution - Explosive!";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_SCBA_01_ca.paa";
        model = "a3\Supplies_F_Enoch\Bags\B_SCBA_01_F.p3d";
        hiddenSelections[] = {"Camo","Hose_APR","Hose_Regulator"};
        hiddenSelectionsTextures[] = {"a3\Supplies_F_Enoch\bags\data\b_scba_01_co.paa","",""};
        maximumLoad = 0;
        mass = 120;
	};
  
	class OEC_CIS_Backpack_Engineer_RK30: B_AssaultPack_Base
	{
        scope = 2;
        scopeArsenal = 2;
        author = "OEC Extension";
        displayName = "[OEC] RK-30 Engineer Backpack";
        model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_assault_umbts_engineer_ca.paa";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
        maximumLoad = 150;
        mass = 35;
        class TransportMagazines
        {
            class xx_OEC_GrenMix_mag
            {
                magazine = "OEC_Magazine_SmokeStun_6Rnd";
                count = 15;
            };
        };
	};

	class OEC_CIS_Backpack_RPG_Bag: OEC_CIS_Backpack_RD54
	{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_rpg_6b3_ca.paa";
		displayName = "[OEC] 6B3 RPG Carrier";
		model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RPG_backpack_6b3";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\rpg_pouchs_co.paa"};

		class TransportMagazines
		{
			class _xx_OEC_rpg7_PG7V_mag
			{
				magazine = "OEC_Magazine_PG7V";
				count = 2;
			};
		};
	};

	class OEC_CIS_Backpack_Medic_Bag: B_AssaultPack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "OEC Extension";
    	displayName = "[OEC] CIS Medic Bag";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_medic_bag";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_medic_bag_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
		maximumLoad = 100;
		mass = 15;
		class TransportItems
		{
			class _xx_Elastic
			{
				name = "ACE_elasticBandage";
				count = 10;
			};
			class _xx_Packing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_quikClot
			{
				name = "ACE_quikClot";
				count = 5;
			};
			class _xx_painKillers
			{
				name = "ACE_painkillers";
				count = 2;
			};
			class _xx_epinephrine
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class _xx_morphrine
			{
				name = "ACE_morphine";
				count = 1;
			};
			class _xx_plasma
			{
				name = "ACE_plasmaIV_500";
				count = 2;
			};
		};
	};

	class OEC_CIS_Backpack_R148: B_AssaultPack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "OEC Extension";
    	displayName = "[OEC] CIS Radio Pack";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_r148_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_R_148_backpack";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\r148_co.paa"};
		maximumLoad = 10;
		mass = 5;
	};

	class OEC_CIS_Throwbag: Bag_Base
	{
		author = "OEC Extension";
    	displayName = "[OEC] CIS Throwbag - Gray";
		scope = 2;
		scopeArsenal = 2;
		mapSize = 0.47;
		hiddenSelections[] = {"Camo"};
		model = "\A3\Supplies_F_Orange\Bags\B_Messenger_F.p3d";
		maximumLoad = 30;
		mass = 20;
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Gray_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Gray_F_CO.paa"};
	};

    class OEC_Uniform_Rebel_Civ_White_Base_Vehicle: OEC_Unit_CIS_Infantry_Base
	{
		scope = 1;
		uniformClass = "OEC_Rebel_Uniform_White";

		selectionHeadWound = "head_injury";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		selectionLArmWound1 = "injury_hands";
		selectionRArmWound1 = "injury_hands";
		selectionLLegWound1 = "injury_legs";
		selectionRLegWound1 = "injury_legs";

        model = "hl_civ_characters\models\u_civ_01.p3d";
        modelSides[] = {3,1};
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OECExtension\Gear\data\zombie_beige_co.paa"}; // we will need to make a separate zombie uniform vehicle later.
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","hl_civ_characters\data\citizen.rvmat","hl_civ_characters\data\w1_citizen.rvmat","hl_civ_characters\data\w2_citizen.rvmat"};
		};
	};

    class OEC_Uniform_Rebel_Civ_Blue_Base_Vehicle: OEC_Uniform_Rebel_Civ_White_Base_Vehicle
	{
		scope = 1;
		uniformClass = "OEC_Rebel_Civ_Uniform_Blue";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OECExtension\Gear\data\zombie_co.paa"}; // we will need to make a separate zombie uniform vehicle later.
	};
};



class CfgWeapons
{
	class Uniform_Base;
    class UniformItem;
    class V_RebreatherB;
    class VestItem;
    class ItemCore;
    class HeadgearItem;
    class ItemInfo;
    class H_HelmetB: ItemCore
    {
	    class ItemInfo;
    };
    class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};

    class HL2_Combine_Helmet_WPU;

    class OEC_Overwatch_Uniform_Base: Uniform_Base
    {
        scope = 1;
        scopeArsenal = 1;
        author = "OEC";
        displayName = "";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        picture = "\hl_cmb_overwatch\ui\icon_u_ow_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "OEC_Overwatch_Unit_Base";
			containerClass = "Supply40";
			mass = 20;
			hiddenSelections[] = {""};
            scope = 1;
		};
    };
    class OEC_Overwatch_Uniform_Soldier: OEC_Overwatch_Uniform_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[OEC] Combine Soldier Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Soldier";
            scope = 2;
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "soldier";
        };
    };
    class OEC_Overwatch_Uniform_AT: OEC_Overwatch_Uniform_Soldier
    {  
        displayName = "[OEC] Combine Soldier Uniform - AT";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_AT";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "at";
        };
    };
    class OEC_Overwatch_Uniform_CE: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Soldier Uniform - CE";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_CE";
            containerClass = "Supply170";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "ce";
        };
    };
    class OEC_Overwatch_Uniform_Medic: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Soldier Uniform - Medic";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Medic";
            containerClass = "Supply240";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "medic";
        };
    };
    class OEC_Overwatch_Uniform_Recon: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Soldier Uniform - Recon";
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply150";
            uniformClass = "OEC_Overwatch_Unit_Recon";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "recon";
        };
    };

    class OEC_Overwatch_Uniform_TL: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Team Leader Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_TL";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_TL";
            variant = "norm";
        };
    };
    class OEC_Overwatch_Uniform_TL_AT: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Team Leader Uniform - AT";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_TL_AT";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_TL";
            variant = "at";
        };
    };
    class OEC_Overwatch_Uniform_TL_CE: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Team Leader Uniform - CE";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_TL_CE";
            containerClass = "Supply170";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_TL";
            variant = "ce";
        };
    };

    class OEC_Overwatch_Uniform_Elite: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Elite Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Elite";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Elite";
            variant = "sl";
        };
    };
    class OEC_Overwatch_Uniform_Elite_AT: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Elite Uniform - AT";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Elite_AT";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Elite";
            variant = "at";
        };
    };
    class OEC_Overwatch_Uniform_Elite_CE: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Elite Uniform - CE";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Elite_CE";
            containerClass = "Supply170";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Elite";
            variant = "ce";
        };
    };
    class OEC_Overwatch_Uniform_Recon_TL: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Elite Uniform - Recon";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Recon_TL";
            containerClass = "Supply150";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Elite";
            variant = "reconSL";
        };
    };
    class OEC_Overwatch_Uniform_Elite_Medic: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Elite Uniform - Medic";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Elite_Medic";
            containerClass = "Supply240";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Elite";
            variant = "medicNCO";
        };
    };

    class OEC_Overwatch_Uniform_Wallhammer: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Wallhammer Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Wallhammer";
        };
        class XtdGearInfo{};
    };
    class OEC_Overwatch_Uniform_Airwatch: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Airwatch Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_Airwatch";
        };
        class XtdGearInfo
        {};
    };
    class OEC_Overwatch_Uniform_APF: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] APF Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Unit_APF";
        };
        class XtdGearInfo{};
    };

    //Vests
    class OEC_Overwatch_Vest_Base: V_RebreatherB
    {
        scope = 1;
        scopeAresenal = 1;
        descriptionShort = "";
        hiddenSelections[] = {"camo","camo1"};
	    hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "\OECExtension\Gear\data\soldier_upperArmor.paa"
        };
	    hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        model = "\HL_Combine\data\Nemez_Vest.p3d";
        picture = "\hl_cmb_overwatch\ui\icon_v_ow_ca.paa";
        class ItemInfo: VestItem
	    {
		    hiddenSelections[] = {"camo","camo1"};
		    hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
                "\OECExtension\Gear\data\soldier_upperArmor.paa"
            };
		    hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat"
            };
		    uniformModel = "\HL_Combine\data\Nemez_Vest.p3d";
		    containerClass = "Supply300";
	        mass = 40;
	    	vesttype = "Rebreather";
            class HitpointsProtectionInfo
	    	{
                class Neck
	    		{
	    			HitpointName = "HitNeck";
	    			armor = 16.5;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.8;
	    		};
	    		class Chest
	    		{
	    			HitpointName = "HitChest";
	    			armor = 16.5;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.8;
	    		};
    			class Diaphragm
    			{
				    HitpointName = "HitDiaphragm";
			    	armor = 16.5;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Abdomen
    			{
				    hitpointName = "HitAbdomen";
				   	armor = 16.5;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Body
    			{
				    hitpointName = "HitBody";
				   	armor = 16.5;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
                class Pelvis
                {
                    hitpointName = "HitPelvis";
					armor = 14.5;
					PassThrough = 0.4;
                };
	    		class Arms
    			{
				    hitpointName = "HitArms";
				    armor = 10;
				    PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Legs
    			{
				    hitpointName = "Hitlegs";
					armor = 10;
			    	PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
                
			};
        };
    };

    class OEC_Overwatch_Vest_Soldier: OEC_Overwatch_Vest_Base
    {
        displayName = "[OEC] Combine Soldier Vest";
        scope = 2;
        scopeArsenal = 2;
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Soldier";
            variant = "soldier";
        };
    };

    class OEC_Overwatch_Vest_AT: OEC_Overwatch_Vest_Base
    {
        displayName = "[OEC] Combine Soldier Vest - AT";
        scope = 2;
        scopeAresenal = 2;
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "\OECExtension\Gear\data\AT_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
                "HL_Combine\data\Urban\Urban_Shotgunner_upperArmor.paa"
            };
            containerClass = "supply500";
		};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Soldier";
            variant = "at";
        };
    };

    class OEC_Overwatch_Vest_CE: OEC_Overwatch_Vest_Soldier
    {
       displayName = "[OEC] Combine Soldier Vest - CE";
        scope = 2;
        scopeAresenal = 2;
        model = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\engi_upperArmor.paa",
            "\OECExtension\Gear\data\engi_collar.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\engi_upperArmor.paa",
                "\OECExtension\Gear\data\engi_collar.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat"
            };
			uniformModel = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
            containerClass = "supply450";
        };
        class XtdGearInfo{};
    };

    class OEC_Overwatch_Vest_Medic: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Soldier Vest - Medic";
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "\OECExtension\Gear\data\medic_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
                "\OECExtension\Gear\data\medic_upperArmor.paa"
            };
		};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Soldier";
            variant = "medic";
        };
    };

    class OEC_Overwatch_Vest_Recon: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Soldier Vest - Recon";
        hiddenSelectionsTextures[] =
        {
            "\OECExtension\Gear\data\Recon_Trooper_pants.paa",
            "\OECExtension\Gear\data\Recon_Trooper_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] =
        {
            "\OECExtension\Gear\data\Recon_Trooper_pants.paa",
            "\OECExtension\Gear\data\Recon_Trooper_upperArmor.paa"
        };
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Soldier";
            variant = "recon";
        };
    };

    class OEC_Overwatch_Vest_TL: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Team Leader Vest";
        hiddenSelectionsTextures[] =
        {
            "HL_Combine\data\Beta\Beta_pants.paa",
            "HL_Combine\data\Beta\Beta_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] =
            {
                "HL_Combine\data\Beta\Beta_pants.paa",
                "HL_Combine\data\Beta\Beta_upperArmor.paa"
            };
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_TL";
            variant = "norm";
        };
    };

    class OEC_Overwatch_Vest_TL_AT: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Team Leader Vest - AT";
        hiddenSelectionsTextures[] =
        {
            "HL_Combine\data\Beta\Beta_pants.paa",
            "\OECExtension\Gear\data\TL_AT_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] =
            {
                "HL_Combine\data\Beta\Beta_pants.paa",
                "\OECExtension\Gear\data\TL_AT_upperArmor.paa"
            };
            containerClass = "supply500";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_TL";
            variant = "at";
        };
    };

    class OEC_Overwatch_Vest_TL_CE: OEC_Overwatch_Vest_Soldier
    {
       displayName = "[OEC] Combine Team Leader Vest - CE";
        scope = 2;
        scopeAresenal = 2;
        model = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\TL_CE_upperArmor.paa",
            "\OECExtension\Gear\data\engi_collar.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\TL_CE_upperArmor.paa",
                "\OECExtension\Gear\data\engi_collar.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat"
            };
			uniformModel = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
            containerClass = "supply450";
        };
        class XtdGearInfo{};
    };

    class OEC_Overwatch_Vest_Elite: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Elite Vest";
        model = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\elite\elite_upperArmor.paa",
            "HL_Combine\data\elite\elite_collar.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\elite\elite_upperArmor.paa",
                "HL_Combine\data\elite\elite_collar.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat"
            };
			uniformModel = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Elite";
            variant = "sl";
        };
    };

    class OEC_Overwatch_Vest_Elite_AT: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Elite Vest - AT";
        model = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\SL_AT_upperArmor.paa",
            "HL_Combine\data\elite\elite_collar.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\SL_AT_upperArmor.paa",
                "HL_Combine\data\elite\elite_collar.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat"
            };
			uniformModel = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
            containerClass = "supply500";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Elite";
            variant = "at";
        };
    };

    class OEC_Overwatch_Vest_Elite_CE: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Elite Vest - CE";
        model = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\SL_CE_upperArmor.paa",
            "HL_Combine\data\elite\elite_collar.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\SL_CE_upperArmor.paa",
                "HL_Combine\data\elite\elite_collar.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat"
            };
			uniformModel = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
            containerClass = "supply450";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Elite";
            variant = "ce";
        };
    };

    class OEC_Overwatch_Vest_Recon_TL: OEC_Overwatch_Vest_Elite
    {
        displayName = "[OEC] Combine Elite Vest - Recon";
        hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\Recon_Elite_upperArmor.paa",
            "\OECExtension\Gear\data\Recon_Elite_collar.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = {"HL_Combine\data\elite\wpu_upperArmor.paa","HL_Combine\data\elite\wpu_collar.paa"};
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Elite";
            variant = "reconSL";
        };
    };

    class OEC_Overwatch_Vest_Elite_Medic: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Elite Vest - Medic";
        model = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\Medic_Elite_upperArmor.paa",
            "\OECExtension\Gear\data\Medic_Elite_collar.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\Medic_Elite_upperArmor.paa",
                "\OECExtension\Gear\data\Medic_Elite_collar.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat"
            };
			uniformModel = "\HL_Combine\data\Nemez_Vest_Elite.p3d";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Elite";
            variant = "medicNCO";
        };
    };

    class OEC_Overwatch_Vest_Wallhammer_Heavy: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Wallhammer Vest - Heavy";
        model = "\@CombainVest\CombainWallhammer.p3d";
        hiddenSelectionsTextures[]={};
        class ItemInfo: ItemInfo
		{
			uniformModel="\@CombainVest\CombainWallhammer.p3d";
			containerClass="Supply300";
			mass=90;
			hiddenSelections[]=
		    {
				"camo"
		    };
            class HitpointsProtectionInfo
	    	{
                 class Neck
	    		{
	    			HitpointName = "HitNeck";
	    			armor = 17;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.8;
	    		};
	    		class Chest
	    		{
	    			HitpointName = "HitChest";
	    			armor = 17;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.5;
	    		};
    			class Diaphragm
    			{
				    HitpointName = "HitDiaphragm";
			    	armor = 17;
					PassThrough = 0.08975;
                    explosionShielding = 0.5;
		    	};
	    		class Abdomen
    			{
				    hitpointName = "HitAbdomen";
				   	armor = 17;
					PassThrough = 0.08975;
                    explosionShielding = 0.5;
		    	};
	    		class Body
    			{
				    hitpointName = "HitBody";
				   	armor = 17;
					PassThrough = 0.08975;
                    explosionShielding = 0.5;
		    	};
                class Pelvis
                {
                    hitpointName = "HitPelvis";
					armor = 14;
					PassThrough = 0.4;
                };
	    		class Arms
    			{
				    hitpointName = "HitArms";
				    armor = 14;
				    PassThrough = 0.08975;
                    explosionShielding = 0.5;
		    	};
	    		class Legs
    			{
				    hitpointName = "Hitlegs";
					armor = 9;
			    	PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
			};
        };
        class XtdGearInfo {};
    };

    class OEC_Overwatch_Vest_APF: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] APF Vest";
        model = "WBK_AdditionalGear\A_HalfLife_APF_vest.p3d";
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = 
        {
            "wbk_combines\APF_body_C.paa",
            "wbk_combines\apf_pack_c.paa"
        };
		class ItemInfo: ItemInfo
		{
			uniformModel = "WBK_AdditionalGear\A_HalfLife_APF_vest.p3d";
			containerClass = "Supply300";
			mass = 100;
            class HitpointsProtectionInfo
	    	{
                class Neck
	    		{
	    			HitpointName = "HitNeck";
	    			armor = 15;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.8;
	    		};
	    		class Chest
	    		{
	    			HitpointName = "HitChest";
	    			armor = 15;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.8;
	    		};
    			class Diaphragm
    			{
				    HitpointName = "HitDiaphragm";
			    	armor = 15;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Abdomen
    			{
				    hitpointName = "HitAbdomen";
				   	armor = 15;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Body
    			{
				    hitpointName = "HitBody";
				   	armor = 15;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
                class Pelvis
                {
                    hitpointName = "HitPelvis";
					armor = 11;
					PassThrough = 0.4;
                };
	    		class Arms
    			{
				    hitpointName = "HitArms";
				    armor = 9;
				    PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Legs
    			{
				    hitpointName = "Hitlegs";
					armor = 9;
			    	PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
			};
		};
        class XtdGearInfo{};
    };

    class OEC_Overwatch_Vest_Airwatch: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Airwatch Vest";
        picture = "\hl_res_characters\ui\icon_v_res_ca.paa";
		model = "\hl_res_characters\models\v_res.p3d";
        class ItemInfo: ItemInfo
		{
			uniformModel = "\hl_res_characters\models\v_res.p3d";
			hiddenSelections[] = {};
		};
        class XtdGearInfo{};
    };

    //Helmets
    class OEC_Overwatch_Helmet_Soldier: ItemCore
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[OEC] Combine Soldier Helmet";
        model = "\HL_Combine\data\Nemez_Helmet.p3d";
        picture = "\hl_cmb_overwatch\ui\icon_h_ow_ca.paa";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\soldier_helmet.paa",
            "HL_Combine\data\shotgunner\shotgunner_torso.paa",
            "HL_Combine\data\shotgunner\shotgunner_lens.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Lens\Orange.rvmat"
        };
		subItems[] = {"Integrated_NVG_TI_0_F"};
        class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformmodel = "\HL_Combine\data\Nemez_Helmet.p3d";
			hiddenSelections[] = {"camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\soldier_helmet.paa",
                "HL_Combine\data\shotgunner\shotgunner_torso.paa",
                "HL_Combine\data\shotgunner\shotgunner_lens.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Lens\Orange.rvmat"
            };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 6;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 6;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
			};
		};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Soldier";
            variant = "soldier";
        };
    };

    class OEC_Overwatch_Helmet_Airwatch: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Airwatch Helmet";
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\BorderPatrol\BorderPatrol_helmet.paa",
            "HL_Combine\data\BorderPatrol\BorderPatrol_torso.paa",
            "HL_Combine\data\BorderPatrol\BorderPatrol_lens.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Lens\Orange.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\BorderPatrol\BorderPatrol_helmet.paa",
                "HL_Combine\data\BorderPatrol\BorderPatrol_torso.paa",
                "HL_Combine\data\BorderPatrol\BorderPatrol_lens.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Lens\Orange.rvmat"
            };
        };
        class XtdGearInfo{};
    };

    class OEC_Overwatch_Helmet_AT: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Soldier Helmet - AT";
        hiddenSelectionsTextures[] =
        {
            "\OECExtension\Gear\data\AT_helmet.paa",
            "\OECExtension\Gear\data\AT_torso.paa",
            "HL_Combine\data\soldier\soldier_lens.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Urban\Urban_Shotgunner_helmet.paa",
                "HL_Combine\data\Urban\Urban_Shotgunner_torso.paa",
                "HL_Combine\data\soldier\soldier_lens.paa"
            };
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Soldier";
            variant = "at";
        };
    };

    class OEC_Overwatch_Helmet_CE: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Soldier Helmet - CE";
        hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\engi_helmet.paa",
            "\OECExtension\Gear\data\engi_torso.paa",
            "HL_Combine\data\Nova\Nova_lens.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Nova\Nova_helmet.paa",
                "HL_Combine\data\Nova\Nova_torso.paa",
                "HL_Combine\data\Nova\Nova_lens.paa"
            };
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Soldier";
            variant = "ce";
        };
    };

    class OEC_Overwatch_Helmet_Medic: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Soldier Helmet - Medic";
        hiddenSelectionsTextures[] =
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_helmet.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_lens.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Urban\Urban_Shotgunner_helmet.paa",
                "HL_Combine\data\Urban\Urban_Shotgunner_torso.paa",
                "HL_Combine\data\Urban\Urban_Shotgunner_lens.paa"
            };
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Soldier";
            variant = "medic";
        };
    };

    class OEC_Overwatch_Helmet_Recon: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Soldier Helmet - Recon";
        hiddenSelectionsTextures[] =
        {
            "\OECExtension\Gear\data\Recon_Trooper_helmet.paa",
            "\OECExtension\Gear\data\Recon_Trooper_torso.paa",
            "\OECExtension\Gear\data\Recon_Trooper_lens.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "\OECExtension\Gear\data\Recon_Trooper_lens.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] =
            {
                "\OECExtension\Gear\data\Recon_Trooper_helmet.paa",
                "\OECExtension\Gear\data\Recon_Trooper_torso.paa",
                "\OECExtension\Gear\data\Recon_Trooper_lens.paa"
            };
        };
        hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "\OECExtension\Gear\data\Recon_Trooper_lens.rvmat"
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Soldier";
            variant = "recon";
        };
    };

    class OEC_Overwatch_Helmet_TL: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Team Leader Helmet";
        hiddenSelectionsTextures[] =
        {
            "HL_Combine\data\Beta\Beta_helmet.paa",
            "HL_Combine\data\Beta\Beta_torso.paa",
            "HL_Combine\data\Beta\Beta_lens.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Lens\Red.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Beta\Beta_helmet.paa",
                "HL_Combine\data\Beta\Beta_torso.paa",
                "HL_Combine\data\Beta\Beta_lens.paa"
            };
            hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Lens\Red.rvmat"
            };
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Soldier";
            variant = "tl";
        };
    };

    class OEC_Overwatch_Helmet_Elite: OEC_Overwatch_Helmet_Soldier
    {
        author = "Overwatch Expeditionary Corps";
        picture = "\hl_cmb_overwatch\ui\icon_h_ow_e_ca.paa";
        displayName = "[OEC] Combine Elite Helmet";
        model = "\HL_Combine\data\Nemez_Helmet_Elite.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"HL_Combine\data\elite\elite_helmet.paa","HL_Combine\data\elite\elite_lens.paa"};
		hiddenSelectionsMaterials[] = {"HL_Combine\data\Materials\Armor.rvmat","HL_Combine\data\Materials\Lens\Red.rvmat"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\HL_Combine\data\Nemez_Helmet_Elite.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"HL_Combine\data\elite\wpu_helmet.paa","HL_Combine\data\elite\wpu_lens.paa"};
			hiddenSelectionsMaterials[] = {"HL_Combine\data\Materials\Armor.rvmat","HL_Combine\data\Materials\Lens\Red.rvmat"};
		};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Elite";
            variant = "sl";
        };
    };

    class OEC_Overwatch_Helmet_Elite_Medic: OEC_Overwatch_Helmet_Soldier
    {
        author = "Overwatch Expeditionary Corps";
        picture = "\hl_cmb_overwatch\ui\icon_h_ow_e_ca.paa";
        displayName = "[OEC] Combine Elite Helmet - Medic";
        model = "\HL_Combine\data\Nemez_Helmet_Elite.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\Medic_Elite_helmet.paa",
            "\OECExtension\Gear\data\Medic_Elite_lens.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "\OECExtension\Gear\data\Medic_Elite_lens.rvmat"
        };
		subItems[] = {"Integrated_NVG_TI_0_F"};
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\HL_Combine\data\Nemez_Helmet_Elite.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\Medic_Elite_helmet.paa",
                "\OECExtension\Gear\data\Medic_Elite_lens.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "\OECExtension\Gear\data\Medic_Elite_lens.rvmat"
            };
		};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Elite";
            variant = "medicNCO";
        };
    };

    class OEC_Overwatch_Helmet_Recon_TL: OEC_Overwatch_Helmet_Elite
    {
        displayName = "[OEC] Combine Elite Helmet - Recon";
        picture = "\hl_cmb_overwatch\ui\icon_h_ow_e_ca.paa";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\Recon_Elite_helmet.paa",
            "\OECExtension\Gear\data\Recon_Elite_lens.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "\OECExtension\Gear\data\Recon_Elite_lens.rvmat"
        };
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\HL_Combine\data\Nemez_Helmet_Elite.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\Recon_Elite_helmet.paa",
                "\OECExtension\Gear\data\Recon_Elite_lens.paa"
            };
            hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "\OECExtension\Gear\data\Recon_Elite_lens.rvmat"
            };
		};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CMB_Elite";
            variant = "reconSL";
        };
    };

    class OEC_Overwatch_Helmet_Wallhammer: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Wallhammer Helmet";
        model = "WBK_Combines\A_HalfLife_Wallhammer_Helmet.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"WBK_Combines\charger_head_CO.paa"};
		hiddenSelectionsMaterials[] = {};
        class ItemInfo: ItemInfo
        {
            uniformmodel = "WBK_Combines\A_HalfLife_Wallhammer_Helmet.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"WBK_Combines\charger_head_CO.paa"};
			hiddenSelectionsMaterials[] = {};
            class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 9;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 9;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
                
			};
        };
        class XtdGearInfo{};
    };

    class OEC_Overwatch_Helmet_APF: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] APF Helmet";
        picture="\WBK_Combines\grunt\data\icon_helmet.paa";
        model = "WBK_Combines\A_HalfLife_APF_helmet.p3d";
        class ItemInfo: ItemInfo
		{
			uniformModel = "WBK_Combines\A_HalfLife_APF_helmet.p3d";
		};
        class XtdGearInfo{};
    };

    //----------------------------------------------------------------------------//
    //CISDF Gear
    //----------------------------------------------------------------------------//

    //Uniforms
    class OEC_CIS_Uniform_Flora: Uniform_Base
	{
	    author = "OEC Extension";
        displayName = "[OEC] Flora";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_flora_patchless_alt_ca.paa";
		scope = 2;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		nameSound = "";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "OEC_Unit_CIS_Rifleman";
			containerClass = "Supply0";
			mass = 40;
		};
	};

    class OEC_CIS_Uniform_TTSKO: OEC_CIS_Uniform_Flora
	{
		scope = 2;
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_para_ttsko_2_ca.paa";
		displayName = "[OEC] M88 TTSKO";
		class ItemInfo: ItemInfo
		{
			uniformClass = "OEC_Unit_CIS_Infantry_TTSKO";
		};
	};

    class OEC_CIS_Uniform_6sh112: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] 6sh112";
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_6sh122_v2_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass = "OEC_Unit_CIS_Infantry_6sh112";
		};
	};

    class OEC_CIS_Uniform_CBRN_White: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] CBRN Overalls - White";
		author = "OEC Extension";
		picture = "\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_C_CBRN_Suit_01_White_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_White_CO.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "C_CBRN_Man_Oversuit_01_White_F";
			containerClass = "Supply30";
			mass = 45;
		};
	};

    class OEC_CIS_Uniform_Gorka_Black: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] Gorka Black";
		author = "OEC Extension";
		picture = "\a3\Characters_F_Enoch\Uniforms\data\ui\icon_U_O_R_Gorka_01_black_F_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_Black_CO.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "OEC_Unit_CIS_Infantry_Gorka";
			containerClass = "Supply0";
			mass = 40;
		};
	};

    class OEC_CIS_Uniform_Izlom: OEC_CIS_Uniform_Flora
	{
		scope = 2;
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_para_ttsko_ca.paa";
		displayName = "[OEC] Izlom";
		class ItemInfo: ItemInfo
		{
			uniformClass = "OEC_Unit_CIS_Infantry_Izlom";
		};
	};

    class OEC_CIS_Uniform_M88_Winter: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        displayName = "[OEC] M88 (Officer)";
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\uniform\rhs_uniform_afghanka_winter_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry3\rhs_afghanka_winter.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\afghanka_winter_vest_co.paa","rhsafrf\addons\rhs_infantry3\data\afghanka01_pant_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "OEC_Unit_CIS_Infantry_M88";
			containerClass = "Supply0";
			mass = 40;
		};
	};

    //Vests
    class OEC_CIS_Vest_6b13: Vest_Camo_Base
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13";
		descriptionShort = "CIS Standard Issue Vest";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_vsr_co.paa","rhsafrf\addons\rhs_infantry2\data\gearpack1_6sh92_vsr_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13";
			containerClass = "Supply80";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 10;
					PassThrough = 0.4;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 14;
					PassThrough = 0.4;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 14;
					PassThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
					PassThrough = 0.4;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
                class Pelvis
                {
                    hitpointName = "HitPelvis";
					armor = 12;
					PassThrough = 0.4;
                };
                
			};
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "plain";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92";
			containerClass = "Supply80";
			mass = 80;	
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "pouches";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93_VOG: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_vog_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches, VOGs";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_vog";
			containerClass = "Supply500";
			mass = 80;
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "VOG";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93_Radio: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_radio_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches, Radio";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_radio";
			containerClass = "Supply80";
			mass = 80;
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "radio";
        };
	};

    class OEC_CIS_Vest_6b13_9sh93_Headset: OEC_CIS_Vest_6b13
	{
		author = "OEC Extension";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_Flora_6sh92_headset_mapcase_ca.paa";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[OEC] 6b13/6sh92 Pouches, Headset, Tablet";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b13_Flora_co.paa","rhsafrf\addons\rhs_infantry\data\gearpack1_6sh92_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_6b13_6sh92_headset_mapcase";
			containerClass = "Supply80";
			mass = 80;
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CIS_6B13";
            variant = "headset";
        };
	};

    class OEC_CIS_Vest_Chicom: Vest_Camo_Base
	{
		author = "Dirt's OEC Extension";
        displayName = "[OEC] Chicom";
		scope = 2;
        scopeArsenal = 2;
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_6b13_ca.paa";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\chicom_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_chicom";
			containerClass = "Supply90";
			mass = 10;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 3;
					passThrough = 0.6;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 0.8;
				};
			};
		};

        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_Chicom";
            variant = "olive";
        };
	};

    class OEC_CIS_Vest_Chicom_Khaki: OEC_CIS_Vest_Chicom
	{
		author = "Dirt's OEC Extension";
        displayName = "[OEC] Chicom - Khaki";
		scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_chicom_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\chicom_tan_co.paa"};

        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_Chicom";
            variant = "khk";
        };
	};

    class OEC_CIS_Vest_Beltbag1: OEC_CIS_Vest_Chicom
	{
		author = "Dirt's OEC Extension";
        displayName = "[OEC] Beltbag";
		scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\vests\rhs_belt_AK4_ca.paa";
		model = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4_back";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\gear_ak_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\gear\vests\rhs_vest_AK4";
			containerClass = "Supply40";
			mass = 10;
		};

        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_Pouches";
            variant = "belt1";
        };
	};

    class OEC_CIS_Vest_ModularCarrier: Vest_Camo_Base
	{
		author = "OEC Extension";
        scope = 2;
        scopeArsenal = 2;
        displayName = "[OEC] CIS Superheavy Vest";
        descriptionShort = "CIS Specialized Protection Vest";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"Camo"};
        picture = "\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_heavy_Olive_F_CA.paa";
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\vests\data\carrierrigkbt_01_olive_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			hiddenSelections[] = {"Camo"};
			containerClass = "Supply210";
			mass = 80;
			class HitpointsProtectionInfo
			{
                class Neck
				{
					hitpointName = "HitNeck";
					armor = 25;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 25;
					passThrough = 0.5;
				};
                class Legs
			    {
                    hitpointName = "HitLegs";
                    armor = 25;
                    passThrough = 0.5;
                };
		        class Chest
				{
					hitpointName = "HitChest";
					armor = 35;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 35;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 35;
					passThrough = 0.3;
				};
                class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

  	class OEC_CIS_Vest_ModularCarrier_Light: Vest_Camo_Base
	{
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[OEC] CIS Light Specialist Vest";
		descriptionShort = "CIS Specialized Light Vest";
		picture = "\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_CArrierRigKBT_01_light_Olive_F_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"a3\characters_f_enoch\vests\data\carrierrigkbt_01_olive_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			hiddenSelections[] = {"Camo"};
			containerClass = "Supply200";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	class OEC_CIS_Vest_PlateCarrier_Black: OEC_CIS_Vest_ModularCarrier_Light
	{
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[OEC] CIS Spetsnaz Vest";
		descriptionShort = "CIS Specialized Spetznaz Vest";
		picture = "\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};

    //Helmets
    class OEC_CIS_Helmet_6b26_Flora: H_HelmetB
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24 Flora";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_ca.paa";
		descriptionShort = "CIS Standard Issue Helmet";
		Scope = 2;
        scopeArsenal = 2;
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\6b26_co.paa"};
		allowedFacewear[] = {"OEC_CIS_Facewear_Scarf","OEC_CIS_Facewear_Balaclava_Olive","OEC_CIS_Facewear_Empty"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1"};
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 5;
					passThrough = 0.5;
				};
			};
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "flora";
        };
	};

    class OEC_CIS_Helmet_6b26_ESS: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24 Flora (Combat Goggles)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_ess_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
		class ItemInfo: ItemInfo
		{
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_ess";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "floraess";
        };
	};

    class OEC_CIS_Helmet_6b26_Green: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_green_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "green";
        };
	};

    class OEC_CIS_Helmet_6b26_ESS_Green: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] 6b24 (Combat Goggles)";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_6b26_ess_green_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b26_green_ess";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_6b26";
            variant = "greeness";
        };
	};

	class OEC_CIS_Helmet_Altyn: OEC_CIS_Helmet_6b26_Flora
	{
		author = "OEC Extension";
        displayName = "[OEC] Altyn Superheavy Helmet (Visor Up)";
		descriptionShort = "CIS Specialized Protection Helmet";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_altyn_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry2\gear\head\data\rhs_altyn_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo1"};
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 13;
					passThrough = 0.5;
				};
			};
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Altyn";
            variant = "up";
        };
	};

	class OEC_CIS_Helmet_Altyn_VisorDown: OEC_CIS_Helmet_Altyn
	{
        displayName = "[OEC] Altyn Superheavy Helmet (Visor Down)";
		descriptionShort = "CIS Specialized Protection Helmet";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_altyn_visordown_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 13;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 13;
					passThrough = 0.5;
				};
			};
		};

		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Altyn";
            variant = "down";
        };
	};

	class rhs_beanie_green;
	class OEC_CIS_Beanie_Green: rhs_beanie_green
	{
		displayName = "[OEC] Green Beanie";
		descriptionShort = "Warm.";
	};

	class H_PASGT_basic_base_F;
	class OEC_CIS_Helmet_White: H_PASGT_basic_base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] White Helmet";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_white_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_white_CO.paa"};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Basic";
            variant = "white";
        };
	};

	class OEC_CIS_Helmet_Black: H_PASGT_basic_base_F
	{
		author = "OEC Extension";
        displayName = "[OEC] Black Helmet";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_PASGT_basic_black_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_PASGT_black_CO.paa"};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Basic";
            variant = "black";
        };
	};

	class H_HeadSet_black_F;
	class OEC_CIS_HeadSet_Black: H_HeadSet_black_F
	{
		author = "OEC Extension";
        displayName = "[OEC] Headset";
		Scope = 2;
        scopeArsenal = 2;
	};

	class OEC_CIS_Ushanka: OEC_CIS_Beanie_Green
	{
		author = "OEC Extension";
        displayName = "[OEC] Ushanka";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_ushanka_ca.paa";
		descriptionShort = "No Armor";
		model = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\ushanka_co.paa"};
		class ItemInfo: HeadGearItem
		{
			hiddenSelections[] = {"Camo"};
			uniformModel = "\rhsafrf\addons\rhs_infantry3\gear\head\rhs_ushanka";
		};
	};

	class OEC_CIS_Helmet_Tsh4: H_HelmetB
	{
		author = "OEC Extension";
        displayName = "[OEC] Tsh-4";
		Scope = 2;
        scopeArsenal = 2;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_tsh4_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\crew_equip_co.paa"};
		class ItemInfo: HeadGearItem
		{
			mass = 5;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Tsh4";
            variant = "standard";
        };
	};

	class OEC_CIS_Helmet_Tsh4_Balaclava: OEC_CIS_Helmet_Tsh4
	{
		displayName = "[OEC] Tsh-4 + Balaclava";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_tsh4_bala_ca.paa";
		allowedFacewear[] = {};
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_bala";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_bala";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Tsh4";
            variant = "bala";
        };
	};

	class OEC_CIS_Helmet_Tsh4_ESS: OEC_CIS_Helmet_Tsh4
	{
		displayName = "[OEC] Tsh-4 + Balaclava + ESS";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\headgear\rhs_tsh4_ess_bala_ca.paa";
		allowedFacewear[] = {};
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess_bala";
		class ItemInfo: ItemInfo
		{
			mass = 6;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_tsh4_ess_bala";
		};
		class XtdGearInfo
        {
            model = "OEC_ACEX_Helmet_CIS_Tsh4";
            variant = "ess";
        };
	};

    //----------------------------------------------------------//
    //ZOMBIE GEAR
    //----------------------------------------------------------//

    class OEC_Misc_Helmet_Headcrab: H_HelmetB
	{
        author = "OEC Extension";
        displayName = "[OEC] Headcrab";
		picture = "";
		Scope = 1;
		allowedFacewear[] = {};

		model = "WBK_CombineAlienShit\HLA_Headgear_Headcrab_Spine3.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\headcrab_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\headcrab.rvmat"};
		class ItemInfo: HeadgearItem
		{
			modelSides[] = {2};
			_generalMacro = "HeadgearItem";
			hitpointName = "HitHead";
			containerclass = "Supply0";
			mass = 30;
			uniformmodel = "WBK_CombineAlienShit\HLA_Headgear_Headcrab_Spine3.p3d";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\headcrab_tex.paa"};
			hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\headcrab.rvmat"};
		};
	};
    class OEC_Zombie_Uniform_Soldier: OEC_Overwatch_Uniform_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[OEC] Zombine Soldier Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Unit_Zombine_Soldier";
            scope = 2;
            containerClass = "supply0";
        };
    };
    class OEC_Zombie_Vest_Soldier: OEC_Overwatch_Vest_Base
    {
        displayName = "[OEC] Zombine Soldier Vest";
        scope = 2;
        scopeAresenal = 2;
        hiddenSelectionsTextures[] = 
        {
            "\OECExtension\Gear\data\zombie_soldier_pants.paa",
            "\OECExtension\Gear\data\zombie_soldier_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
            {
                "\OECExtension\Gear\data\zombie_soldier_pants.paa",
            "\OECExtension\Gear\data\zombie_soldier_upperArmor.paa"
            };
            containerClass = "supply200";
		};
        class XtdGearInfo{};
    };

    //----------------------------------------------------------//
    //REBEL GEAR
    //----------------------------------------------------------//

    class OEC_Rebel_Civ_Uniform_White: OEC_CIS_Uniform_Flora
	{
		scope = 2;
        modelSides[] = {2,0};
        displayName = "[OEC] Civilian Jumpsuit (White)";
		author = "OEC Extension";
		picture = "\hl_civ_characters\ui\icon_u_civ_beige_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "OEC_Uniform_Rebel_Civ_White_Base_Vehicle";
			containerClass = "Supply0";
			mass = 40;
		};
	};
    class OEC_Rebel_Civ_Uniform_Blue: OEC_Rebel_Civ_Uniform_White
	{
		scope = 2;
        displayName = "[OEC] Civilian Jumpsuit (Blue)";
		author = "OEC Extension";
		picture = "\hl_civ_characters\ui\icon_u_civ_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "OEC_Uniform_Rebel_Civ_Blue_Base_Vehicle";
			containerClass = "Supply0";
			mass = 40;
		};
	};
};

class XtdGearModels
{
    class CfgGlasses
    {
		class OEC_ACEX_Goggles_CIS_APR
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Respirator Variants";
                values[] = 
                {
                    "olive",
                    "black"
                };
                class olive { label = "Olive"; };
                class black { label = "Black"; };
            };
        };


		class OEC_ACEX_Goggles_CIS_Bala
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Balaclava Variants";
                values[] = 
                {
                    "bala1",
                    "bala2"
                };
                class bala1 { label = "Var. 1"; };
                class bala2 { label = "Var. 2"; };
            };
        };
	};

    class CfgVehicles
    {
		class OEC_ACEX_Backpack_CMB_Oxygen
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Backpack Variants";
                values[] = 
                {
                    "light",
                    "dark"
                };
                class light { label = "Light"; };
                class dark { label = "Dark"; };
            };
        };

        class OEC_ACEX_Backpack_CMB_Empty
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Backpack Variants";
                values[] = 
                {
                    "light",
                    "dark"
                };
                class light { label = "Light"; };
                class dark { label = "Dark"; };
            };
        };
	};

    class CfgWeapons
    {
		class OEC_ACEX_Uniform_CMB_Soldier
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Uniform Variants";
                values[] = 
                {
                    "soldier",
                    "at",
                    "ce",
                    "medic",
					"recon"
                };
                class soldier { label = "Soldier"; };
                class at { label = "AT"; };
                class ce { label = "CE"; };
                class medic { label = "Medic"; };
				class recon { label = "Recon"; };
            };
        };

        class OEC_ACEX_Uniform_CMB_TL
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Uniform Variants";
                values[] = 
                {
                    "norm",
                    "at",
                    "ce"
                };
                class norm { label = "TL"; };
                class at { label = "TL - AT"; };
                class ce { label = "TL - CE"; };
            };
        };

        class OEC_ACEX_Uniform_CMB_Elite
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Uniform Variants";
                values[] = 
                {
                    "sl",
                    "at",
                    "ce",
                    "reconSL",
                    "medicNCO"
                };
                class sl { label = "SL"; };
                class at { label = "SL - AT"; };
                class ce { label = "SL - CE"; };
                class reconSL { label = "Recon SL"; };
                class medicNCO { label = "Medic NCO"; };
            };
        };

        class OEC_ACEX_Vest_CMB_Soldier
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Vest Variants";
                values[] = 
                {
                    "soldier",
                    "at",
                    "medic",
					"recon"
                };
                class soldier { label = "Soldier"; };
                class at { label = "AT"; };
                class medic { label = "Medic"; };
				class recon { label = "Recon"; };
            };
        };

        class OEC_ACEX_Vest_CMB_TL
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Vest Variants";
                values[] = 
                {
                    "norm",
                    "at"
                };
                class norm { label = "TL"; };
                class at { label = "TL - AT"; };
            };
        };

        class OEC_ACEX_Vest_CMB_Elite
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Vest Variants";
                values[] = 
                {
                    "sl",
                    "at",
                    "ce",
                    "reconSL",
                    "medicNCO"
                };
                class sl { label = "SL"; };
                class at { label = "SL - AT"; };
                class ce { label = "SL - CE"; };
                class reconSL { label = "Recon SL"; };
                class medicNCO { label = "Medic NCO"; };
            };
        };
	
        class OEC_ACEX_Helmet_CMB_Soldier
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "soldier",
                    "at",
                    "ce",
                    "tl",
                    "medic",
					"recon"
                };
                class soldier { label = "Soldier"; };
                class at { label = "AT"; };
                class ce { label = "CE"; };
                class tl { label = "TL"; };
                class medic { label = "Medic"; };
				class recon { label = "Recon"; };
            };
        };

        class OEC_ACEX_Helmet_CMB_Elite
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "sl",
                    "medicNCO",
                    "reconSL"
                };
                class sl { label = "SL"; };
                class medicNCO { label = "Medic NCO"; };
                class reconSL { label = "Recon"; };
            };
        };
    
        class OEC_ACEX_Vest_CIS_6B13
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "6b13 Variants";
                values[] = 
                {
                    "plain",
                    "pouches",
                    "VOG",
					"radio",
					"headset"
                };
                class plain { label = "Plain"; };
                class Pouches { label = "Pouches"; };
                class VOG { label = "VOGs"; };
				class radio { label = "Radio"; };
				class headset { label = "Headset"; };
            };
        };

        class OEC_ACEX_Vest_Chicom
        {
            label = "";
            author = "Dirt's OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Chicom Variants";
                values[] = 
                {
                    "olive",
                    "khk"
                };
                class olive { label = "Olive"; };
                class khk { label = "Khaki"; };
            };
        };

        class OEC_ACEX_Vest_Pouches
        {
            label = "";
            author = "Dirt's OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Pouch Variants";
                values[] = 
                {
                    "belt1"
                };
                class belt1 { label = "Single"; };
            };
        };

        class OEC_ACEX_Helmet_CIS_Basic
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "white",
                    "black"
                };
                class white { label = "White"; };
                class black { label = "Black"; };
            };
        };

		class OEC_ACEX_Helmet_CIS_Altyn
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "up",
                    "down"
                };
                class up { label = "Visor Up"; };
                class down { label = "Visor Down"; };
            };
        };

		class OEC_ACEX_Helmet_CIS_6b26
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "green",
                    "greeness",
					"flora",
                    "floraess"
                };
                class green { label = "Green"; };
                class greeness { label = "Green + ESS"; };
				class flora { label = "Flora"; };
                class floraess { label = "Flora + ESS"; };
            };
        };

		class OEC_ACEX_Helmet_CIS_Tsh4
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Helmet Variants";
                values[] = 
                {
                    "standard",
                    "bala",
					"ess"
                };
                class standard { label = "Standard"; };
                class bala { label = "Balaclava"; };
				class ess { label = "ESS"; };
            };
        };
    };
};
