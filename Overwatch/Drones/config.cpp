class CfgPatches
{
    class OEC_Extension_Overwatch_Drones
    {
        addonRootClass = "OEC_Extension_Overwatch";
        requiredAddons[] = {};
        units[] = 
        {
            "OEC_UGV_rcws",
            "OEC_UGV_rcws_01",
            "OEC_Static_Turret_Base",
            "OEC_Floor_Turret"
        };
        weapons[] = {};
    };
};

class CfgMagazines
{
	class OEC_Magazine_PulseSMG;
    class OEC_Magazine_Turret: OEC_Magazine_PulseSMG
	{
		scope = 2;
		ammo = "OEC_Ammo_PulseSMG";
		author = "OEC Extension";
		picture = "\hl_cmb_weapons\UI\m_ar2_ca.paa";
		displayName = "[OEC] 200rnd Combine Turret Cell";
		descriptionShort = "Extreme Capacity Turret Pulse Cell; 200m dissipation range";
		count = 200;
		mass = 30;
	};
};

class Mode_FullAuto;
class CfgWeapons
{
    class OEC_Weapon_PulseSMG;
    class OEC_Weapon_Turret: OEC_Weapon_PulseSMG
    {
        class effect1
        {
            positionName = "konec hlavne";
            directionName = "usti hlavne";
            effectName = "MachineGunCloud";
        };
        type = 1;
		showAimCursorInternal = 1;
		scope = 1;
		displayName = "[OEC] Turret Gun";
		magazines[] = {"OEC_Magazine_Turret"};
		initSpeed = 0;
        modes[] = {"FullAuto","aiMode"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"WBK_AR1_Shot_Base_Soundset"};
				begin1[] = {"WBK_Combines\weapons\AR1_Fire_4.ogg",0.9,1,1000};
				begin2[] = {"WBK_Combines\weapons\AR1_Fire_2.ogg",0.9,1,1000};
				begin3[] = {"WBK_Combines\weapons\AR1_Fire_3.ogg",0.9,1,1000};
				begin4[] = {"WBK_Combines\weapons\AR1_Fire_1.ogg",0.9,1,1000};
				soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.1;
			recoil = "HL_CMB_arifle_AR2_Recoil_Fire";
			recoilProne = "HL_CMB_arifle_AR2_Recoil_Fire";
			dispersion = 0.0051;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 2;
			midRangeProbab = 0.7;
			maxRange = 3;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.005;
			aiRateOfFireDistance = 70;
			aiDispersionCoefY = 0.5;
			aiDispersionCoefX = 0.5;
        };
        class aiMode: FullAuto
        {
            showToPlayer = 0;
			soundBurst = 0;
            aiBurstTerminable = 1;
			burst = 200;
			aiRateOfFire= 1e-006;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 0;
			minRange = 1;
			minRangeProbab = 0.15;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.6;
		};
    };
};

class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
/*class cfgVehicles 
{
    class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class ViewOptics;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class Components;
	};
    class UGV_01_base_F: Car_F
    {
        class AnimationSources: AnimationSources {};
        class CargoTurret;
        class Turrets: Turrets
        {
            class CargoTurret_01: CargoTurret {};
        };
    };
    class OEC_UGV_rcws: UGV_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "UGV_01_rcws_base_F";
		weaponsGroup1 = 2;
		weaponsGroup2 = "1 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		displayName = "$STR_A3_CfgVehicles_UGV_01_RCWS_Base0";
		class Library
		{
			libTextDesc = "$str_a3_cfgvehicles_ugv_01_base_library0";
		};
		model = "\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";
		picture = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_RCWS_CA.paa";
		Icon = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_RCWS_CA.paa";
		threat[] = {0.8,0.6,0.3};
		unitInfoType = "RscOptics_AV_driver";
		uavCameraGunnerPos = "PiP1_pos";
		uavCameraGunnerDir = "PiP1_dir";
		class AnimationSources: AnimationSources
		{
			class Turret
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			delete MainGun;
			delete MainTurret;
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 3000;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "OtocVez";
						passThrough = 0;
						minimalHit = 999;
						explosionShielding = 0.4;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 3000;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "OtocHlaven";
						passThrough = 0;
						minimalHit = 999;
						explosionShielding = 0.4;
						radius = 0.2;
						isGun = 1;
					};
				};
				isCopilot = 0;
				dontCreateAI = 0;
				body = "mainTurret";
				gun = "mainGun";
				memoryPointGunnerOptics = "PiP1_pos";
				memoryPointGun = "machinegun";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType = "RscOptics_UGV_gunner";
				weapons[] = {"OEC_Weapon_Turret"};
				magazines[] = {"OEC_Magazine_Turret","OEC_Magazine_Turret"};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",0.31622776,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",0.31622776,1,30};
				minElev = -10;
				maxElev = 60;
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = 3;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
					initFov = 0.4667;
					maxFov = 0.4667;
					minFov = 0.035;
					directionStabilized = 1;
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret_01{};
		};
	};

    class OEC_UGV_rcws_01: OEC_UGV_rcws
	{
		displayName = "[OEC] Test UGV";
		scope = 2;
		scopeCurator = 2;
		faction = "OEC_Faction_Combine";
		factionClass = "OEC_Faction_Class_Combine";
        editorCategory = "OEC_EdCat_Supply";
		editorSubcategory = "OEC_EdSubCat_Pods";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_1_2",0},{"wheel_1_3",0},{"wheel_2_2",0},{"wheel_2_3",0},{"daylights",0},{"reverse_light",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"vehicletransported_antenna_hide",0},{"turrethide",0},{"damagehlaven",0},{"wheel_1_1_damper",0},{"wheel_2_1_damper",0},{"wheel_1_3_damper",0},{"wheel_2_3_damper",0},{"wheel_1_2_damper",0},{"wheel_2_2_damper",0},{"mg_muzzle",0},{"gmg_muzzle",0},{"muzzleflashrot",429},{"muzzleflashrot_2",776}};
			hide[] = {"zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 1.968;
			verticalOffsetWorld = -0.121;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UGV_01_rcws_F.jpg";
		_generalMacro = "B_UGV_01_rcws_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_Soldier_F"};
		side = 1;
		hiddenSelectionsTextures[] = {"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa","\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa","\A3\Data_F\Vehicles\Turret_co.paa"};
		textureList[] = {"Blufor",1};
		forceInGarage = 1;
	};
};*/

