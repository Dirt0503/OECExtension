class CfgPatches
{
    class OEC_Extension_Overwatch_Gear_Helmets
    {
        addonRootClass = "OEC_Extension_Overwatch_Gear";
        requiredAddons[] =
        {
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F",
            "Nemez_Combine_Pack"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_Overwatch_Helmet_Soldier",
            "OEC_Overwatch_Helmet_AT",
            "OEC_Overwatch_Helmet_Medic",
            "OEC_Overwatch_Helmet_Recon",
            "OEC_Overwatch_Helmet_TL",
            "OEC_Overwatch_Helmet_Elite",
            "OEC_Overwatch_Helmet_Recon_TL",
            "OEC_Overwatch_Helmet_Assassin_1",
            "OEC_Overwatch_Helmet_Assassin_2",
            "OEC_Overwatch_Helmet_Wallhammer",
            "OEC_Overwatch_Helmet_APF"
        };
    };
};

class CfgWeapons
{
    class ItemCore;
    class HeadgearItem;
    class ItemInfo;

    class HL2_Combine_Helmet_WPU;
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
            "HL_Combine\data\soldier\soldier_helmet.paa",
            "HL_Combine\data\soldier\soldier_torso.paa",
            "HL_Combine\data\soldier\soldier_lens.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Lens\Blue.rvmat"
        };
		subItems[] = {"Integrated_NVG_TI_0_F"};
        class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformmodel = "\HL_Combine\data\Nemez_Helmet.p3d";
			hiddenSelections[] = {"camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\soldier\soldier_helmet.paa",
                "HL_Combine\data\soldier\soldier_torso.paa",
                "HL_Combine\data\soldier\soldier_lens.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Armor.rvmat",
                "HL_Combine\data\Materials\Lens\Blue.rvmat"
            };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointname = "HitHead";
					armor = 8;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 8;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
			};
		};
    };

    class OEC_Overwatch_Helmet_AT: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine AT Helmet";
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Coordinator\Coordinator_helmet.paa",
            "HL_Combine\data\Coordinator\Coordinator_torso.paa",
            "HL_Combine\data\Coordinator\Coordinator_lens.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Coordinator\Coordinator_helmet.paa",
                "HL_Combine\data\Coordinator\Coordinator_torso.paa",
                "HL_Combine\data\Coordinator\Coordinator_lens.paa"
            };
        };
    };

    class OEC_Overwatch_Helmet_Medic: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Medic Helmet";
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
    };

    class OEC_Overwatch_Helmet_Recon: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Recon Helmet";
        hiddenSelectionsTextures[] =
        {
            "HL_Combine\data\ranger\ranger_helmet.paa",
            "HL_Combine\data\ranger\ranger_torso.paa",
            "HL_Combine\data\ranger\ranger_lens.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\ranger\ranger_helmet.paa",
                "HL_Combine\data\ranger\ranger_torso.paa",
                "HL_Combine\data\ranger\ranger_lens.paa"
            };
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
    };

    class OEC_Overwatch_Helmet_Recon_TL: HL2_Combine_Helmet_WPU
    {
        displayName = "[OEC] Combine Recon TL Helmet";
        picture = "\hl_cmb_overwatch\ui\icon_h_ow_e_ca.paa";
		class ItemInfo: ItemInfo
		{
            class HitpointsProtectionInfo
            {
                class Head
				{
					hitpointname = "HitHead";
					armor = 8;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 8;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
            };
		};
    };

    class OEC_Overwatch_Helmet_Assassin_1: OEC_Overwatch_Helmet_Soldier
    {
        displayName = "[OEC] Combine Assassin Helmet [1]";
        model="\@CombainHelmet\CombainAssassin.p3d";
        picture = "\hl_cmb_overwatch\ui\icon_h_ow_e_ca.paa";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\@CombainHelmet\CombainAssassin.p3d";
            hiddenSelections[] = {};
		    hiddenSelectionsTextures[] = {};
		    hiddenSelectionsMaterials[] = {};
		};
    };

    class OEC_Overwatch_Helmet_Assassin_2: OEC_Overwatch_Helmet_Assassin_1
    {
        displayName = "[OEC] Combine Assassin Helmet [2]";
        model="\WBK_FixingFactory\assasin\CA_2_H.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\WBK_FixingFactory\assasin\CA_2_H.p3d";
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
					armor = 10;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 10;
					visual = "injury_Head";
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
				};
			};
        }
    };

    class OEC_Overwatch_Helmet_APF: OEC_Overwatch_Helmet_Assassin_1
    {
        displayName = "[OEC] APF Helmet";
        picture="\WBK_Combines\grunt\data\icon_helmet.paa";
        model = "WBK_Combines\A_HalfLife_APF_helmet.p3d";
        class ItemInfo: ItemInfo
		{
			uniformModel = "WBK_Combines\A_HalfLife_APF_helmet.p3d";
		};
    };
};