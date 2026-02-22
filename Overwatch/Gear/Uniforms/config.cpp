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
            /*"OEC_Overwatch_Unit_Soldier",
            "OEC_Overwatch_Unit_AT",
            "OEC_Overwatch_Unit_Medic",
            "OEC_Overwatch_Unit_TL",
            "OEC_Overwatch_Unit_Recon",
            "OEC_Overwatch_Unit_Elite",
            "OEC_Overwatch_Unit_Wallhammer",
            "OEC_Overwatch_Unit_Airwatch",
            "OEC_Overwatch_Unit_APU"*/
        };
        weapons[] = 
        {
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
            "OEC_Overwatch_Uniform_APF"
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
	};
};
