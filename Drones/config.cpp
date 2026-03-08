#include "\OECExtension\cfgFunctions.hpp"

class CfgPatches
{
    class OEC_Extension_Drones
    {
        addonRootClass = "OEC_Extension";
        requiredAddons[] = 
		{
			"OEC_Extension",
			"OEC_Extension_Weapons"
		};
        units[] = 
        {
            "OEC_UGV_rcws",
            "OEC_UGV_rcws_01",
            "OEC_Floor_Turret_Base",
            "OEC_Floor_Turret"
        };
        weapons[] = 
		{
			"OEC_Floor_Turret_Folded"
		};
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
	class OEC_turretFolded: Default
	{
		skeletonInherit = "Default";
		skeletonBones[] =
		{
			"base"
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
	class OEC_turretFolded: Default
	{
		sections[] = {};
		skeletonName = "OEC_turretFolded";
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
		picture = "\OECExtension\Weapons\data\turretMag.paa";
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
	class OEC_Weapon_SIPL_base;

    class OEC_Floor_Turret_Folded: OEC_Weapon_SIPL_base
	{
		oec_droneType = "turretCombine";
		displayName = "[OEC] Combine Sterilizer (Folded)";
		descriptionShort = "An undeployed Combine 'Sterilizer'";
		author = "OEC Extension";
		scope = 2;
		scopeArsenal = 2;
		baseWeapon = "OEC_Floor_Turret_Folded";
		picture = "\OECExtension\Weapons\data\turretFolded.paa";
		//hiddenSelectionsTextures[] = {"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_olive_01_F_co","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
        magazines[] = {};
        magazineWells[] = {};
        reloadAction = "";
        model = "\OECExtension\Drones\data\folded\OEC_turretFolded.p3d";
		_drone_class = "combine turret";

        /*class ACE_CSW
		{
			type = "mount";
			deployTime = 1;
			pickupTime = 1;
			deploy = "OEC_Floor_Turret";
		};*/
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
		model = "\OECExtension\Drones\data\OEC_Floor_Turret.p3d";
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
					icon = "OECExtension\Weapons\data\turret.paa";
				};
				class OEC_reloadTurret
				{
					displayName = "Reload Cell";
					condition = "true";
					statement = "[_target, _player] call OEC_fnc_reloadDrone";
					icon = "OECExtension\Weapons\data\turret.paa";
				};
			};
		};
	};
};