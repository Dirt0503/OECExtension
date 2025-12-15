class CfgPatches
{
    class OEC_Extension_Overwatch_Gear_Uniforms
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
        units[] = 
        {
            "OEC_Overwatch_Uniform_Soldier_Vehicle",
            "OEC_Overwatch_Uniform_AT_Vehicle",
            "OEC_Overwatch_Uniform_Medic_Vehicle",
            "OEC_Overwatch_Uniform_TL_Vehicle",
            "OEC_Overwatch_Uniform_Recon_Vehicle",
            "OEC_Overwatch_Uniform_Elite_Vehicle",
           /*"OEC_Overwatch_Uniform_Assassin_1_Vehicle",
            "OEC_Overwatch_Uniform_Assassin_2_Vehicle",*/
            "OEC_Overwatch_Uniform_Wallhammer_Vehicle",
            "OEC_Overwatch_Uniform_APU_Vehicle"
        };
        weapons[] = 
        {
            "OEC_Overwatch_Uniform_Base",
            "OEC_Overwatch_Uniform_Soldier",
            "OEC_Overwatch_Uniform_AT",
            "OEC_Overwatch_Uniform_Medic",
            "OEC_Overwatch_Uniform_TL",
            "OEC_Overwatch_Uniform_Recon",
            "OEC_Overwatch_Uniform_Elite",
            //"OEC_Overwatch_Uniform_Assassin_1",
            //"OEC_Overwatch_Uniform_Assassin_2",
            "OEC_Overwatch_Uniform_Wallhammer",
            "OEC_Overwatch_Uniform_APU"
        };
    };
};

class CfgWeapons
{
	class Uniform_Base;
    class UniformItem;

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
			containerClass = "Supply30";
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
            uniformClass = "OEC_Overwatch_Uniform_Soldier_Vehicle";
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
        displayName = "[OEC] Combine AT Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_AT_Vehicle";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "at";
        };
    };
    class OEC_Overwatch_Uniform_Medic: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Medic Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_Medic_Vehicle";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "medic";
        };
    };
    class OEC_Overwatch_Uniform_Recon: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Recon Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_Recon_Vehicle";
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
            uniformClass = "OEC_Overwatch_Uniform_TL_Vehicle";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Soldier";
            variant = "tl";
        };
    };
    class OEC_Overwatch_Uniform_Elite: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Elite Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_Elite_Vehicle";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Elite";
            variant = "sl";
        };
    };
    class OEC_Overwatch_Uniform_Recon_TL: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Recon TL Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_Recon_TL_Vehicle";
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Uniform_CMB_Elite";
            variant = "reconSL";
        };
    };
   /* class OEC_Overwatch_Uniform_Assassin_1: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Assassin Uniform [1]";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_Assassin_1_Vehicle";
        };
    };
    class OEC_Overwatch_Uniform_Assassin_2: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Combine Assassin Uniform [2]";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_Assassin_2_Vehicle";
        };
    };*/

    class OEC_Overwatch_Uniform_Wallhammer: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] Wallhammer Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_Wallhammer_Vehicle";
        };
        class XtdGearInfo{};
    };
    class OEC_Overwatch_Uniform_APF: OEC_Overwatch_Uniform_Soldier
    {
        displayName = "[OEC] APF Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "OEC_Overwatch_Uniform_APF_Vehicle";
        };
        class XtdGearInfo{};
    };
};

class CfgVehicles
{
    class OEC_Overwatch_Unit_Base;

    class OEC_Overwatch_Uniform_Soldier_Vehicle: OEC_Overwatch_Unit_Base
    {
        scope = 1;
        scopeCurator = 0;
        uniformClass = "OEC_Overwatch_Uniform_Soldier";
    };
    
    class OEC_Overwatch_Uniform_AT_Vehicle: OEC_Overwatch_Uniform_Soldier_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_AT";
        hiddenSelectionsTextures[] =
        {
            "HL_Combine\data\Coordinator\Coordinator_torso.paa",
            "HL_Combine\data\Coordinator\Coordinator_pants.paa",
            "HL_Combine\data\Coordinator\Coordinator_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Coordinator\Coordinator_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
    };
    
    class OEC_Overwatch_Uniform_Medic_Vehicle: OEC_Overwatch_Uniform_Soldier_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_Medic";
        hiddenSelectionsTextures[]=
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
    };

    class OEC_Overwatch_Uniform_Recon_Vehicle: OEC_Overwatch_Uniform_Soldier_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_Recon";
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\ranger\ranger_torso.paa",
            "HL_Combine\data\ranger\ranger_pants.paa",
            "HL_Combine\data\ranger\ranger_upperArmor.paa",
            "HL_Combine\data\ranger\ranger_lowerArmor.paa",
            "HL_Combine\data\ranger\ranger_boots.paa",
            "HL_Combine\data\ranger\ranger_gloves.paa"
        };
    };

    class OEC_Overwatch_Uniform_TL_Vehicle: OEC_Overwatch_Uniform_Soldier_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_TL";
        hiddenSelectionsTextures[]=
        {
            "HL_Combine\data\Beta\Beta_torso.paa",
            "HL_Combine\data\Beta\Beta_pants.paa",
            "HL_Combine\data\Beta\Beta_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Beta\Beta_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
    };

    class OEC_Overwatch_Uniform_Elite_Vehicle: OEC_Overwatch_Uniform_Soldier_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_Elite";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5"
        };
		hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\elite\elite_torso.paa",
            "HL_Combine\data\elite\elite_pants.paa",
            "HL_Combine\data\elite\elite_upperArmor.paa",
            "HL_Combine\data\elite\elite_boots.paa",
            "HL_Combine\data\elite\elite_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
    };

    class OEC_Overwatch_Uniform_Recon_TL_Vehicle: OEC_Overwatch_Uniform_Elite_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_Recon_TL";
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\wpu\wpu_torso.paa",
            "HL_Combine\data\wpu\wpu_pants.paa",
            "HL_Combine\data\wpu\wpu_upperArmor.paa",
            "HL_Combine\data\wpu\wpu_boots.paa",
            "HL_Combine\data\wpu\wpu_gloves.paa"
        };
    };

    /*class OEC_Overwatch_Uniform_Assassin_1_Vehicle: OEC_Overwatch_Uniform_Soldier_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_Assassin_1";
        model = "\@Combain\CombainAssassin.p3d";
        hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
    };

    class OEC_Overwatch_Uniform_Assassin_2_Vehicle: OEC_Overwatch_Uniform_Assassin_1_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_Assassin_2";
        model = "@Combain\CombainAssassin2.p3d";
    };*/

    class OEC_Overwatch_Uniform_Wallhammer_Vehicle: OEC_Overwatch_Uniform_Assassin_1_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_Wallhammer";
        model = "\WBK_FixingFactory\charger\CombainWallhamer.p3d";
    };

    class OEC_Overwatch_Uniform_APF_Vehicle: OEC_Overwatch_Uniform_Assassin_1_Vehicle
    {
        uniformClass = "OEC_Overwatch_Uniform_APF";
        model = "@Combain\CombainSuppressor.p3d";
    };
};

class XtdGearModels
{
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
                    "medic",
					"tl",
					"recon"
                };
                class soldier { label = "Soldier"; };
                class at { label = "AT"; };
                class medic { label = "Medic"; };
				class tl { label = "Team Lead"; };
				class recon { label = "Recon"; };
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
                    "reconSL"
                };
                class sl { label = "Squad Lead"; };
                class reconSL { label = "Recon SL"; };
            };
        };
	};
};
