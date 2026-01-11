class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Uniforms_CIS_M88_Winter
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Uniforms_Rebel";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Uniforms_Rebel"
        };
        units[] = 
        {
            "OEC_Uniform_Rebel_Civ_White_Base_Vehicle",
            "OEC_Uniform_Rebel_Civ_Blue_Base_Vehicle"
        };
        weapons[] = 
        {
            "OEC_Rebel_Civ_Uniform_White",
            "OEC_Rebel_Civ_Uniform_Blue"
        };
    };
};

class CfgWeapons
{
    class UniformItem;
    class Uniform_Base;
	class OEC_CIS_Uniform_Flora
	{
		class ItemInfo;
	};

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

class cfgVehicles
{
    class OEC_Units_CIS_Infantry_Base;
	class OEC_Uniform_Rebel_Civ_White_Base_Vehicle: OEC_Units_CIS_Infantry_Base
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
		hiddenSelectionsTextures[] = {"hl_civ_characters\data\citizen_beige_co.paa"};
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
		hiddenSelectionsTextures[] = {"hl_civ_characters\data\citizen_co.paa"};
	};

   /* class Item_Base_F;
    class OEC_CIS_Uniform_M88_Winter_Vehicle: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[OEC] M88 (Officer)";
		author = "OEC Extension";
		vehicleClass = "ItemsHeadgear";
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_Uniforms";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class OEC_CIS_Uniform_M88_Winter
			{
				name = "OEC_CIS_Uniform_M88_Winter";
				count = 1;
			};
		};
    };*/
};