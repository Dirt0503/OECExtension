class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class cisZu23Assign
            {
                file = "\OECExtension\Scripts\OEC_cisZu23Assign.sqf";
				description = "CIS Zu23 Emplacement Script";
            };
        };
    };
};

class CfgPatches
{
    class OEC_Extension_Resistance_Vehicles_Statics
    {
        addonRootClass = "OEC_Extension_Resistance";
        requiredAddons[] = 
        {
            "OEC_Extension_Resistance",
			"OEC_Extension_Resistance_Weapons_Heavy",
            "rhs_c_heavyweapons",
            "cup_weapons_grenadelaunchers"
        };
        units[] = 
		{
			"OEC_Statics_KORD_tripod_base",
			"OEC_Statics_KORD_tripod_CIS",
			"OEC_Statics_KORD_high_base",
			"OEC_Statics_KORD_high_CIS",
			"OEC_Statics_ZU23_base",
			"OEC_Statics_ZU23_CIS"
		};
        weapons[] = 
		{
			"OEC_Weapons_ZU23",
			"OEC_Weapons_DSHKM"
		};
    };
};

class CfgVehicles
{
	class House;
	class ThingX;

    class LandVehicle;
    class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
		class ViewPilot;
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = 0;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class StaticMGWeapon: StaticWeapon{};
	class StaticATWeapon: StaticWeapon{};
	class StaticAAWeapon: StaticWeapon{};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class ViewOptics;
	};
	class RHS_ZU23_base: StaticCannon
	{
		class Turrets: Turrets
		{
			class CargoTurret_01;
		};
	};

    // KORD 12.7mm Emplacements

    class OEC_Statics_KORD_tripod_base: StaticMGWeapon
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_Base.paa";
		model = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_KORD_MSV_ca.paa";
		mapSize = 2.5;
		displayName = "KORD HMG (Low Tripod)";
		sensorPosition = "gunnerView";
		class Hitpoints
		{
			class HitHull
			{
				armor = 1;
				passThrough = 1;
				name = "telo";
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = -0.0;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = 1;
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500,1700,2000};
				discreteDistanceInitIndex = 2;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				animationSourceStickX = "MainTurret_Inertia";
				animationSourceStickY = "MainGun_Inertia";
				gunnerLeftHandAnimName = "otochlaven_shake";
				gunnerRightHandAnimName = "otochlaven_shake";
                gunnerLeftLegAnimName = "leg_left";
				gunnerRightLegAnimName = "leg_right";
				selectionFireAnim = "zasleh";
				turretInfoType = "RHS_RscWeaponZeroing";
				minElev = -20;
				maxelev = 15;
				maxturn = 60;
				minturn = -60;
				weapons[] = {"OEC_Weapons_DSHKM"};
				magazines[] = {"OEC_Magazine_127x100_100Rnd", "OEC_Magazine_127x100_100Rnd", "OEC_Magazine_127x100_100Rnd"};
				gunnerAction = "RHS_LowKORD_Gunner";
				gunnerGetInAction = "RHS_StaticWeapon_GetOut_Medium";
				gunnerGetOutAction = "RHS_StaticWeapon_GetOut_Medium";
				disableSoundAttenuation = 1;
                class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "rhs_weap_nsvt_effects";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		armorStructural = 10.0;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};

    class OEC_Statics_KORD_tripod_CIS: OEC_Statics_KORD_tripod_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_MSV.paa";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Turrets";
		crew = "OEC_Units_CIS_rifleman";
		typicalCargo[] = {"OEC_Units_CIS_rifleman"};
	};

    class OEC_Statics_KORD_high_base: OEC_Statics_KORD_tripod_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_base.paa";
		displayName = "KORD HMG (High Stand)";
		model = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\KORD_6u16sp";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord6u16sp_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_KORD_high_MSV_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -7;
				maxelev = 45;
				gunnerAction = "rhs_KORD_Gunner";
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				turretInfoType = "RHS_RscWeaponZeroing";
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
			};
		};
	};

    class OEC_Statics_KORD_high_CIS: OEC_Statics_KORD_high_base
	{
        editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_high_MSV.paa";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_Turrets";
		crew = "OEC_Units_CIS_rifleman";
		typicalCargo[] = {"OEC_Units_CIS_rifleman"};
	};


    // ZU23 Emplacement
    class OEC_Statics_ZU23_base: RHS_ZU23_base
	{
		mapSize = 3;
		displayname = "ZU-23-2 Emplacement";
		model = "\rhsafrf\addons\rhs_heavyweapons\ZU23\rhs_zu23";
		icon = "\rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_zu23_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\RHS_ZU23_MSV_ca.paa";
		initCargoAngleY = 180;
		irTarget = 0;
		irTargetSize = 0.75;
		visualTarget = 1;
		visualTargetSize = 0.75;
		radarTarget = 1;
		radarTargetSize = 0.75;
		memoryPointsGetInCargo = "pos_cargo_dir";
		memoryPointsGetInCargoDir = "pos_cargo";
		memoryPointsGetInDriver = "pos_driver_dir";
		memoryPointsGetInDriverDir = "pos_driver";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class Hitpoints
		{
			class HitHull
			{
				armor = 1;
				passThrough = 1;
				name = "telo";
			};
		};
		armorStructural = 4;
		explosionShielding = 0.5;
		memoryPointTaskMarker = "TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4","SlingLoadCargo5"};
		class ViewPilot: ViewPilot
		{
			initAngleX = -0.0;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minElev = -10;
				maxElev = 85;
				initElev = 0;
				maxHorizontalRotSpeed = 0.55;
				maxVerticalRotSpeed = 0.35;
				weapons[] = {"OEC_Weapons_ZU23"};
				canUseScanner = 0;
				magazines[] = {"OEC_Magazine_AZP23_AA_100Rnd","OEC_Magazine_AZP23_AA_100Rnd","OEC_Magazine_AZP23_AA_100Rnd"};
				gunnerAction = "RHS_Zu23_Gunner";
				gunnerInAction = "RHS_Zu23_Gunner";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerLeftHandAnimName = "handle_elev_hand";
				gunnerRightHandAnimName = "handle_trav_hand";
				gunnerLeftLegAnimName = "otocVez";
				gunnerRightLegAnimName = "otocVez";
				animationSourceStickX = "MainTurret_Inertia";
				animationSourceStickY = "MainGun_Inertia";
				selectionFireAnim = "zasleh";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope";
				soundServo[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret",1.4,1.0,30};
				soundServoVertical[] = {"rhsafrf\addons\rhs_vehiclesounds\sounds\soft\btr80\btr_turret_elev",2,1.0,30};
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerForceOptics = 0;
				memoryPointGun[] = {"muzzle_1","muzzle_2"};
				lodTurnedIn = 0;
				lodTurnedOut = 0;
				turretInfoType = "RHS_RscWeaponZU23_T3_Optic";
				class ViewGunner
				{
					initAngleX = 0;
					initAngleY = -9;
					minAngleX = -30;
					maxAngleX = 30;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				class OpticsIn
				{
					class Collimator: ViewOptics
					{
						opticsDisplayName = "COLLIMATOR";
						initFov = 0.636364;
						minFov = 0.636364;
						maxFov = 0.636364;
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
					class CollimatorZoom: Collimator
					{
						initFov = 0.35;
						minFov = 0.35;
						maxFov = 0.35;
					};
					class T3_Optic
					{
						opticsDisplayName = "T3";
						camPos = "commanderview";
						camDir = "view_t3_dir";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_t3_scope.p3d";
					};
				};
				disableSoundAttenuation = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = -100;
						material = -1;
						name = "Hit_Turret";
						armorComponent = "Hit_Turret";
						visual = "vez";
						passThrough = 0.015;
						minimalHit = -0.2;
						explosionShielding = 0.1;
						radius = 0.1;
					};
					class HitGun
					{
						armor = -100;
						material = -1;
						name = "Hit_Gun";
						armorComponent = "Hit_Gun";
						visual = "-";
						passThrough = 0.015;
						minimalHit = -0.2;
						explosionShielding = 0.1;
						radius = 0.1;
					};
					class Hit_Optic_Collimator
					{
						armor = -40;
						explosionShielding = 0;
						name = "";
						visual = "vis_optic_TPN4";
						armorComponent = "Hit_Optic_ESSA";
						passThrough = 0;
					};
					class Hit_Optic_T3
					{
						armor = -40;
						explosionShielding = 0;
						name = "";
						visual = "vis_optic_TPN4";
						armorComponent = "Hit_Optic_ESSA";
						passThrough = 0;
					};
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerAction = "vehicle_coshooter_1";
				gunnerGetInAction = "GetInHeli_Transport_01Cargo";
				gunnerGetOutAction = "Crouch";
				gunnerReversedGetOut = 0;
				memoryPointsGetInGunner = "pos_cargo";
				memoryPointsGetInGunnerDir = "pos_cargo_dir";
				gunnerName = "Loader";
				primaryObserver = 0;
				dontCreateAI = 0;
				commanding = 1;
				gunnerCompartments = "Compartment1";
				proxyIndex = 1;
				maxElev = 45;
				minElev = -15;
				maxTurn = 64;
				minTurn = -65;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				memorypointgunneroptics = "";
				selectionFireAnim = "";
				lodTurnedIn = 0;
				lodTurnedOut = 0;
				playerPosition = 2;
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = "OEC_Weapons_ZU23";
			};
			class fire_anim: muzzle_source
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: muzzle_source
			{
				source = "ammorandom";
			};
			class ReloadMagazine: muzzle_source
			{
				source = "reloadmagazine";
			};
			class maingunT_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class mainTurretT_source: maingunT_source{};
			class Elevation
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 5;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_wheel_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\DataNew\zu23_base_destruct.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_destruct.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
	};

	class OEC_Statics_ZU23_CIS: OEC_Statics_ZU23_base
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_ZU23_MSV.paa";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		author = "OEC Extension";
		faction = "OEC_Faction_CIS";
		factionClass = "OEC_Faction_Class_CIS";
        editorCategory = "OEC_EdCat_CIS";
        editorSubCategory = "OEC_EdSubCat_AA";
		crew = "OEC_Units_CIS_rifleman";
		typicalCargo[] = {"OEC_Units_CIS_rifleman", "OEC_Units_CIS_JrSergeant"};
		mass = 12000;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "OEC_Units_CIS_JrSergeant";
			};
		};
		class EventHandlers
		{
			init = "_this call oec_fnc_cisZu23Assign;";
		};
	};
};