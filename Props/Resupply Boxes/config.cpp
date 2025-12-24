class CfgPatches
{
    class OEC_Extension_Props_Resupply
    {
        addonRootClass = "OEC_Extension_Props";
        requiredAddons[] = 
        {
            "A3_Weapons_F_Ammoboxes",
            "A3_Weapons_F",
            "ace_interaction",
            "OEC_Extension_Resistance_Units",
            "OEC_Extension_Overwatch_Weapons"
        };
        units[] = 
        {
            "OEC_Prop_Resupply_bigSupply"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
	class ThingX;
	class ReammoBox_F: ThingX
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class NATO_Box_Base: ReammoBox_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
	};
    class ReammoBox;
    class B_supplyCrate_F: ReammoBox_F
    {
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
	};
	class Box_NATO_Ammo_F: NATO_Box_Base
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions{};
		};
	};
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class OEC_Prop_Resupply_bigSupply: B_supplyCrate_F
	{
		scope = 2;
		scopecurator = 2;
		author = "OEC Extension";
        displayName = "Large Resupply";
		editorCategory = "OEC_EdCat_Supply";
		editorSubcategory = "OEC_EdSubCat_resup";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_supplyCrate_F.jpg";
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\a3\Supplies_F_Orange\Ammoboxes\Data\supplydrop_idap_co.paa"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
        transportMaxWeapons = 50;
		transportMaxMagazines = 999;
		supplyRadius = -1;
		memoryPointSupply = "doplnovani";
		icon = "iconCrateAmmo";
		armor = 1000;
		ACE_maxWeightCarry = 20000;
		ACE_maxWeightDrag = 20000;
		maximumLoad = 2900;
		ace_cargo_size = 1;
		class ACE_Actions
		{
			class ACE_MainActions
			{
				condition = "true";
				displayName = "$STR_ace_interaction_MainAction";
				distance = 15;
				selection = "doplnovani";
				position = "";
			};
		};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 1;
			};
		};
		class TransportMagazines
        {
			class XX_OEC_AR2_Mag
			{
				magazine = "OEC_Magazine_AR2";
				count = 150;
			};
			class XX_OEC_OICW_Mag
			{
				magazine = "OEC_Magazine_OICW";
				count = 150;
			};
			class XX_OEC_PulseSMG_Mag
			{
				magazine = "OEC_Magazine_PulseSMG";
				count = 150;
			};
			class XX_OEC_SMG46_Mag
			{
				magazine = "OEC_SMG46_Mag";
				count = 250;
			};
			class XX_OEC_USP_Mag
			{
				magazine = "OEC_Magazine_USP";
				count = 30;
			};
			class XX_OEC_OICW_HE_6rnd
			{
				magazine = "OEC_Magazine_OICW_HE_6rnd";
				count = 60;
			};
			class XX_OEC_OICW_Smoke_6rnd
			{
				magazine = "OEC_Magazine_OICW_Smoke_6rnd";
				count = 60;
			};
			class XX_OEC_OICW_Stun_3rnd
			{
				magazine = "OEC_Magazine_OICW_Stun_3rnd";
				count = 60;
			};
			class XX_OEC_SMG46_HE_2Rnd
			{
				magazine = "OEC_Magazine_SMG46_HE_2Rnd";
				count = 60;
			};
			class XX_OEC_SMG46_Smoke_2Rnd
			{
				magazine = "OEC_Magazine_SMG46_Smoke_2Rnd";
				count = 60;
			};
			class XX_OEC_SMG46_Stun_1Rnd
			{
				magazine = "OEC_Magazine_SMG46_Stun_1Rnd";
				count = 60;
			};
			class XX_OEC_SIPL_HE_Mag
			{
				magazine = "OEC_Magazine_SIPL_HE44";
				count = 40;
			};
			class XX_OEC_SIPL_HEAT55_Mag
			{
				magazine = "OEC_Magazine_SIPL_HEAT55";
				count = 40;
			};
			class XX_OEC_SIPL_HEAT75_Mag
			{
				magazine = "OEC_Magazine_SIPL_HEAT75";
				count = 40;
			};
            class XX_OEC_Magazine_MK3A2
			{
				magazine = "OEC_Magazine_MK3A2";
				count = 60;
			}; 
            class XX_OEC_Magazine_WallhammerShotgun_8Rnd
			{
				magazine = "OEC_Magazine_WallhammerShotgun_8Rnd";
				count = 80;
			};
            class XX_OEC_Magazine_WallhammerShotgun_8Rnd_Shredder
			{
				magazine = "OEC_Magazine_WallhammerShotgun_8Rnd_Shredder";
				count = 80;
			}; 
            class XX_OEC_Magazine_APFSuppressor_100Rnd
			{
				magazine = "OEC_Magazine_APFSuppressor_100Rnd";
				count = 60;
			};
			class XX_OEC_Magazine_cmbSrifle
			{
				magazine = "OEC_Magazine_cmbSrifle";
				count = 120;
			};
			class XX_OEC_Magazine_cmbSrifle_AP
			{
				magazine = "OEC_Magazine_cmbSrifle_AP";
				count = 30;
			};
			class XX_OEC_Magazine_R1
			{
				magazine = "OEC_Magazine_R1";
				count = 40;
			}; 
		};
		class TransportWeapons
		{
			class _xx_OEC_Launcher_SIPL0
			{
				weapon = "OEC_Weapons_SIPL0";
				count = 20;
			};
		};
		class TransportItems
		{
			class XX_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 60;
			};
			class XX_ACE_splint
			{
				name = "ACE_splint";
				count = 80;
			};
			class XX_ACE_plasmaIV_250
			{
				name = "ACE_plasmaIV_250";
				count = 100;
			};
			class XX_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 100;
			};
			class XX_ACE_plasmaIV_1000
			{
				name = "ACE_plasmaIV";
				count = 100;
			};
			class XX_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 500;
			};
			class XX_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 500;
			};
			class XX_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 500;
			};
			class XX_ACE_painkiller
			{
				name = "ACE_Painkillers";
				count = 60;
			};
			class XX_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 100;
			};
			class XX_ACE_morphine
			{
				name = "ACE_morphine";
				count = 100;
            };
			class XX_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 5;
			};
		};
		class TransportBackpacks{};
		class SimpleObject
		{
			eden = 1;
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.1;
			verticalOffsetWorld = 0;
			init = "''";
		};
	};

    /*class OEC_Prop_Resupply_bigMedic: OEC_Prop_Resupply_bigAmmo
	{
		displayName = "Large Medical Resupply";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_supplyCrate_F.jpg";
		hiddenSelectionsTextures[] = {"\a3\Supplies_F_Orange\Ammoboxes\Data\supplydrop_idap_co.paa"};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class XX_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 60;
			};
			class XX_ACE_splint
			{
				name = "ACE_splint";
				count = 80;
			};
			class XX_ACE_plasmaIV_250
			{
				name = "ACE_plasmaIV_250";
				count = 100;
			};
			class XX_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 100;
			};
			class XX_ACE_plasmaIV_1000
			{
				name = "ACE_plasmaIV";
				count = 100;
			};
			class XX_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 800;
			};
			class XX_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 800;
			};
			class XX_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 800;
			};
			class XX_ACE_painkiller
			{
				name = "ACE_Painkillers";
				count = 60;
			};
			class XX_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 100;
			};
			class XX_ACE_morphine
			{
				name = "ACE_morphine";
				count = 100;
            };
			class XX_ACE_surgicalKit
			{
				name = "ACE_surgicalKit";
				count = 10;
			};
			class XX_ACE_bodyBag_blue
			{
				name = "ACE_bodyBag_blue";
				count = 20;
			};
		};
	};*/
};