class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class xenAntlion
            {
                file = "\OECExtension\Scripts\xen_antlion.sqf";
				description = "Antlion Script";
            };
        };
    };
};

class CfgPatches
{
    class OEC_Extension_Resistance_Units_Antlions
    {
        addonRootClass = "OEC_Extension_Resistance_Units";
        requiredAddons[] = {"WBK_HalfLife_AlienShit"};
        units[] = 
        {
            "OEC_Units_Antlion",
		    "OEC_Units_HoundEye",
			"OEC_Units_Bullsquid",
			"OEC_Units_Zombie",
			"OEC_Units_AntlionGuardian"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
	class WBK_C_ExportClass;
	class OEC_Units_Antlion: WBK_C_ExportClass
	{
		gestures = "CfgGesturesAntlion";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear3.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear4.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear5.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear6.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_1.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_2.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_3.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_4.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_5.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_6.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_8.wav",1,1,40}},{"fly",{"\WBK_CombineAlienShit\sounds\antlion\fly.wav",2,1,40}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear3.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear4.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear5.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear6.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\antlion\rear7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_1.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_2.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_3.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_4.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_5.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_6.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_7.wav",1,1,40}},{"walk",{"\WBK_CombineAlienShit\sounds\antlion\noise_8.wav",1,1,40}},{"fly",{"\WBK_CombineAlienShit\sounds\antlion\fly.wav",1,1,40}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Antlion";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Antlions";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		items[] = {};
		uniformClass = "antlion_uniform";
		nakedUniform = "antlion_uniform";
		_generalMacro = "WBK_HL_Aliens";
		vehicleclass = "Men";
		moves = "cfgMovesWbkHAntlion";
		model = "WBK_CombineAlienShit\antlion.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\antlion_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\antlion.rvmat"};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Units_AntlionGuardian: WBK_C_ExportClass
	{
		side = 2;
		gestures = "CfgGesturesAntlionGuardian";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft4.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft5.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft6.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft7.wav",2,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\antlionGuardian\growl_idle.wav",1,1,70}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft4.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft5.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft6.wav",2,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\antlionGuardian\body_medium_impact_soft7.wav",2,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\antlionGuardian\growl_idle.wav",1,1,70}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Antlion Myrmidont";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Antlions";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";


		items[] = {};
		uniformClass = "AG_uniform";
		nakedUniform = "AG_uniform";
		vehicleclass = "Men";
		moves = "cfgMovesWbkAntlionGuardian";
		model = "WBK_CombineAlienShit\AntlionGuardian.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\antlionGuardian_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\antlionGuardian.rvmat"};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Units_HoundEye: WBK_C_ExportClass
	{
		gestures = "CfgGesturesHoundeye";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step3.wav",1,1,40}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step2.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\houndeye\he_step3.wav",1,1,40}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Houndeye";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Creatures";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		items[] = {};
		uniformClass = "houndeye_uniform";
		nakedUniform = "houndeye_uniform";
		_generalMacro = "WBK_HL_Aliens";
		vehicleclass = "Men";
		moves = "cfgMovesWbkHoundeye";
		model = "WBK_CombineAlienShit\houndeye.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\houndeye_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\houndeye.rvmat"};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Units_Bullsquid: WBK_C_ExportClass
	{
		gestures = "CfgGesturesBullsquid";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step2.wav",1,1,40}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step1.wav",1,1,40}},{"run",{"\WBK_CombineAlienShit\sounds\bullsquid\step2.wav",1,1,40}}};
		};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Bullsquid";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Creatures";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		items[] = {};
		uniformClass = "bullsquid_uniform";
		nakedUniform = "bullsquid_uniform";
		vehicleclass = "Men";
		moves = "cfgMovesWbkBullsuiqd";
		model = "WBK_CombineAlienShit\bullsquid.p3d";
		armor = 7;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo","CamoB"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\bullsquid_tex.paa","\WBK_CombineAlienShit\textures\bullsquid_eye_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\bullsquid.rvmat",""};
		attendant = 1;
		class Character
		{
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg",0.4},{"HitRightLeg",0.4},{"HitBody",0.7}};
			armor = 7;
			attackDistances[] = {2,3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			class Sounds
			{
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			class Animations
			{
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			class HitPoints
			{
				class HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				class HitNeck: HitFace
				{
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				class HitHead: HitNeck
				{
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				class HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitAbdomen: HitPelvis
				{
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitDiaphragm: HitAbdomen
				{
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitChest: HitDiaphragm
				{
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				class HitBody: HitChest
				{
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class HitArms
				{
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				class HitHands: HitArms
				{
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				class HitLegs
				{
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {};
	};

	class OEC_Units_Zombie: WBK_C_ExportClass
	{

		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_msv_rifleman.paa";
        scope = 2;
        scopeCurator = 2;
        author = "OEC Extension";
        displayName = "Zombie";
        editorCategory = "OEC_EdCat_Aliens";
        editorSubCategory = "OEC_EdSubCat_Zombies";
        faction = "OEC_Faction_Aliens";
		factionClass = "OEC_Faction_Class_Aliens";

		uniformClass = "OEC_Rebel_Civ_Uniform_White";
		backpack = "";
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		items[] = {};
		linkedItems[] = {"OEC_Misc_Helmet_Headcrab"};
		class SoundBreath
		{
			breath[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
		};
		class SoundInjured
		{
			breath[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundBurning
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
		};
		class SoundRecovered
		{
			breath[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
		};
		class SoundBreathInjured
		{
			Person1[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
		};
	};
};

class Extended_InitPost_EventHandlers
{

	class OEC_Units_Antlion
	{
		class HL_Antlion_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_antlion.sqf';};";
		};
	};

	class OEC_Units_AntlionGuardian
	{
		class HL_AG_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_antlionguardian.sqf';};";
		};
	};

	class OEC_Units_HoundEye
	{
		class HL_HoundEye_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_houndEye.sqf';};";
		};
	};

	class OEC_Units_Bullsquid
	{
		class HL_Bullsquid_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\xen_bullsquid.sqf';};";
		};
	};

	class OEC_Units_Zombie
	{
		class HL_ClassicZombie_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {[_unit,false] execVM '\OECExtension\Scripts\xen_zombie.sqf';};";
		};
	};
};
