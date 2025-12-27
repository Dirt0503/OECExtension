class CfgPatches
{
    class OEC_Extension_Overwatch_Units_Expeditionary
    {
        addonRootClass = "OEC_Extension_Overwatch_Units";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch_Units"
        };
        units[] = 
        {
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

class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class cmbSoldier
            {
                file = "\OECExtension\Scripts\CombineTypeAssignments\OEC_cmbSoldier.sqf";
				description = "Vocelines & Abilities Script";
            };
            class cmbRanger
            {
                file = "\OECExtension\Scripts\CombineTypeAssignments\OEC_cmbRanger.sqf";
				description = "Vocelines & Abilities Script";
            };
            class cmbOrdinal
            {
                file = "\OECExtension\Scripts\CombineTypeAssignments\OEC_cmbOrdinal.sqf";
				description = "Vocelines & Abilities Script";
            };
            class cmbCharger
            {
                file = "\OECExtension\Scripts\CombineTypeAssignments\OEC_cmbCharger.sqf";
				description = "Vocelines & Abilities Script";
            };
            class cmbGrunt
            {
                file = "\OECExtension\Scripts\CombineTypeAssignments\OEC_cmbGrunt.sqf";
				description = "Vocelines & Abilities Script";
            };
            class cmbAPF
            {
                file = "\OECExtension\Scripts\CombineTypeAssignments\OEC_cmbAPF.sqf";
				description = "Vocelines & Abilities Script";
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
        class EventHandlers;
    };
    class OEC_Overwatch_Unit_Base: B_Soldier_f
    {
        class HitPoints: HitPoints{};
        class Eventhandlers: EventHandlers{};
    };
    
    class OEC_Overwatch_Unit_Soldier: OEC_Overwatch_Unit_Base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Soldier";
        uniformClass = "OEC_Overwatch_Uniform_Soldier";
        editorCategory = "OEC_EdCat_Combine";
        editorSubCategory = "OEC_EdSubCat_Infantry";
        backpack = "OEC_Overwatch_Backpack_Invisible";
        linkedItems[] = {"OEC_Overwatch_Helmet_Soldier", "OEC_Overwatch_Vest_Soldier","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Soldier", "OEC_Overwatch_Vest_Soldier", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_AR2","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_AR2","Throw","Put"};
        magazines[] = {"OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2"};
        respawnMagazines[] = {"OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2","OEC_Magazine_AR2"};
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };

    class OEC_Overwatch_Unit_AT: OEC_Overwatch_Unit_Soldier
    {
        displayName = "AT Soldier";
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
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };
    class OEC_Overwatch_Unit_Medic: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Medic";
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
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbGrunt;";
            };
        };
    };
    class OEC_Overwatch_Unit_Recon: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Ranger";
        uniformClass = "OEC_Overwatch_Uniform_Recon";
        weapons[] = {"OEC_Weapon_R1","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_R1","Throw","Put"};
        magazines[] = {"OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1"};
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
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbRanger;";
            };
        };
    };
    class OEC_Overwatch_Unit_TL: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_TL";
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
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
    };
    class OEC_Overwatch_Unit_Elite: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Squad Leader";
        uniformClass = "OEC_Overwatch_Uniform_Elite";
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
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbOrdinal;";
            };
        };
    };
    class OEC_Overwatch_Unit_Recon_TL: OEC_Overwatch_Unit_Elite
    {
        displayName = "Recon Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_Recon_TL";
        weapons[] = {"OEC_Weapon_R1","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_R1","Throw","Put"};
        magazines[] = {"OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1"};
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
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbRanger;";
            };
        };
    };
    class OEC_Overwatch_Unit_Wallhammer: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Wallhammer";
        uniformClass = "OEC_Overwatch_Uniform_Wallhammer";
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
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbCharger;";
            };
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
    class OEC_Overwatch_Unit_Airwatch: OEC_Overwatch_Unit_Soldier
    {
        displayName = "Pilot";
        uniformClass = "OEC_Overwatch_Uniform_Airwatch";
        model = "\WBK_FixingFactory\charger\CombainWallhamer.p3d";
        backpack = "OEC_Overwatch_Backpack_OxygenTank_Airwatch";
        linkedItems[] = {"OEC_Overwatch_Helmet_Airwatch", "OEC_Overwatch_Vest_Airwatch","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Airwatch", "OEC_Overwatch_Vest_Airwatch", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_USP","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_USP","Throw","Put"};
        magazines[] = {"OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP"};
        respawnMagazines[] = {"OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP","OEC_Magazine_USP"};
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbGrunt;";
            };
        };
    };
    class OEC_Overwatch_Unit_APF: OEC_Overwatch_Unit_Soldier
    {
        displayName = "APF";
        uniformClass = "OEC_Overwatch_Uniform_APF";
        model = "@Combain\CombainSuppressor.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_APF", "OEC_Overwatch_Vest_APF","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_APF", "OEC_Overwatch_Vest_APF", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapons_APFSuppressor","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_APFSuppressor","Throw","Put"};
        magazines[] = {"OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd"};
        respawnMagazines[] = {"OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd","OEC_Magazine_APFSuppressor_100Rnd"};
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbAPF;";
            };
        };
    };
};
