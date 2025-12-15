class CfgPatches
{
    class OEC_Extension_Overwatch_Gear
    {
        name = "OEC Extension - Gear";
        author = "Dirt & Petee";
        requiredAddons[] = 
        {
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F",
            "WBK_Combinus"
        };
        units[] = 
        {
            "OEC_Overwatch_Unit_Base"
        };
        weapons[] = {};
    };
};

class CfgFaces
{
    class Default
    {
        class Custom;
    };
    class Man_A3: Default
    {
        class WBK_CombineHead;
        class OEC_Head: WBK_CombineHead
        {
            identityTypes[] = {"OEC_Transhumans"};
        };
    };
};

class CfgWorlds
{
    class GenericNames
    {
        class OEC_Transhumans
        {
            class FirstNames
            {
                O9 = "O-9";
                O8 = "O-8";
                O7 = "O-7";
                O6 = "O-6";
                O5 = "O-5";
                O4 = "O-4";
                O3 = "O-3";
            };
            class LastNames
            {
                echo1 = "Echo-1";
                echo3 = "Echo-3";
                mao = "Maow :3";
                union7 = "Union-7";
                helix2 = "Helix-2";
                helix5 = "Helix-5";
                spikewall1 = "Spikewall-1";
            };
        };
    };
};

class CfgVehicles
{
    class B_Soldier_base_f;
    class B_Soldier_f: B_Soldier_base_f
    {
        class HitPoints;
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
				armor = 1.5;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.9;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1.5;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.9;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 2;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.9;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 2;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 2;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 2;
				material = -1;
				name = "spine2";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 2;
				material = -1;
				name = "spine3";
				passThrough = 0.33;
				radius = 0.18;
				explosionShielding = 0.9;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
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
				armor = 3;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.9;
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
				explosionShielding = 0.9;
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
				explosionShielding = 0.9;
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
				armor = 3.5;
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
				armor = 3.5;
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
    };
};

class CfgGroups
{
    class West
    {
        name = "[OEC] Overwatch Expeditionary Corps";
        class OEC_Group_Editor_Category_Overwatch
        {
            name = "[OEC] Overwatch Soldiers";
        };
    };
};