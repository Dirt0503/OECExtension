class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class cmbTaruPod
            {
                file = "\OECExtension\Scripts\OEC_cmbTaruPod.sqf";
				description = "OEC Taru Pod Script";
            };
        };
    };
};

class CfgPatches
{
    class OEC_Extension_Overwatch_Airwatch_Transport
    {
        addonRootClass = "OEC_Extension_Overwatch_Airwatch";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch_Airwatch"
        };
        units[] = {"OEC_Vehicle_Air_Ghosthawk_Unarmed", "OEC_Vehicle_Air_Transport_Pod"};
        weapons[] = {};
    };
};

class CfgVehicles
{
    class B_Heli_Transport_01_F;
    class OEC_Vehicle_Air_Ghosthawk_Unarmed: B_Heli_Transport_01_F
	{
		displayName = "[OEC] UH-80 Ghosthawk";
		slingLoadMaxCargoMass = 4000;
        faction = "OEC_Faction_Combine";
		factionClass = "OEC_Faction_Class_Combine";
        editorCategory = "OEC_EdCat_Combine";
        editorSubCategory = "OEC_EdSubCat_Air";
	};

    class Land_Pod_Heli_Transport_04_covered_F;
    class OEC_Vehicle_Air_Transport_Pod: Land_Pod_Heli_Transport_04_covered_F
	{
		displayName = "[OEC] Infantry Transport Pod";
		scope = 2;
		scopeCurator = 2;
		faction = "OEC_Faction_Combine";
		factionClass = "OEC_Faction_Class_Combine";
        editorCategory = "OEC_EdCat_Supply";
		editorSubcategory = "OEC_EdSubCat_Pods";
		textureList[] = {"Black",1};
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"};
		
		class EventHandlers
		{
			postinit = "_this call oec_fnc_cmbTaruPod;";
			init = "_this setMass 1000;";
		};
	};
};