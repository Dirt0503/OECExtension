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
        units[] = 
        {
            "OEC_Overwatch_Unit_Base",
            "OEC_Overwatch_Unit_Soldier",
            "OEC_Overwatch_Unit_AT",
            "OEC_Overwatch_Unit_Medic",
            "OEC_Overwatch_Unit_Recon",
            "OEC_Overwatch_Unit_TL",
            "OEC_Overwatch_Unit_Elite",
            "OEC_Overwatch_Unit_Recon_TL",
            "OEC_Overwatch_Unit_Wallhammer",
            "OEC_Overwatch_Unit_Airwatch",
            "OEC_Overwatch_Unit_APF"
        };
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

class CfgVehicles
{
    class B_Soldier_base_f;
    class B_Soldier_f: B_Soldier_base_f
    {
        class HitPoints;
        class Eventhandlers;
    };

    class OEC_Overwatch_Unit_Base: B_Soldier_f
    {
        scope = 1;
        scopecurator = 1;
        author = "OEC";
        displayName = "";
        genericNames = "OEC_Transhumans";
        identityTypes[] = 
        {
            "OEC_Transhumans"
        };
        model = "\HL_Combine\data\Nemez_Combine.p3d";
        picture = "\hl_cmb_overwatch\ui\icon_v_ow_ca.paa";
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\Soldier\soldier_torso.paa",
            "HL_Combine\data\Soldier\soldier_pants.paa",
            "HL_Combine\data\Soldier\soldier_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Soldier\soldier_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        uniformClass = "OEC_Overwatch_Uniform_Base";
        nakedUniform = "U_C_WorkerCoverallsGloves_Black";
        backpack = "";
        linkedItems[] = {"ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[]={};
        items[] = {};
        respawnItems[] = {};

        threat[] = {1, 0.5, 0.1};
        canCarryBackPack = 1;

        class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.9;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.9;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 1;
				radius = 0.2;
				explosionShielding = 0.9;
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
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 1;
				radius = 0.16;
				explosionShielding = 0.9;
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
				explosionShielding = 0.9;
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
				explosionShielding = 0.9;
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
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 6;
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
				armor = 6;
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
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.6;
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
				explosionShielding = 0.9;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 3;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.9;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 3;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.9;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
        class EventHandlers: EventHandlers{};
    };
    class OEC_Overwatch_Unit_Soldier: OEC_Overwatch_Unit_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "[OEC] Soldier";
        uniformClass = "OEC_Overwatch_Uniform_Soldier";
        editorCategory = "OEC_EdCat_Combine";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        WBK_CombineType = " COMBINE_";
        backpack = "OEC_Overwatch_Backpack_Invisible";
        linkedItems[] = {"OEC_Overwatch_Helmet_Soldier", "OEC_Overwatch_Vest_Soldier","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Soldier", "OEC_Overwatch_Vest_Soldier", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_AR2","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AR2","Throw","Put"};
        magazines[] = {"OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2"};
        respawnMagazines[] = {"OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2"};
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' COMBINE_', true];";
        };
    };

    class OEC_Overwatch_Unit_AT: OEC_Overwatch_Unit_Soldier
    {
        displayName = "[OEC] AT Soldier";
        uniformClass = "OEC_Overwatch_Uniform_AT";
        linkedItems[] = {"OEC_Overwatch_Helmet_AT", "OEC_Overwatch_Vest_AT","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_AT", "OEC_Overwatch_Vest_AT", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapons_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[] =
        {
            "HL_Combine\data\Coordinator\Coordinator_torso.paa",
            "HL_Combine\data\Coordinator\Coordinator_pants.paa",
            "HL_Combine\data\Coordinator\Coordinator_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Coordinator\Coordinator_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' COMBINE_', true];";
        };
    };
    class OEC_Overwatch_Unit_Medic: OEC_Overwatch_Unit_Soldier
    {
        displayName = "[OEC] Medic";
        uniformClass = "OEC_Overwatch_Uniform_Medic";
        linkedItems[] = {"OEC_Overwatch_Helmet_Medic", "OEC_Overwatch_Vest_Medic","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Medic", "OEC_Overwatch_Vest_Medic", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        magazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[]=
        {
            "HL_Combine\data\Urban\Urban_Shotgunner_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' COMBINE_', true];";
        };
    };
    class OEC_Overwatch_Unit_Recon: OEC_Overwatch_Unit_Soldier
    {
        displayName = "[OEC] Ranger";
        uniformClass = "OEC_Overwatch_Uniform_Recon";
        WBK_CombineType = " ranger_";
        linkedItems[] = {"OEC_Overwatch_Helmet_Recon", "OEC_Overwatch_Vest_Recon","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Recon", "OEC_Overwatch_Vest_Recon", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\ranger\ranger_torso.paa",
            "HL_Combine\data\ranger\ranger_pants.paa",
            "HL_Combine\data\ranger\ranger_upperArmor.paa",
            "HL_Combine\data\ranger\ranger_lowerArmor.paa",
            "HL_Combine\data\ranger\ranger_boots.paa",
            "HL_Combine\data\ranger\ranger_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' ranger_', true];";
        };
    };
    class OEC_Overwatch_Unit_TL: OEC_Overwatch_Unit_Soldier
    {
        displayName = "[OEC] Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_TL";
        WBK_CombineType = " COMBINE_";
        linkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelectionsTextures[]=
        {
            "HL_Combine\data\Beta\Beta_torso.paa",
            "HL_Combine\data\Beta\Beta_pants.paa",
            "HL_Combine\data\Beta\Beta_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Beta\Beta_boots.paa",
            "HL_Combine\data\Soldier\soldier_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' COMBINE_', true];";
        };
    };
    class OEC_Overwatch_Unit_Elite: OEC_Overwatch_Unit_Soldier
    {
        displayName = "[OEC] Squad Leader";
        uniformClass = "OEC_Overwatch_Uniform_Elite";
        WBK_CombineType = " ordinal_";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5"
        };
		hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\elite\elite_torso.paa",
            "HL_Combine\data\elite\elite_pants.paa",
            "HL_Combine\data\elite\elite_upperArmor.paa",
            "HL_Combine\data\elite\elite_boots.paa",
            "HL_Combine\data\elite\elite_gloves.paa"
        };
		hiddenSelectionsMaterials[] = 
        {
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat",
            "HL_Combine\data\Materials\Armor.rvmat"
        };
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' ordinal_', true];";
        };
    };
    class OEC_Overwatch_Unit_Recon_TL: OEC_Overwatch_Unit_Elite
    {
        displayName = "[OEC] Recon Team Lead";
        uniformClass = "OEC_Overwatch_Unit_Recon_TL";
        linkedItems[] = {"OEC_Overwatch_Helmet_Recon_TL", "OEC_Overwatch_Vest_Recon_TL","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Recon_TL", "OEC_Overwatch_Vest_Recon_TL", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelectionsTextures[] = 
        {
            "HL_Combine\data\wpu\wpu_torso.paa",
            "HL_Combine\data\wpu\wpu_pants.paa",
            "HL_Combine\data\wpu\wpu_upperArmor.paa",
            "HL_Combine\data\wpu\wpu_boots.paa",
            "HL_Combine\data\wpu\wpu_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' ordinal_', true];";
        };
    };
    class OEC_Overwatch_Unit_Wallhammer: OEC_Overwatch_Unit_Soldier
    {
        displayName = "[OEC] Wallhammer";
        uniformClass = "OEC_Overwatch_Uniform_Wallhammer";
        WBK_CombineType = " charger_";
        model = "\WBK_FixingFactory\charger\CombainWallhamer.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        linkedItems[] = {"OEC_Overwatch_Helmet_Wallhammer", "OEC_Overwatch_Vest_Wallhammer_Heavy","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Wallhammer", "OEC_Overwatch_Vest_Wallhammer_Heavy", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapons_WallhammerShotgun","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_WallhammerShotgun","Throw","Put"};
        magazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder"};
        respawnMagazines[] = {"OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder","OEC_Magazine_WallhammerShotgun_8Rnd_Shredder"};
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' charger_', true];";
        };
        class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_3.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_2.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_1.wav",1,1,20}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_1.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_2.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_3.wav",1.2,1,40}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,20}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"run",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_3.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_2.wav",1,1,20}},{"walk",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_walk_1.wav",1,1,20}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_1.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_2.wav",1.2,1,40}},{"sprint",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_3.wav",1.2,1,40}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,30}},{"tactical",{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,30}},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_3.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_1.wav",1,1,20},{"\WBK_HalfLifeSounds\Sounds\heavy_stomp_run_2.wav",1,1,20}};
		};
    };
    class OEC_Overwatch_Unit_Airwatch: OEC_Overwatch_Unit_Wallhammer
    {
        displayName = "[OEC] Pilot";
        uniformClass = "OEC_Overwatch_Uniform_Airwatch";
        WBK_CombineType = " grunt_";
        backpack = "OEC_Overwatch_Backpack_OxygenTank_Airwatch";
        linkedItems[] = {"OEC_Overwatch_Helmet_Airwatch", "OEC_Overwatch_Vest_Airwatch","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Airwatch", "OEC_Overwatch_Vest_Airwatch", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_USP","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_USP","Throw","Put"};
        magazines[] = {"OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP"};
        respawnMagazines[] = {"OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP"};
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' grunt_', true];";
        };
    };
    class OEC_Overwatch_Unit_APF: OEC_Overwatch_Unit_Soldier
    {
        displayName = "[OEC] APF";
        uniformClass = "OEC_Overwatch_Uniform_APF";
        WBK_CombineType = " apf_";
        model = "@Combain\CombainSuppressor.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_APF", "OEC_Overwatch_Vest_APF","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_APF", "OEC_Overwatch_Vest_APF", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapons_APFSuppressor","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_APFSuppressor","Throw","Put"};
        magazines[] = {"OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd"};
        respawnMagazines[] = {"OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd"};
        class EventHandlers: EventHandlers
        {
            init = "this setVariable ['WBK_CombineType', ' apf_', true];";
        };
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