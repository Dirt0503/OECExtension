class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Vests_CIS_ModularCarrier
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Vests_CIS";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Vests_CIS"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_CIS_Vest_ModularCarrier",
            "OEC_CIS_Vest_ModularCarrier_Light",
            "OEC_CIS_Vest_PlateCarrier_Black"
        };
    };
};

class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
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
					armor = 50;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
};