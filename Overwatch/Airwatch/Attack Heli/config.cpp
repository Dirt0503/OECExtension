class CfgPatches
{
    class OEC_Extension_Overwatch_Airwatch_Attack
    {
        addonRootClass = "OEC_Extension_Overwatch_Airwatch";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch_Airwatch"
        };
        units[] = {"OEC_Vehicle_Air_Blackfoot_Armed"};
        weapons[] = {};
    };
};

class CfgVehicles
{
	class B_Heli_Attack_01_dynamicLoadout_F;

    class OEC_Vehicle_Air_Blackfoot_Armed: B_Heli_Attack_01_dynamicLoadout_F
	{
		displayName = "[OEC] AH-99 Blackfoot";
		slingLoadMaxCargoMass = 4000;
        faction = "OEC_Faction_Combine";
		factionClass = "OEC_Faction_Class_Combine";
        editorCategory = "OEC_EdCat_Combine";
        editorSubCategory = "OEC_EdSubCat_Air";
        slingLoadMinCargoMass = 0.0;
        slingLoadMemoryPoint = "";

	};
};