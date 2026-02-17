class CfgPatches
{
    class OEC_Extension_Overwatch_Units_Expeditionary
    {
        addonRootClass = "OEC_Extension_Overwatch_Units";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch_Units",
            "WBK_HalfLife_AlienShit"
        };
        units[] = 
        {
            "OEC_Overwatch_Unit_Soldier",
            "OEC_Overwatch_Unit_AT",
            "OEC_Overwatch_Unit_CE",
            "OEC_Overwatch_Unit_Medic",
            "OEC_Overwatch_Unit_Recon",
            "OEC_Overwatch_Unit_TL",
            "OEC_Overwatch_Unit_TL_AT",
            "OEC_Overwatch_Unit_TL_CE",
            "OEC_Overwatch_Unit_Elite",
            "OEC_Overwatch_Unit_Elite_AT",
            "OEC_Overwatch_Unit_Elite_CE",
            "OEC_Overwatch_Unit_Recon_TL",
            "OEC_Overwatch_Unit_Wallhammer",
            "OEC_Overwatch_Unit_Airwatch",
            "OEC_Overwatch_Unit_APF",
            "OEC_Overwatch_Unit_HunterSynth"
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
        hiddenSelectionsTextures[] = 
        {
            "OECExtension\Overwatch\Gear\Uniforms\data\soldier_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\soldier_upperArmor.paa",
            "HL_Combine\data\Soldier\soldier_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
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
            "OECExtension\Overwatch\Gear\Uniforms\data\AT_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\AT_upperArmor.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\AT_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
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
    class OEC_Overwatch_Unit_CE: OEC_Overwatch_Unit_Soldier
    {
        displayName = "CE Soldier";
        uniformClass = "OEC_Overwatch_Uniform_CE";
        linkedItems[] = {"OEC_Overwatch_Helmet_CE", "OEC_Overwatch_Vest_CE","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_CE", "OEC_Overwatch_Vest_CE", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[] =
        {
            "OECExtension\Overwatch\Gear\Uniforms\data\engi_torso.paa",
            "HL_Combine\data\Urban\Urban_Shotgunner_pants.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\engi_upperArmor.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\engi_lowerArmor.paa",
            "HL_Combine\data\Urban\Urban_boots.paa",
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
            "OECExtension\Overwatch\Gear\Uniforms\data\medic_upperArmor.paa",
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
        displayName = "Recon";
        uniformClass = "OEC_Overwatch_Uniform_Recon";
        weapons[] = {"OEC_Weapon_R1","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_R1","Throw","Put"};
        magazines[] = {"OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1","OEC_Magazine_R1"};
        linkedItems[] = {"OEC_Overwatch_Helmet_Recon", "OEC_Overwatch_Vest_Recon","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Recon", "OEC_Overwatch_Vest_Recon", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        hiddenSelectionsTextures[] = 
        {
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_torso.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_pants.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Trooper_upperArmor.paa",
            "HL_Combine\data\ranger\ranger_lowerArmor.paa",
            "HL_Combine\data\ranger\ranger_boots.paa",
            "HL_Combine\data\ranger\ranger_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbSoldier;";
            };
        };
        camouflage = 0.5;
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
    class OEC_Overwatch_Unit_TL_AT: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "AT Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_TL_AT";
        linkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_AT","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_AT", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapons_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[]=
        {
            "OECExtension\Overwatch\Gear\Uniforms\data\AT_torso.paa",
            "HL_Combine\data\Beta\Beta_pants.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\TL_AT_upperArmor.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\AT_lowerArmor.paa",
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
    class OEC_Overwatch_Unit_TL_CE: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "CE Team Leader";
        uniformClass = "OEC_Overwatch_Uniform_TL_CE";
        linkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_CE","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_TL", "OEC_Overwatch_Vest_TL_CE", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        hiddenSelectionsTextures[]=
        {
            "OECExtension\Overwatch\Gear\Uniforms\data\engi_torso.paa",
            "HL_Combine\data\Beta\Beta_pants.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\TL_CE_upperArmor.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\engi_lowerArmor.paa",
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
    class OEC_Overwatch_Unit_Elite_AT: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "AT Squad Leader";
        uniformClass = "OEC_Overwatch_Uniform_Elite_AT";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapons_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapons_SIPL_olive","OEC_Weapon_SMG46","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
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
            "OECExtension\Overwatch\Gear\Uniforms\data\SL_AT_upperArmor.paa",
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
    class OEC_Overwatch_Unit_Elite_CE: OEC_Overwatch_Unit_Soldier
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "AT Squad Leader";
        uniformClass = "OEC_Overwatch_Uniform_Elite_CE";
        model = "\HL_Combine\data\Nemez_Combine_Elite.p3d";
        linkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite","ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        respawnLinkedItems[] = {"OEC_Overwatch_Helmet_Elite", "OEC_Overwatch_Vest_Elite", "ItemMap", "TFAR_anprc152", "ItemCompass", "ItemWatch"};
        weapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        respawnWeapons[] = {"OEC_Weapon_SMG46", "OEC_Floor_Turret_Folded","Throw","Put"};
        magazines[] ={"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
        respawnMagazines[] = {"OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag","OEC_SMG46_Mag"};
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
            "OECExtension\Overwatch\Gear\Uniforms\data\SL_CE_upperArmor.paa",
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
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_torso.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_pants.paa",
            "OECExtension\Overwatch\Gear\Uniforms\data\Recon_Elite_upperArmor.paa",
            "HL_Combine\data\wpu\wpu_boots.paa",
            "HL_Combine\data\wpu\wpu_gloves.paa"
        };
        class EventHandlers: EventHandlers
        {
            class OEC_Combine_SoldierAssign_Event
            {
                init = "_this call oec_fnc_cmbOrdinal;";
            };
        };
        camouflage = 0.5;
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

    // Hunter Synth
    class I_Survivor_F;
	class WBK_C_ExportClass: I_Survivor_F
	{
		identityTypes[] = {"empty_Face"};
	};
    class OEC_Overwatch_Unit_HunterSynth: WBK_C_ExportClass
	{
		side = 1;
		editorCategory = "OEC_EdCat_Combine";
        editorSubCategory = "OEC_EdSubCat_Infantry";
		gestures = "CfgGesturesHunter";
		class SoundEnvironExt
		{
			generic[] = {{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep1.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep2.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep3.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep4.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep5.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_foundenemy_ack1.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_foundenemy_ack2.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_foundenemy_ack3.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_idle1.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_idle2.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_idle3.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_laugh1.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_laugh3.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_laugh5.wav",1,1,70}}};
		};
		class SoundEquipment
		{
			soldier[] = {{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep1.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep2.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep3.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep4.wav",1,1,70}},{"run",{"\WBK_CombineAlienShit\sounds\hunter\ministrider_footstep5.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_foundenemy_ack1.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_foundenemy_ack2.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_foundenemy_ack3.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_idle1.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_idle2.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_idle3.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_laugh1.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_laugh3.wav",1,1,70}},{"walk",{"\WBK_CombineAlienShit\sounds\hunter\hunter_laugh5.wav",1,1,70}}};
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
		items[] = {};
		uniformClass = "OEC_Overwatch_HunterSynth";
		nakedUniform = "OEC_Overwatch_HunterSynth";
		faction = "OEC_Faction_Combine";
		vehicleclass = "Men";
		displayName = "Hunter";
		moves = "cfgMovesWbkHunter";
		model = "WBK_CombineAlienShit\Hunter.p3d";
		armor = 7;
		scope = 2;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\WBK_CombineAlienShit\textures\hunter_armor_tex.paa","\WBK_CombineAlienShit\textures\hunter_tex.paa","\WBK_CombineAlienShit\textures\hunter_tex.paa"};
		hiddenSelectionsMaterials[] = {"\WBK_CombineAlienShit\textures\hunter_armor.rvmat","\WBK_CombineAlienShit\textures\hunter.rvmat","\WBK_CombineAlienShit\textures\huntereyes.rvmat"};
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

        class HL_Hunter_Ai_Init
		{
			onRespawn = "true";
			init = "_unit = _this select 0; if (local _unit) then {_unit execVM '\OECExtension\Scripts\Hunter\OEC_cmbHunter.sqf';};";
		};
	};
};
