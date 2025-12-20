class CfgPatches
{
    class OEC_Extension_Overwatch_Units
    {
        addonRootClass = "OEC_Extension_Overwatch";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch",
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgFactionClasses
{
    class OEC_Faction_Class_Combine
    {
		displayName = "[OEC] Combine";
		priority = -5;
		side = 1;
		icon = "\rhsusf\addons\rhsusf_main\data\armylogo.paa";
		flag = "\rhsusf\addons\rhsusf_main\data\flag_us_co.paa";
		backpack_tf_faction_radio_api = "tf_rt1523g_rhs";
	};
};

class CfgGroups
{
	class West
	{
		class OEC_Faction_Combine
		{
			name = "[OEC] Combine";
        };
    };
};