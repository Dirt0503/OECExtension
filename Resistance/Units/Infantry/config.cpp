class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class riflemanAssign
            {
                file = "\OECExtension\Scripts\OEC_riflemanAssign.sqf";
				description = "AKS74N Rifleman Equipment Randomization Script";
            };

            class cisMedicAssign
            {
                file = "\OECExtension\Scripts\OEC_cisMedicAssign.sqf";
				description = "CIS Medic Randomization Script";
            };

            class cisJrSargeAssign
            {
                file = "\OECExtension\Scripts\OEC_cisJrSargeAssign.sqf";
				description = "CIS Junior Sergeant Randomization Script";
            };

            class cisSargeAssign
            {
                file = "\OECExtension\Scripts\OEC_cisSargeAssign.sqf";
				description = "CIS Sergeant Randomization Script";
            };

            class cisCrewAssign
            {
                file = "\OECExtension\Scripts\OEC_cisCrewAssign.sqf";
				description = "CIS Spetsnaz Randomization Script";
            };

            class cisHeavyAssign
            {
                file = "\OECExtension\Scripts\OEC_cisHeavyAssign.sqf";
				description = "CIS Heavy Randomization Script";
            };

            class cisGrenAssign
            {
                file = "\OECExtension\Scripts\OEC_cisGrenadierAssign.sqf";
				description = "CIS Grenadier Randomization Script";
            };

            class cisSpetsAssign
            {
                file = "\OECExtension\Scripts\OEC_cisSpetsAssign.sqf";
				description = "CIS Spetsnaz Randomization Script";
            };

            class cisSpottingDrone
            {
                file = "\OECExtension\Scripts\OEC_cisSpottingDrone.sqf";
				description = "CIS Spetsnaz Randomization Script";
            };
        };

    };
};


class CfgPatches
{
    class OEC_Extension_Resistance_Units_Infantry
    {
        addonRootClass = "OEC_Extension_Resistance_Units";
        requiredAddons[] = {};
        units[] = {"OEC_Units_CIS_Infantry_Base", "OEC_Units_CIS_Rifleman", "OEC_Units_CIS_AT", "OEC_Units_CIS_Medic", "OEC_Units_CIS_JrSergeant", "OEC_Units_CIS_Sergeant", "OEC_Units_CIS_Crew", "OEC_Units_CIS_Heavy", "OEC_Units_CIS_Grenadier", "OEC_CIS_Drone", "OEC_Units_CIS_Spetsnaz", "OEC_Units_CIS_Scientist", "OEC_Units_CIS_Officer"};
        weapons[] = {};
    };
};

class DefaultEventHandlers;
class cfgVehicles
{
	class Man;
	class CAManBase;
	class SoldierGB: CAManBase
	{
		class HitPoints;
		class Eventhandlers;
	};

	class OEC_Units_CIS_Infantry_Base: SoldierGB
	{
		scope = 0;
		category = "Men";
		author = "OEC Extension";
		side = 0;
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
		vehicleClass = "OEC_Vehclass_Infantry";
		editorSubcategory = "OEC_EdSubCat_Infantry";
		displayName = "[OEC] CIS Base";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro"};
		genericNames = "RussianMen";
		portrait = "";
		picture = "";
		icon = "iconMan";
		accuracy = 1.6;
		sensitivity = 3;
		threat[] = {1,0.05,0.05};
		camouflage = 1;
		minFireTime = 15;
		canCarryBackPack = 1;
		model = "\rhsafrf\addons\rhs_infantry\rhs_vdv_base.p3d";
		modelSides[] = {0,3};
		nakedUniform = "U_BasicBody";
		uniformClass = "OEC_CIS_Uniform_Flora";

        class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 1;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 1;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 1;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 1;
				radius = 0.18;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 3000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 2.4;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.6;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 3;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.5;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
        };
        cost = 100000;

        class Wounds
        {
            tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_infantry\data\flora.rvmat","rhsafrf\addons\rhs_infantry\data\flora_w1.rvmat","rhsafrf\addons\rhs_infantry\data\flora_w2.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz_w1.rvmat","rhsafrf\addons\rhs_infantry\data\flora_bz_w2.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
        selectionbodywound = "body_injury";
        selectionlarmwound = "l_arm_injury";
        selectionlarmwound1 = "l_arm_injury";
        selectionlarmwound2 = "hl";
        selectionllegwound = "l_leg_injury";
        selectionllegwound1 = "l_leg_injury";
        selectionllegwound2 = "hl";
        selectionrarmwound = "r_arm_injury";
        selectionrarmwound1 = "r_arm_injury";
        selectionrarmwound2 = "hl";
        selectionRLegWound = "r_leg_injury";
        selectionRLegWound1 = "r_leg_injury";
        selectionrlegwound2 = "hl";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        Items[] = {};
        RespawnItems[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_infantry\data\flora_crew_patchless_co.paa"};
		selectionClan = "clan";

		class EventHandlers: EventHandlers{};
    
    };

