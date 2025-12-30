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
		class TransportItems
		{
			class XX_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
			class XX_ACE_splint
			{
				name = "ACE_splint";
				count = 4;
			};
			class XX_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 10;
			};
			class XX_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 8;
			};
			class XX_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 8;
			};
			class XX_ACE_painkiller
			{
				name = "ACE_Painkillers";
				count = 2;
			};
			class XX_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 3;
			};
			class XX_ACE_morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
		};
		class TransportBackpacks {};
		class TransportWeapons {};
		class TransportMagazines {};
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
		armor = 30;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "OEC_Units_CIS_Heavy";
			};
		};
		class TransportItems
		{
			class XX_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 2;
			};
			class XX_ACE_splint
			{
				name = "ACE_splint";
				count = 2;
			};
			class XX_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 5;
			};
			class XX_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 3;
			};
			class XX_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 3;
			};
			class XX_ACE_painkiller
			{
				name = "ACE_Painkillers";
				count = 1;
			};
			class XX_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class XX_ACE_morphine
			{
				name = "ACE_morphine";
				count = 1;
			};
		};
		class TransportBackpacks {};
		class TransportWeapons {};
		class TransportMagazines {};
	};
};