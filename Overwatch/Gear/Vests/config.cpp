class CfgPatches
{
    class OEC_Extension_Overwatch_Gear_Vests
    {
        addonRootClass = "OEC_Extension_Overwatch_Gear";
        requiredAddons[] =
        {
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F"
        };
        units[] = {};
        weapons[] = 
        {
            "OEC_Overwatch_Vest_Soldier",
            "OEC_Overwatch_Vest_AT",
            "OEC_Overwatch_Vest_Medic",
            "OEC_Overwatch_Vest_Recon",
            "OEC_Overwatch_Vest_TL",
            "OEC_Overwatch_Vest_Elite",
            "OEC_Overwatch_Vest_Recon_TL",
            "OEC_Overwatch_Vest_Wallhamer_Heavy",
            "OEC_Overwatch_Vest_Wallhammer_Light",
            "OEC_Overwatch_Vest_APF"
        };
    };
};

class CfgWeapons
{
    class V_RebreatherB;
    class VestItem;

    class OEC_Overwatch_Vest_Base: V_RebreatherB
    {
        scope = 1;
        scopeAresenal = 1;
        hiddenSelections[] = {"camo","camo1"};
	    hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Soldier\soldier_pants.paa",
            "HL_Combine\data\Soldier\soldier_upperArmor.paa"
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
                "HL_Combine\data\Soldier\soldier_pants.paa",
                "HL_Combine\data\Soldier\soldier_upperArmor.paa"
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
	    			armor = 13.5;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.8;
	    		};
	    		class Chest
	    		{
	    			HitpointName = "HitChest";
	    			armor = 13.5;
	    			PassThrough = 0.08975;
                    explosionShielding = 0.8;
	    		};
    			class Diaphragm
    			{
				    HitpointName = "HitDiaphragm";
			    	armor = 13.5;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Abdomen
    			{
				    hitpointName = "HitAbdomen";
				   	armor = 13.5;
					PassThrough = 0.08975;
                    explosionShielding = 0.8;
		    	};
	    		class Body
    			{
				    hitpointName = "HitBody";
				   	armor = 13.5;
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
            "HL_Combine\data\Coordinator\Coordinator_pants.paa",
            "HL_Combine\data\Coordinator\Coordinator_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Coordinator\Coordinator_pants.paa",
                "HL_Combine\data\Coordinator\Coordinator_upperArmor.paa"
            };
            containerClass = "supply500";
		};
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Soldier";
            variant = "at";
        };
    };

    class OEC_Overwatch_Vest_Medic: OEC_Overwatch_Vest_Soldier
    {
        displayName = "[OEC] Combine Soldier Vest - Medic";
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
            {
                "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
                "HL_Combine\data\Urban\Urban_Shotgunner_upperArmor.paa"
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
            "HL_Combine\data\ranger\ranger_pants.paa",
            "HL_Combine\data\ranger\ranger_upperArmor.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelectionsTextures[] =
            {
                "HL_Combine\data\ranger\ranger_pants.paa",
                "HL_Combine\data\ranger\ranger_upperArmor.paa"
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
        displayName = "[OEC] Combine Soldier Vest - TL";
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
            model = "OEC_ACEX_Vest_CMB_Soldier";
            variant = "tl";
        };
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

    class OEC_Overwatch_Vest_Recon_TL: OEC_Overwatch_Vest_Elite
    {
        displayName = "[OEC] Combine Elite Vest - Recon";
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\wpu\wpu_upperArmor.paa",
            "HL_Combine\data\wpu\wpu_collar.paa"
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
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Wallhammer";
            variant = "heavy";
        };
    };

    class OEC_Overwatch_Vest_Wallhammer_Light: OEC_Overwatch_Vest_Wallhammer_Heavy
    {
        displayName = "[OEC] Wallhamer Vest - Light";
        model = "WBK_AdditionalGear\A_HalfLife_Wallhammer.p3d";
        hiddenSelectionsTextures[]={};
        class ItemInfo: ItemInfo
		{
			uniformModel = "WBK_AdditionalGear\A_HalfLife_Wallhammer.p3d";
			containerClass="Supply300";
			mass=90;
			hiddenSelections[]=
		    {
				"camo"
		    };
        };
        class XtdGearInfo
        {
            model = "OEC_ACEX_Vest_CMB_Wallhammer";
            variant = "light";
        };
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
};

class XtdGearModels
{
    class CfgWeapons
    {
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
					"tl",
					"recon"
                };
                class soldier { label = "Soldier"; };
                class at { label = "AT"; };
                class medic { label = "Medic"; };
				class tl { label = "TL"; };
				class recon { label = "Recon"; };
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
                    "reconSL"
                };
                class sl { label = "SL"; };
                class reconSL { label = "Recon"; };
            };
        };

        class OEC_ACEX_Vest_CMB_Wallhammer
        {
            label = "";
            author = "OEC Extension";
            options[] = { "variant" };
            class variant
            {
                label = "Vest Variants";
                values[] = 
                {
                    "light",
                    "heavy"
                };
                class light { label = "Light"; };
                class heavy { label = "Heavy"; };
            };
        };
	};
};