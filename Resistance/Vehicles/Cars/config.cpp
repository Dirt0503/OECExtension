class CfgPatches
{
    class OEC_Extension_Resistance_Vehicles_Cars
    {
        addonRootClass = "OEC_Extension_Resistance_Vehicles";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Vehicles",
            "rhs_c_heavyweapons",
            "cup_weapons_grenadelaunchers",
            "rhs_c_cars"
        };
        units[] = 
		{
            "OEC_zil131_open_base",
            "OEC_zil131_open_CIS",
            "OEC_Tigr_CIS"
		};
        weapons[] = {};
    };
};

class CfgVehicles
{
	// zil131 truck
    class rhs_zil131_base;
    class OEC_zil131_open_base: rhs_zil131_base
	{
		scope = 1;
		displayName = "ZiL-131 (Passenger)";
		animationList[] = {"cover_hide",1};
		class UserActions{};
	};

	class OEC_zil131_open_CIS: OEC_zil131_open_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zil131_open_msv.paa";
		scope = 2;
        scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Cars";
		crew = "OEC_Units_CIS_Crew";
		//rhs_decalParameters[] = {"['Number', [5,6,7,8], 'Default']","['Label', [9,10], 'Platoon', 12]"};
	};

	// gaz233114 MRAP (Tigr)
    class rhs_tigr_vdv;
	class rhs_tigr_m_vdv: rhs_tigr_vdv
	{
		class Turrets
		{
			class CargoTurret_01;
		};
	};

	class OEC_Tigr_CIS: rhs_tigr_m_vdv
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_m_msv.paa";
		scope = 2;
        scopeCurator = 2;
		side = 0;
		displayName = "GAZ-233114 Tigr (MRAP)";
		dlc = "";
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Cars";
		crew = "OEC_Units_CIS_Crew";
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "OEC_Units_CIS_Heavy";
			};
		};
	};
};