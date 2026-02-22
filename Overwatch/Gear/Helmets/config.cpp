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
            "OECExtension\Overwatch\Gear\Uniforms\data\soldier_helmet.paa",
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
                "OECExtension\Overwatch\Gear\Uniforms\data\soldier_helmet.paa",
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
            "OECExtension\Overwatch\Gear\Uniforms\data\AT_helmet.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\AT_torso.paa",
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
            "OECExtension\Overwatch\Gear\Uniforms\data\engi_helmet.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\engi_torso.paa",
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
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_helmet.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_torso.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_lens.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] =
            {
                "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_helmet.paa",
                "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_torso.paa",
                "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_lens.paa"
            };
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
            "OECExtension\Overwatch\Gear\Uniforms\data\Medic_Elite_helmet.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Medic_Elite_lens.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "OECExtension\Overwatch\Gear\Uniforms\data\Medic_Elite_lens.rvmat"
        };
		subItems[] = {"Integrated_NVG_TI_0_F"};
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\HL_Combine\data\Nemez_Helmet_Elite.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "OECExtension\Overwatch\Gear\Uniforms\data\Medic_Elite_helmet.paa",
                "OECExtension\Overwatch\Gear\Uniforms\data\Medic_Elite_lens.paa"
            };
			hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "OECExtension\Overwatch\Gear\Uniforms\data\Medic_Elite_lens.rvmat"
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
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_helmet.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_lens.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_lens.rvmat"
        };
		class ItemInfo: ItemInfo
		{
			uniformmodel = "\HL_Combine\data\Nemez_Helmet_Elite.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
            {
                "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_helmet.paa",
                "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_lens.paa"
            };
            hiddenSelectionsMaterials[] = 
            {
                "HL_Combine\data\Materials\Armor.rvmat",
                "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_lens.rvmat"
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
};

class XtdGearModels
{
    class CfgWeapons
    {
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
	};
};