class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class viewOptics;
			};
		};
		class EventHandlers;
		class AnimationSources;
	};
	class OEC_Floor_Turret_Base: StaticWeapon
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.7;
		features = "Randomization: No						<br />Camo selections: 1 - the whole weapon with pod						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Just the designator						<br />Slingload: No						<br />Cargo proxy indexes: None";
		scope = 0;
		displayname = "$STR_A3_CfgVehicles_Static_Designator_01_base_F1";
		overviewPicture = "\A3\Data_F_Mark\Images\watermarkInfo_page11_ca.paa";
		transportSoldier = 0;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		editorSubcategory = "EdSubcat_Turrets";
		picture = "\A3\Static_F_Mark\Designator_01\Data\UI\Designator_01_CA.paa";
		icon = "\A3\Static_F_Mark\Designator_01\Data\UI\map_Designator_01_CA.paa";
		cost = 200000;
		accuracy = 0.25;
		threat[] = {1.0,0.3,0.1};
		isUav = 1;
		getInRadius = 0;
		uavCameraGunnerPos = "eye";
		uavCameraGunnerDir = "look";
		selectionDamage = "DamT_1";
		epeImpulseDamageCoef = 60;
		extCameraPosition[] = {0,0.5,-3};
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"a3\static_f_mark\designator_01\data\ld01_remote_co.paa","a3\weapons_f_mark\binocular\data\ltlm_snd_co.paa"};
		class TextureSources
		{
			class Sand
			{
				displayname = "$STR_A3_TEXTURESOURCES_SAND0";
				author = "$STR_A3_Bohemia_Interactive";
				factions[] = {"BLU_F"};
				textures[] = {"a3\static_f_mark\designator_01\data\ld01_remote_co.paa","a3\weapons_f_mark\binocular\data\ltlm_snd_co.paa"};
			};
		};
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Static_F_Mark\Designator_01\Data\LD01_remote.rvmat","A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat","A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat","A3\Weapons_F_Mark\Binocular\Data\ltlm.rvmat","A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat","A3\Static_F_Mark\Designator_02\Data\remote_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                isCopilot = 0;
				dontCreateAI = 0;
				body = "body";
				gun = "gun";
				animationsourcebody = "body";
				animationSourceGun = "gun";
				gunAxis = "axis_gun";
				gunBeg = "gun_muzzle";
				gunEnd = "gun_chamber";
				minElev = -15;
				maxElev = 45;
				minTurn = -160;
				maxTurn = 160;
				initTurn = 0;
				turretAxis = "axis_body";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				memoryPointGunnerOptics = "gunnerView";
				memoryPointGun = "gun_muzzle";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType = "RscOptics_UGV_gunner";
				weapons[] = {"OEC_Weapon_Turret"};
				magazines[] = {"OEC_Magazine_Turret","OEC_Magazine_Turret"};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",0.31622776,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",0.31622776,1,30};
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = 3;
				soundElevation[] = {"A3\Sounds_F_Mark\arsenal\sfx\Remote_Cameras\Remote_Camera_NATO",1.0,1,10};
				gunnergetInAction = "";
				gunnergetOutAction = "";

                class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
					initFov = 0.4667;
					maxFov = 0.4667;
					minFov = 0.035;
					directionStabilized = 1;
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
						};
					};
				};
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class DestructionEffects
		{
			class Smoke
			{
				simulation = "particles";
				type = "WeaponWreckSmoke";
				position = "destructionEffect";
				intensity = 1;
				interval = 1;
				lifeTime = 5;
			};
		};
		model = "OECExtension\Overwatch\Drones\data\OEC_Floor_Turret.p3d";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_Static_Designator_01_weapon_F"};
			displayName = "";
		};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) execVM '\A3\Static_F_Mark\Designator_01\Scripts\init.sqf'";
		};
		class AnimationSources: AnimationSources
		{
			class Init
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			class InitPiston
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Designator_hide
			{
				source = "user";
				animPeriod = 0;
				displayname = "Hide designator";
				mass = -10;
			};
		};
	};
	class OEC_Floor_Turret: OEC_Floor_Turret_Base
	{
		displayName = "[OEC] Floor Turret";
		scope = 2;
		scopeCurator = 2;
		faction = "OEC_Faction_Combine";
		factionClass = "OEC_Faction_Class_Combine";
        editorCategory = "OEC_EdCat_Supply";
		editorSubcategory = "OEC_EdSubCat_Pods";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"mainturret",0},{"maingun",0},{"mainelevation_01",0},{"mainelevation_02",0},{"mainelevation_03",0},{"mainelevation_04",0},{"initturret",0},{"initgun",0},{"initelevation_01",0},{"initelevation_02",0},{"initelevation_03",0},{"initelevation_04",0}};
			hide[] = {"light_back","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 0.509;
			verticalOffsetWorld = 0.001;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Static_Designator_01_F.jpg";
		side = 1;
		crew = "B_UAV_AI";
	};
};