    class OEC_Units_CIS_Rifleman: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Rifleman";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_RD54";
        weapons[] = {"OEC_Weapons_AKS74N","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_AKS74N","Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_riflemanAssign;";
			};
        };
    };

	class OEC_Units_CIS_AT: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS AT Soldier";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_RPG_Bag";
        weapons[] = {"OEC_Weapons_AKS74U", "OEC_Weapons_RPG7", "Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_AKS74U","OEC_Weapons_RPG7", "Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_riflemanAssign;";
			};
        };
    };

	class OEC_Units_CIS_Medic: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Medic";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Helmet_White","OEC_CIS_Vest_6b13", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_6b13_9sh93", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_Medic_Bag";
        weapons[] = {"OEC_Weapons_AKS74U","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_AKS74U","Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisMedicAssign;";
			};
        };
    };

	class OEC_Units_CIS_JrSergeant: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Junior Sergeant";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Radio", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Radio", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_RD54";
        weapons[] = {"OEC_Weapons_AKS74N_GP25_PKAS","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_AKS74N_GP25_PKAS","Throw","Put"};
        magazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_red"};
        respawnMagazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisJrSargeAssign;";
			};
        };
    };

	class OEC_Units_CIS_Sergeant: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Sergeant";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Headset", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_6b13_9sh93_Headset", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_Backpack_R148";
        weapons[] = {"OEC_Weapons_AKS74N_GP25_PKAS","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_AKS74N_G25_PKAS","Throw","Put"};
        magazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_Red"};
        respawnMagazines[] = {"OEC_Magazine_GDM40", "OEC_Magazine_GDM40","OEC_Magazine_VG40SZ","OEC_Magazine_VG40OP_red"};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisSargeAssign;";
			};
        };
    };

	class OEC_Units_CIS_Crew: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Vehicle Crewman";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "OEC_scarf"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        uniformClass = "";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Glasses_Empty", "OEC_CIS_Vest_6b13", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Glasses_Empty", "OEC_CIS_Vest_6b13", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"OEC_Weapons_AKS74U","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_AKS74U","Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisCrewAssign;";
			};
        };
    };


	// CIS Special Units

	class OEC_Units_CIS_Heavy: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Heavy";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
        uniformClass = "OEC_CIS_Uniform_6sh112";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Vest_ModularCarrier", "OEC_CIS_Facewear_APR", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Vest_ModularCarrier", "OEC_CIS_Facewear_APR", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_SCBA_Bag";
        weapons[] = {"OEC_Weapons_PKM","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_PKM","Throw","Put"};
        magazines[] = {"OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "Smokeshell", "Smokeshell", "Smokeshell"};
        respawnMagazines[] = {"OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "OEC_Magazine_762x51_150Rnd", "Smokeshell", "Smokeshell", "Smokeshell"};

		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisHeavyAssign; ";
			};
        };
    };

	class OEC_Units_CIS_Grenadier: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Grenadier";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
        uniformClass = "OEC_CIS_Uniform_6sh112";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Facewear_APR", "OEC_CIS_Vest_ModularCarrier_Light", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Beanie_Green", "OEC_CIS_Facewear_APR", "OEC_CIS_Vest_ModularCarrier_Light", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_Engineer_RK30";
        weapons[] = {"OEC_Weapons_6G30","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_6G30","Throw","Put"};
        magazines[] = {"OEC_Magazine_SmokeStun_6Rnd", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red"};
        respawnMagazinesagazines[] = {"OEC_Magazine_SmokeStun_6Rnd", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red", "OEC_Magazine_VG40OP_Red"};


		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisGrenAssign;";
			};
        };
    };

	class O_UAV_01_F;
	class OEC_CIS_Drone: O_UAV_01_F
	{
		scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Spotting Drone";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
		class EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisSpottingDrone;";
			};
        };
	};

	class OEC_Units_CIS_Spetsnaz: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Spetsnaz";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Specials";
        uniformClass = "OEC_CIS_Uniform_Gorka_Black";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Facewear_APR_Black", "OEC_CIS_Vest_PlateCarrier_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Facewear_APR_Black", "OEC_CIS_Vest_PlateCarrier_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_SCBA_Bag";
        weapons[] = {"OEC_Weapons_ASVal_PSO1","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_ASVal_PSO1","Throw","Put"};
        magazines[] = {"OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "Smokeshell", "Smokeshell"};
        respawnMagazinesagazines[] = {"OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "OEC_Magazine_9x39mm_SP5_20Rnd", "Smokeshell", "Smokeshell"};


		class EventHandlers: EventHandlers
        {
			class OEC_74N_MagAssign_event
			{
            	init = "_this call oec_fnc_cisSpetsAssign;";
			};
        };
    };
	
	// CIS HVTs
	class OEC_Units_CIS_Scientist: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Scientist";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_HVTs";
        uniformClass = "OEC_CIS_Uniform_CBRN_White";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Helmet_White", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_APR_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Helmet_White", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_APR_Black", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Throwbag";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};

		class EventHandlers {};
    };

	class OEC_Units_CIS_Officer: OEC_Units_CIS_Infantry_Base
    {
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "CIS Officer";
		identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Euro", "Squares"};
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_HVTs";
        uniformClass = "OEC_CIS_Uniform_M88_Winter";
        headgearList[] = {};
        linkedItems[] = {"OEC_CIS_Ushanka", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_Squares_Tinted", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"OEC_CIS_Ushanka", "OEC_CIS_Vest_Beltbag1", "OEC_CIS_Facewear_Squares_Tinted", "ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		backpack = "OEC_CIS_Backpack_R148";
        weapons[] = {"OEC_Weapons_Makarov", "Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_Makarov", "Throw","Put"};
        magazines[] = {"OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd"};
        respawnMagazines[] = {"OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd", "OEC_Magazine_9x18_8Rnd"};

		class EventHandlers {};
    };
};