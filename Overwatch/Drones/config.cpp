class CfgFunctions
{
    class OEC
    {
        tag = "OEC";
        class functions
        {
            class pickupDrone
            {
                file = "\OECExtension\Scripts\drones\OEC_pickupDrone.sqf";
				description = "picks up turret";
            };
			class reloadDrone
            {
                file = "\OECExtension\Scripts\drones\OEC_reload.sqf";
				description = "reloads turret";
            };
        };
    };
};

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
            "OEC_Floor_Turret_Base",
            "OEC_Floor_Turret"
        };
        weapons[] = {};
    };
};

class CfgSkeletons 
{
	class Default
	{
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {};
	};
	class OEC_Floor_Turret: Default
	{
		skeletonInherit = "Default";
		skeletonBones[] =
		{
			"body","",
			"gun","body"
		};
	};
};

class Rotation;
class CfgModels
{
	class Default
	{
		sectionsInherit = "";
		sections[] = {};
		sekeletonName = "";
	};
	class OEC_Floor_Turret: Default
	{
		sections[] = {};
		skeletonName = "OEC_Floor_Turret";
		class Animations
		{
			class body
			{
				type = "rotationy";
				source = "body";
				selection= "body";
				axis = "axis_body";
				animPeriod = 0;
				minValue = "rad -40";
				maxValue = "rad +40";
				angle0 = "rad -40";
				angle1 = "rad +40";
				memory = 1;
			};
			class gun:body
			{
				type = "rotationx";
				source = "gun";
				selection = "gun";
				axis = "axis_gun";
			};
		};
	};
};

class CfgMagazines
{
	class OEC_Magazine_PulseSMG;
    class OEC_Magazine_Turret: OEC_Magazine_PulseSMG
	{
		scope = 2;
		ammo = "OEC_Ammo_Turret";
		author = "OEC Extension";
		picture = "\OECExtension\Overwatch\Weapons\data\turretMag.paa";
		displayName = "[OEC] 200rnd Combine Sterilizer Cell";
		descriptionShort = "Extreme Capacity Sterilizer Pulse Cell; 200m dissipation range";
		//model = "\a3\Props_F_Enoch\Military\Camps\PortableLight_02_single_folded_F.p3d";
		//hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Camps\data\Portable_light_02_Single_Sand_CO.paa"};
		count = 200;
		mass = 20;
		allowedSlots[] = 
		{
			701, // Vest
			801, // Uniform
			901  // Backpack
		};
	};
};

class Mode_FullAuto;
class CfgWeapons
{
    class OEC_Weapon_PulseSMG;
    class OEC_Weapon_Turret: OEC_Weapon_PulseSMG
    {
		picture = "";
		model = "";
        type = 1;
		showAimCursorInternal = 1;
		scopeCurator = 1;
		scope = 1;
		displayName = "Combine Turret Pulse Gun";
		magazines[] = {"OEC_Magazine_Turret"};
		initSpeed = 0;
        modes[] = {"FullAuto","aiMode"};
		soundBullet[] = {};

		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"OECExtension\Overwatch\Drones\data\shoot1.wss",1.6,1,1000};
				begin2[] = {"OECExtension\Overwatch\Drones\data\shoot2.wss",1.6,1,1000};
				begin3[] = {"OECExtension\Overwatch\Drones\data\shoot3.wss",1.6,1,1000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.33};
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
			aiDispersionCoefY = 0;
			aiDispersionCoefX = 0;
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
		displayname = "Combine Sterilizer";
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
		uavCameraGunnerPos = "gunnerView";
		uavCameraGunnerDir = "gunnerView";
		selectionDamage = "DamT_1";
		epeImpulseDamageCoef = 0;
		extCameraPosition[] = {0,0.5,-3};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
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
				minElev = -20;
				maxElev = 45;
				minTurn = -45;
				maxTurn = 45;
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
				magazines[] = {};
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
		class EventHandlers: EventHandlers
		{
			init = "[_this select 0] execVM '\OECExtension\Scripts\OEC_turret.sqf';";
		};
	};
	class OEC_Floor_Turret: OEC_Floor_Turret_Base
	{
		displayName = "Combine Sterilizer";
		scope = 2;
		scopeCurator = 2;
		faction = "OEC_Faction_Combine";
		factionClass = "OEC_Faction_Class_Combine";
        editorCategory = "OEC_EdCat_Combine";
		editorSubcategory = "OEC_EdSubCat_Turrets";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"body",0},{"gun",0},{"mainelevation_01",0},{"mainelevation_02",0},{"mainelevation_03",0},{"mainelevation_04",0},{"initturret",0},{"initgun",0},{"initelevation_01",0},{"initelevation_02",0},{"initelevation_03",0},{"initelevation_04",0}};
			hide[] = {"light_back","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 0.509;
			verticalOffsetWorld = 0.001;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_Static_Designator_01_F.jpg";
		side = 1;
		crew = "B_UAV_AI";

		class ACE_Actions
		{
			class ACE_MainActions
			{
				displayName = "Interactions";
				position = "_target selectionPosition 'interact'";
				selection = "";
				distance = 4;
				condition = "true";
				class OEC_pickup_turret
				{
					displayName = "Pickup Sterilizer";
					condition = "true";
					statement = "[_target, _player] call OEC_fnc_pickupDrone";
					icon = "\OECExtension\Overwatch\Weapons\data\turret.paa";
				};
				class OEC_reloadTurret
				{
					displayName = "Reload Cell";
					condition = "true";
					statement = "[_target, _player] call OEC_fnc_reloadDrone";
					icon = "\OECExtension\Overwatch\Weapons\data\turret.paa";
				};
			};
		};
	};
};