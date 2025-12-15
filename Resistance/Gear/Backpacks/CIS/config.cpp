class CfgPatches
{
    class OEC_Extension_Resistance_Gear_Backpacks_CIS
    {
        addonRootClass = "OEC_Extension_Resistance_Gear_Backpacks";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance_Gear_Backpacks"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgVehicles
{
	class B_AssaultPack_Base;
    class OEC_CIS_Backpack_RD54: B_AssaultPack_Base
	{
        scope = 2;
        scopeArsenal = 2;
        author = "OEC Extension";
        displayName = "[OEC] RD-54";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_rd54_flora2_ca.paa";
        model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RD54_backpack_nobodyarmor";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\RD54_flora2_co.paa"};
        maximumLoad = 100;
        mass = 35;
	};

    class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    class OEC_CIS_Backpack_SCBA_Bag: Bag_Base
	{
        scope = 2;
        scopeArsenal = 2;
        author = "OEC Extension";
        displayName = "[OEC] Self-Contained Breathing Apparatus";
        descriptionShort = "Caution - Explosive!";
        picture = "\a3\Supplies_F_Enoch\Bags\Data\UI\icon_B_SCBA_01_ca.paa";
        model = "a3\Supplies_F_Enoch\Bags\B_SCBA_01_F.p3d";
        hiddenSelections[] = {"Camo","Hose_APR","Hose_Regulator"};
        hiddenSelectionsTextures[] = {"a3\Supplies_F_Enoch\bags\data\b_scba_01_co.paa","",""};
        maximumLoad = 0;
        mass = 120;
	};
  
	class OEC_CIS_Backpack_Engineer_RK30: B_AssaultPack_Base
	{
        scope = 2;
        scopeArsenal = 2;
        author = "OEC Extension";
        displayName = "[OEC] RK-30 Engineer Backpack";
        model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_assault_umbts_engineer_ca.paa";
        hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
        maximumLoad = 150;
        mass = 35;
        class TransportMagazines
        {
            class xx_OEC_GrenMix_mag
            {
                magazine = "OEC_Magazine_SmokeStun_6Rnd";
                count = 15;
            };
        };
	};

	class OEC_CIS_Backpack_RPG_Bag: OEC_CIS_Backpack_RD54
	{
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_rpg_6b3_ca.paa";
		displayName = "[OEC] 6B3 RPG Carrier";
		model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_RPG_backpack_6b3";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\rpg_pouchs_co.paa"};

		class TransportMagazines
		{
			class _xx_OEC_rpg7_PG7V_mag
			{
				magazine = "OEC_Magazine_PG7V";
				count = 2;
			};
		};
	};

	class OEC_CIS_Backpack_Medic_Bag: B_AssaultPack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "OEC Extension";
    	displayName = "[OEC] CIS Medic Bag";
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_medic_bag";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_medic_bag_ca.paa";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\gearpack3_ranets_co.paa"};
		maximumLoad = 100;
		mass = 15;
		class TransportItems
		{
			class _xx_Elastic
			{
				name = "ACE_elasticBandage";
				count = 10;
			};
			class _xx_Packing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_quikClot
			{
				name = "ACE_quikClot";
				count = 5;
			};
			class _xx_painKillers
			{
				name = "ACE_painkillers";
				count = 2;
			};
			class _xx_epinephrine
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class _xx_morphrine
			{
				name = "ACE_morphine";
				count = 1;
			};
			class _xx_plasma
			{
				name = "ACE_plasmaIV_500";
				count = 2;
			};
		};
	};

	class OEC_CIS_Backpack_R148: B_AssaultPack_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "OEC Extension";
    	displayName = "[OEC] CIS Radio Pack";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\backpacks\rhs_r148_ca.paa";
		model = "\rhsafrf\addons\rhs_infantry3\gear\backpacks\rhs_R_148_backpack";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry3\data\r148_co.paa"};
		maximumLoad = 10;
		mass = 5;
	};

	class OEC_CIS_Throwbag: Bag_Base
	{
		author = "OEC Extension";
    	displayName = "[OEC] CIS Throwbag - Gray";
		scope = 2;
		scopeArsenal = 2;
		mapSize = 0.47;
		hiddenSelections[] = {"Camo"};
		model = "\A3\Supplies_F_Orange\Bags\B_Messenger_F.p3d";
		maximumLoad = 30;
		mass = 20;
		picture = "\A3\Supplies_F_Orange\Bags\Data\UI\Icon_B_Messenger_Gray_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\B_Messenger_Gray_F_CO.paa"};
	};
};