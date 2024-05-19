class CfgPatches
{
	class Spur_VeeDub
	{
		units[]=
		{
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts",
			"DZ_Data",
			"DZ_Gear_Containers",
			"DZ_Sounds_Effects",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts"
		};
	};
};
class CfgMods
{
	class Spur_VeeDub
	{
		dir="Spur_VeeDub";
		picture="Spur_VeeDub/data/Spur_VeeDub_logo.edds";
		action="";
		hideName=1;
		hidePicture=1;
		name="Spur_VeeDub";
		credits="";
		author="Spurgle";
		authorID="76561198120653239";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Spur_VeeDub/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_VeeDub/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Spur_VeeDub/scripts/5_mission"
				};
			};
		};
	};
};
class CfgSoundShaders
{
	class base_Spur_VeeDub_horn_SoundShader
	{
		range=150;
	};
	class Spur_VeeDub_horn_EXT_SoundShader: base_Spur_VeeDub_horn_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\horn_EXT",
				1
			}
		};
		volume=1;
	};
	class Spur_VeeDub_horn_INT_SoundShader: base_Spur_VeeDub_horn_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\horn_INT",
				1
			}
		};
		volume=1;
	};
	class baseEngineSpur_VeeDub_SoundShader
	{
		range=80;
	};
	class Spur_VeeDub_Engine_Ext_Rpm0_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Rpm0",
				1
			}
		};
		frequency="0.95 * ((850 + ((rpm - 850)/(8000/5600))) max 850) / 850";
		volume="0.75 * 1 * engineOn * 0.4 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) + 2.5*50),(((850+1200)/2) - 50)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Ext_Rpm1_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Rpm1",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm1_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Offload_Rpm1",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 1200";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.6 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((850+1200)/2) - 2.5*50),(((850+1200)/2) + 50)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) + 2.5*150),(((1200+1700)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Ext_Rpm2_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Rpm2",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm2_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Offload_Rpm2",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 1700";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 0.85 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1200+1700)/2) - 2.5*150),(((1200+1700)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) + 2.5*150),(((1700+2300)/2) - 150)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Ext_Rpm3_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Rpm3",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) + 2.5*200),(((2300+3250)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm3_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Offload_Rpm3",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 2300";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((1700+2300)/2) - 2.5*150),(((1700+2300)/2) + 150)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) + 2.5*200),(((2300+3250)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Ext_Rpm4_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Rpm4",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 3250";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) - 2.5*200),(((2300+3250)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) + 2.5*200),(((3250+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm4_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Offload_Rpm4",
				1
			}
		};
		frequency="0.95 * (850 + ((rpm - 850)/(8000/5600))) / 3250";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((2300+3250)/2) - 2.5*200),(((2300+3250)/2) + 200)]) * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) + 2.5*200),(((3250+4400)/2) - 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Ext_Rpm5_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Rpm5",
				1
			}
		};
		frequency="(0.95 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.75 * 1 * (thrust factor[0.1,0.45]) * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) - 2.5*200),(((3250+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm5_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Offload_Rpm5",
				1
			}
		};
		frequency="(0.95 * (850 + ((rpm - 850)/(8000/5600))) / 4400) min (8000/5600)";
		volume="0.75 * 1 * (thrust factor[0.6,0.2]) * 0.8 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) - 2.5*200),(((3250+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos)";
	};
	class Spur_VeeDub_Engine_Ext_Broken_SoundShader: baseEngineSpur_VeeDub_SoundShader
	{
		samples[]=
		{
			
			{
				"\Spur_VeeDub\sounds\vw_Engine_Ext_Broken",
				1
			}
		};
		frequency=0.99999998;
		volume="0.75 * 1 * (0.7 + 0.3 * (speed factor [10,60])) * engineOn * 1 * ((850 + ((rpm - 850)/(8000/5600))) factor [(((3250+4400)/2) - 2.5*200),(((3250+4400)/2) + 200)]) * ((1 - 0.25*doors) max campos) * (rpm factor[4800,6200])";
	};
	
};
class CfgSoundSets
{
	class base_Spur_VeeDub_horn_SoundSet
	{
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		sound3DProcessingType="character3DProcessingType";
		volumeCurve="characterAttenuationCurve";
		spatial=1;
		doppler=0;
		loop=0;
	};
	class Spur_VeeDub_horn_EXT_SoundSet: base_Spur_VeeDub_horn_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_horn_EXT_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
	};
	class Spur_VeeDub_horn_INT_SoundSet: base_Spur_VeeDub_horn_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_horn_INT_SoundShader"
		};
		frequencyRandomizer=0;
		volumeRandomizer=0;
	};
	class baseEngine_EXT_SoundSet
	{
		sound3DProcessingType="Vehicle_Ext_3DProcessingType";
		distanceFilter="softVehiclesDistanceFreqAttenuationFilter";
		volumeCurve="vehicleEngineAttenuationCurve";
		volumeFactor=1;
		occlusionFactor=0;
		obstructionFactor=0;
		spatial=1;
		loop=1;
		positionOffset[]={0,0,0.30000001};
	};
	class Spur_VeeDub_Engine_Ext_Rpm0_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Ext_Rpm0_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm1_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Offload_Ext_Rpm1_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm2_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Offload_Ext_Rpm2_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm3_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Offload_Ext_Rpm3_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm4_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Offload_Ext_Rpm4_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Offload_Ext_Rpm5_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Offload_Ext_Rpm5_SoundShader"
		};
		volumeFactor=1.2;
	};
	class Spur_VeeDub_Engine_Ext_Broken_SoundSet: baseEngine_EXT_SoundSet
	{
		soundShaders[]=
		{
			"Spur_VeeDub_Engine_Ext_Broken_SoundShader"
		};
		volumeFactor=1.6;
	};
};
class CfgSlots
{
	class Slot_VeeDub_wheel_1_1
	{
		name="VeeDub_wheel_1_1";
		displayName="Front Left wheel";
		selection="wheel_1_1";
		ghostIcon="wheel";
	};
	class Slot_VeeDub_wheel_1_2
	{
		name="VeeDub_wheel_1_2";
		displayName="Rear Left wheel";
		selection="wheel_1_2";
		ghostIcon="wheel";
	};
	class Slot_VeeDub_wheel_2_1
	{
		name="VeeDub_wheel_2_1";
		displayName="Front Right wheel";
		selection="wheel_2_1";
		ghostIcon="wheel";
	};
	class Slot_VeeDub_wheel_2_2
	{
		name="VeeDub_wheel_2_2";
		displayName="Rear Right wheel";
		selection="wheel_2_2";
		ghostIcon="wheel";
	};
	class Slot_VeeDub_wheel_spare
	{
		name="VeeDub_wheel_spare";
		displayName="Spare wheel";
		selection="wheel_spare";
		ghostIcon="wheel";
	};
	class Slot_VeeDub_door_driver
	{
		name="VeeDub_door_driver";
		displayName="Drivers Door";
		selection="doors_driver";
		ghostIcon="doorfront";
	};
	class Slot_VeeDub_door_codriver
	{
		name="VeeDub_door_codriver";
		displayName="Passenger Door";
		selection="doors_codriver";
		ghostIcon="doorfront";
	};
	class Slot_VeeDub_hood
	{
		name="VeeDub_hood";
		displayName="Hood";
		selection="doors_hood";
		ghostIcon="hood";
	};
	class Slot_VeeDub_door_cargo1
	{
		name="VeeDub_door_cargo1";
		displayName="Rear Door";
		selection="doors_cargo1";
		ghostIcon="doorrear";
	};
	class Slot_VeeDub_door_cargo2
	{
		name="VeeDub_door_cargo2";
		displayName="Rear Door";
		selection="doors_cargo2";
		ghostIcon="doorrear";
	};
	class Slot_VeeDub_door_cargo3
	{
		name="VeeDub_door_cargo3";
		displayName="Side Door";
		selection="doors_cargo3";
		ghostIcon="doorrear";
	};
	class Slot_VeeDub_door_cargo4
	{
		name="VeeDub_door_cargo4";
		displayName="Side Door";
		selection="doors_cargo4";
		ghostIcon="doorrear";
	};
	class Slot_CanisterGasoline
	{
		name="CanisterGasoline";
		displayName="CanisterGasoline";
		selection="CanisterGasoline";
		ghostIcon="gascanister";
	};
	class Slot_sea_chest
	{
		name="sea_chest";
		displayName="sea_chest";
		selection="sea_chest";
		ghostIcon="cat_common_cargo";
	};
	class Slot_55galDrum_1
	{
		name="55galDrum_1";
		displayName="Barrel";
		selection="55galDrum_1";
		ghostIcon="barrel";
	};
};
class CfgVehicles
{
	class CarScript;
	class Crew;
	class CarDoor;
	class Front;
	class Rear;
	class Left;
	class Right;
	class AnimationSources;
	class SimulationModule;
	class Axles;
	class Wheels;
	class DamageSystem;
	class GlobalHealth;
	class DamageZones;
	class Window;
	class Health;
	class Doors;
	class CarWheel;
	class Bottle_Base;
	class Container_Base;
	class SeaChest: Container_Base
	{
		inventorySlot[]=
		{
			"sea_chest_1",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4",
			"sea_chest_5",
			"sea_chest_6",
			"sea_chest_7",
			"sea_chest",
			"SeaChest",
			"SeaChest0",
			"SeaChest1",
			"SeaChest2",
			"SeaChest3",
			"SeaChest4",
			"SeaChest5",
			"SeaChest6",
			"SeaChest7"
		};
	};
	class CanisterGasoline: Bottle_Base
	{
		inventorySlot[] = 
		{
			"CanisterGasoline0",
			"CanisterGasoline1",
			"CanisterGasoline2",
			"CanisterGasoline3",
			"CanisterGasoline4",
			"CanisterGasoline5",
			"CanisterGasoline6",
			"CanisterGasoline7",
			"JerryCan",
			"CanisterGasoline"
		};
	};
	class Barrel_ColorBase: Container_Base
	{
		inventorySlot[]=
		{
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"55galDrum_7",
			"55galDrum_8",
			"55galDrum_9",
			"55galDrum_10",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4"
		};
	};
	class VeeDub_wheel: CarWheel
	{
		scope=2;
		displayName="VeeDub wheel";
		model="Spur_VeeDub\proxy\VeeDub_wheel.p3d";
		weight=20000;
		itemSize[]={6,6};
		inventorySlot[]=
		{
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare"
		};
		rotationFlags=8;
		physLayer="item_large";
		radiusByDamage[]={0,0.39399999,0.30000001,0.2,0.99980003,0.15000001,0.99989998,0.1};
		radius=0.34999999;
		width=0.182;
		tyreRollResistance=0.015;
		tyreTread=1;
		friction=0.95999998;
		tyre="TYRE_DEFAULT";
	};
	class VeeDub_wheel_destroyed: CarWheel
	{
		scope=2;
		displayName="VeeDub Wheel Wrecked";
		model="Spur_VeeDub\proxy\VeeDub_wheel_destroyed.p3d";
		weight=20000;
		inventorySlot[]=
		{
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare"
		};
		rotationFlags=8;
		radius=0.23000001;
		width=0.182;
		tyreRollResistance=1;
		tyreRollDrag=70;
		tyreRoughness=1;
		tyreTread=0.5;
	};
	class VeeDub_door_driver: CarDoor
	{
		scope=2;
		displayName="VeeDub driver door";
		descriptionShort="VeeDub driver door";
		Model="Spur_VeeDub\proxy\VeeDub_door_driver.p3d";
		weight=20000;
		inventorySlot[]=
		{
			"VeeDub_door_driver"
		};
		rotationFlags=8;
		hiddenSelectionsMaterials[]=
		{
			"Spur_VeeDub\data\Van_mat.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.51,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.01,
								"hidden"
							}
						};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"
								}
							},
							
							{
								0.51,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_damage.rvmat"
								}
							},
							
							{
								0.01,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class VeeDub_door_codriver: VeeDub_door_driver
	{
		displayName="VeeDub codriver door";
		descriptionShort="VeeDub codriver door";
		Model="Spur_VeeDub\proxy\VeeDub_door_codriver.p3d";
		inventorySlot[]=
		{
			"VeeDub_door_codriver"
		};
		rotationFlags=8;
	};
	class VeeDub_door_cargo1: VeeDub_door_driver
	{
		displayName="VeeDub rear left door";
		descriptionShort="VeeDub rear left door";
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo1.p3d";
		inventorySlot[]=
		{
			"VeeDub_door_cargo1"
		};
		rotationFlags=17;
	};
	class VeeDub_door_cargo2: VeeDub_door_driver
	{
		displayName="VeeDub rear right door";
		descriptionShort="VeeDub rear right door";
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo2.p3d";
		inventorySlot[]=
		{
			"VeeDub_door_cargo2"
		};
		rotationFlags=17;
	};
	class VeeDub_door_cargo3: VeeDub_door_driver
	{
		displayName="VeeDub right side door";
		descriptionShort="VeeDub right side door";
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo3.p3d";
		inventorySlot[]=
		{
			"VeeDub_door_cargo3"
		};
		rotationFlags=8;
	};
	class VeeDub_door_cargo4: VeeDub_door_driver
	{
		displayName="VeeDub left side door";
		descriptionShort="VeeDub left side door";
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo4.p3d";
		inventorySlot[]=
		{
			"VeeDub_door_cargo4"
		};
		rotationFlags=8;
	};
	class VeeDub_hood: VeeDub_door_driver
	{
		scope=2;
		displayName="VeeDub Grill";
		descriptionShort="front grill for the VeeDub";
		model="Spur_VeeDub\proxy\VeeDub_hood.p3d";
		weight=5000;
		inventorySlot[]=
		{
			"VeeDub_hood"
		};
		rotationFlags=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					RefTexsMats[]=
					{
						"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood.rvmat"
							}
						},
						
						{
							0.51,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"dz\vehicles\wheeled\offroadhatchback\data\green\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="hatchbackdoors_driver_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="hatchbackhood_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class VeeDub_base: CarScript
	{
		scope=0;
		displayname="VeeDub base";
		Model="";
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		fuelCapacity=70;
		fuelConsumption=30;
		class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos driver";
				getInDir="pos driver dir";
				isDriver=1;
			};
			class CoDriver
			{
				actionSel="seat_codriver";
				proxyPos="crewCodriver";
				getInPos="pos_codriver";
				getInDir="pos_codriver_dir";
				isDriver=0;
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="crewCargo1";
			    getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="crewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,100};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class AnimationSources
		{
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.8;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class HideDestroyed_1_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_1_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class AnimHitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCargo";
			};
			class SeatDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.70000009;
			};
			class SeatCoDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.70000009;
			};
			class DoorsCargo1
			{
				source="user";
				initPhase=0;
				animPeriod=0.70000009;
			};
			class DoorsCargo2
			{
				source="user";
				initPhase=0;
				animPeriod=0.70000009;
			};
			class DoorsCargo3
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000009;
			};
			class DoorsCargo4
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000009;
			};
			class damper_1_1
			{
				source="user";
				initPhase=0.5;
				animPeriod=1;
			};
			class damper_2_1: damper_1_1
			{
			};
			class damper_1_2: damper_1_1
			{
			};
			class damper_2_2: damper_1_2
			{
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="$STR_attachment_Engine0";
				description="";
				icon="cat_vehicle_engine";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"Reflector_1_1",
					"Reflector_2_1"
				};
			};
			class Body
			{
				name="$STR_attachment_Body0";
				description="";
				icon="cat_vehicle_body";
				attachmentSlots[]=
				{
					
					"VeeDub_door_driver",
					"VeeDub_door_codriver",
					"VeeDub_door_cargo1",
					"VeeDub_door_cargo2",
					"VeeDub_door_cargo3",
					"VeeDub_door_cargo4",
					"VeeDub_hood"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"VeeDub_wheel_1_1",
					"VeeDub_wheel_1_2",
					"VeeDub_wheel_2_1",
					"VeeDub_wheel_2_2"
				};
			};
			class Attachment
			{
				name="Storage";
				description="";
				icon="trunk";
				attachmentSlots[]=
				{
					"CanisterGasoline",
					"sea_chest",
					"55galDrum_1",
					"Melee",
					"Shoulder",
					"VeeDub_wheel_spare"
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.01,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.51,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.01,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					class Health
					{
						hitpoints=3000;
						transferToGlobalCoef=0;
					};
					inventorySlots[]={};
				};
				class Front
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front"
					};
					class Health
					{
						hitpoints=1200;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"
								}
							},
							
							{
								0.51,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"
								}
							},
							
							{
								0.01,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_1",
						"Fender_2_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.69999999,0.69999999,0.80000001};
					inventorySlots[]=
					{
						"VeeDub_hood",
						"CarRadiator",
						"VeeDub_wheel_1_1",
						"VeeDub_wheel_2_1"
					};
					inventorySlotsCoefs[]={0.69999999,0.5,0.80000001,0.80000001};
				};
				class Reflector_1_1
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					class Health
					{
						hitpoints=10;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\headlights_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.51,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0.01,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_1_1"
					};
					transferToZonesCoefs[]={1,1};
					inventorySlots[]=
					{
						"Reflector_1_1",
						"VeeDub_wheel_1_1"
					};
					inventorySlotsCoefs[]={1,0.89999998};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_2_1"
					};
					inventorySlots[]=
					{
						"Reflector_2_1",
						"VeeDub_wheel_2_1"
					};
				};
				class Back
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_back"
					};
					componentNames[]=
					{
						"dmgZone_back"
					};
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									""
								}
							},
							
							{
								0.69999999,
								
								{
									""
								}
							},
							
							{
								0.51,
								
								{
									""
								}
							},
							
							{
								0.30000001,
								
								{
									""
								}
							},
							
							{
								0.01,
								
								{
									""
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_2",
						"Fender_2_2",
						"WindowLR",
						"WindowRR"
					};
					transferToZonesCoefs[]={0.30000001,0.30000001,0.2,0.2};
					inventorySlots[]=
					{
						"VeeDub_door_cargo1",
						"VeeDub_door_cargo2",
						"VeeDub_wheel_1_2",
						"VeeDub_wheel_2_2"
					};
					inventorySlotsCoefs[]={0.89999998,0.89999998,0.89999998,0.89999998};
				};
				class Roof
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_roof"
					};
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					class Health
					{
						hitpoints=700;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									""
								}
							},
							
							{
								0.69999999,
								
								{
									""
								}
							},
							
							{
								0.51,
								
								{
									""
								}
							},
							
							{
								0.30000001,
								
								{
									""
								}
							},
							
							{
								0.01,
								
								{
									""
								}
							}
						};
					};
					inventorySlotsCoefs[]={};
					inventorySlots[]={};
				};
				class Fender_1_1
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					class Health
					{
						hitpoints=1200;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									""
								}
							},
							
							{
								0.69999999,
								
								{
									""
								}
							},
							
							{
								0.51,
								
								{
									""
								}
							},
							
							{
								0.30000001,
								
								{
									""
								}
							},
							
							{
								0.01,
								
								{
									""
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_1_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.30000001,0.60000002,0.40000001};
					inventorySlots[]=
					{
						"VeeDub_hood",
						"VeeDub_wheel_1_1",
						"VeeDub_door_driver"
					};
					inventorySlotsCoefs[]={0.60000002,0.89999998,0.30000001};
				};
				class Fender_2_1: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_2_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.30000001,0.60000002,0.40000001};
					inventorySlots[]=
					{
						"VeeDub_hood",
						"VeeDub_wheel_2_1",
						"VeeDub_door_codriver"
					};
					inventorySlotsCoefs[]={0.60000002,0.89999998,0.30000001};
				};
				class Fender_1_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_1_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank",
						"WindowLR"
					};
					transferToZonesCoefs[]={0.69999999,0.69999999,0.69999999};
					inventorySlots[]=
					{
						"NivaTrunk",
						"VeeDub_wheel_1_2",
						"VeeDub_door_driver"
					};
					inventorySlotsCoefs[]={0.69999999,0.89999998,0.30000001};
				};
				class Fender_2_2: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_2"
					};
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank",
						"WindowRR"
					};
					transferToZonesCoefs[]={0.69999999,0.69999999,0.69999999};
					inventorySlots[]=
					{
						"NivaTrunk",
						"VeeDub_wheel_2_2",
						"VeeDub_door_codriver"
					};
					inventorySlotsCoefs[]={0.69999999,0.89999998,0.30000001};
				};
				class WindowFront
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgzone_windowfront"
					};
					componentNames[]=
					{
						"dmgzone_windowfront"
					};
					class Health
					{
						hitpoints=120;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.51,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.01,
								"hidden"
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class WindowLR
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_windowLeft"
					};
					componentNames[]=
					{
						"dmgZone_windowLeft"
					};
					class Health
					{
						hitpoints=150;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.51,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"Spur_VeeDub\data\Van_glass.rvmat"
								}
							},
							
							{
								0.01,
								"hidden"
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class WindowRR: WindowLR
				{
					memoryPoints[]=
					{
						"dmgZone_windowRight"
					};
					componentNames[]=
					{
						"dmgZone_windowRight"
					};
				};
				class Engine
				{
					fatalInjuryCoef=0.001;
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							
							{
								1.01,
								
								{
									""
								}
							},
							
							{
								0.69999999,
								
								{
									""
								}
							},
							
							{
								0.51,
								
								{
									""
								}
							},
							
							{
								0.30000001,
								
								{
									""
								}
							},
							
							{
								0.01,
								
								{
									""
								}
							}
						};
					};
					inventorySlots[]=
					{
						"CarBattery",
						"SparkPlug",
						"CarRadiator"
					};
					inventorySlotsCoefs[]={0.2,0.2,0.40000001};
				};
				class FuelTank
				{
					fatalInjuryCoef=-1;
					componentNames[]=
					{
						"dmgZone_fuelTank"
					};
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.01,
								{}
							},
							
							{
								0.69999999,
								{}
							},
							
							{
								0.51,
								{}
							},
							
							{
								0.30000001,
								{}
							},
							
							{
								0.01,
								{}
							}
						};
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
			};
		};			
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1;
						height=1.5;
						center[]={0,0,0.69999999};
					};
					class Cyl3
					{
						radius=1;
						height=1.5;
						center[]={0,0,-0.69999999};
					};
				};
			};
		};
		class SimulationModule
		{
			drive="DRIVE_RWD";
			airDragFrontTotal=0.995;
			braking[]={0,0.30000001,1,0.80000001,2.5,0.89999998,3,0.95};
			class Steering
			{
				increaseSpeed[]={0,40,60,30,100,15};
				decreaseSpeed[]={0,50,60,45,100,20};
				centeringSpeed[]={0,0,15,27,60,45,100,63};
			};
			class Throttle
			{
				reactionTime=0.80000001;
				defaultThrust=0.89999998;
				gentleThrust=0.80000001;
				turboCoef=2.8;
				gentleCoef=0.5;
			};
			class Engine
			{
				inertia=0.23;
				torqueMax=145;
				torqueRpm=2700;
				powerMax=60;
				powerRpm=4400;
				rpmIdle=900;
				rpmMin=1000;
				rpmRedline=5000;
				rpmMax=5800;
				rpmClutch=1500;
			};
			class Gearbox
			{
				reverse=6.6;
				ratios[]={6.5,4.6,2.3,1.6};
				timeToUncoupleClutch=0.1;
				timeToCoupleClutch=0.30000001;
				maxClutchTorque=165;
			};
			class Axles
			{
				class Front
				{
					maxSteeringAngle=35;
					finalRatio=4.0999999;
					brakeBias=0.60000002;
					brakeForce=3500;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Suspension
					{
						swayBar=1000;
						stiffness=47500;	//35550
						compression=13000; 	//1450
						damping=8700;
						travelMaxUp=0.158200003;
						travelMaxDown=0.083300002;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							wheelHub="wheel_1_1_damper_land";
							animDamper="damper_1_1";
							inventorySlot="VeeDub_wheel_1_1";
						};
						class Right
						{
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							wheelHub="wheel_2_1_damper_land";
							animDamper="damper_2_1";
							inventorySlot="VeeDub_wheel_2_1";
						};
					};
				};
				class Rear
				{
					maxSteeringAngle=0;
					finalRatio=4.0999999;
					brakeBias=0.40000001;
					brakeForce=3200;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Suspension
					{
						swayBar=1100;
						stiffness=41000;	//35650
						compression=6900; 	//1550
						damping=6600;
						travelMaxUp=0.18200003;
						travelMaxDown=0.073300002;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							wheelHub="wheel_1_2_damper_land";
							animDamper="damper_1_2";
							inventorySlot="VeeDub_wheel_1_2";
						};
						class Right
						{
							animTurn="turnbacktright";
							animRotation="wheelbackright";
							wheelHub="wheel_2_2_damper_land";
							animDamper="damper_2_2";
							inventorySlot="VeeDub_wheel_2_2";
						};
					};
				};
			};
		};
		engineVitalParts[]=
		{
			"SparkPlug",
			"CarBattery"
		};
		dashboardMatOn="Spur_VeeDub\data\dashlights.rvmat";
		dashboardMatOff="Spur_VeeDub\data\Van_mat.rvmat";
		brakeReflectorMatOn="Spur_VeeDub\data\taillights.rvmat";
		brakeReflectorMatOff="Spur_VeeDub\data\Van_mat.rvmat";
		frontReflectorMatOn="Spur_VeeDub\data\lights.rvmat";
		frontReflectorMatOff="Spur_VeeDub\data\Van_mat.rvmat";
		ReverseReflectorMatOn="Spur_VeeDub\data\taillights.rvmat";
		ReverseReflectorMatOff="Spur_VeeDub\data\Van_mat.rvmat";
		TailReflectorMatOn="Spur_VeeDub\data\taillights.rvmat";
		TailReflectorMatOff="Spur_VeeDub\data\Van_mat.rvmat";
		hiddenSelections[]=
		{
			"light_1_1",
			"light_2_1",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"camo_chassis"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat",
			"Spur_VeeDub\data\Van_mat.rvmat"
			
		};
		simpleHiddenSelections[]=
        {
            "slot_melee_rifle",
            "slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
        };
		class Sounds
		{
			thrust=0.60000002;
			thrustTurbo=1;
			thrustGentle=0.30000001;
			thrustSmoothCoef=0.02;
			camposSmoothCoef=0.029999999;
			soundSetsFilter[]=
			{
				"Spur_VeeDub_Engine_Offload_Ext_Rpm1_SoundSet",
				"Spur_VeeDub_Engine_Offload_Ext_Rpm2_SoundSet",
				"Spur_VeeDub_Engine_Offload_Ext_Rpm3_SoundSet",
				"Spur_VeeDub_Engine_Offload_Ext_Rpm4_SoundSet",
				"Spur_VeeDub_Engine_Offload_Ext_Rpm5_SoundSet",
				"Spur_VeeDub_Engine_Ext_Rpm0_SoundSet",
				"Spur_VeeDub_Engine_Ext_Rpm1_SoundSet",
				"Spur_VeeDub_Engine_Ext_Rpm2_SoundSet",
				"Spur_VeeDub_Engine_Ext_Rpm3_SoundSet",
				"Spur_VeeDub_Engine_Ext_Rpm4_SoundSet",
				"Spur_VeeDub_Engine_Ext_Rpm5_SoundSet",
				"Spur_VeeDub_Engine_Ext_Broken_SoundSet",
				"offroad_Tires_rock_slow_Ext_SoundSet",
				"offroad_Tires_rock_fast_Ext_SoundSet",
				"offroad_Tires_grass_slow_Ext_SoundSet",
				"offroad_Tires_grass_fast_Ext_SoundSet",
				"offroad_Tires_gravel_slow_Ext_SoundSet",
				"offroad_Tires_gravel_fast_Ext_SoundSet",
				"offroad_Tires_gravel_dust_fast_Ext_SoundSet",
				"offroad_Tires_asphalt_slow_Ext_SoundSet",
				"offroad_Tires_asphalt_fast_Ext_SoundSet",
				"offroad_Tires_water_slow_Ext_SoundSet",
				"offroad_Tires_water_fast_Ext_SoundSet",
				"Offroad_skid_dirt_SoundSet",
				"offroad_dirt_turn_SoundSet",
				"offroad_Rain_Ext_SoundSet",
				"offroad_damper_left_SoundSet",
				"offroad_damper_right_SoundSet"
			};
			soundSetsInt[]=
			{
				"Offroad_Tires_Asphalt_Fast_General_Int_SoundSet",
				"Offroad_Wind_SoundSet"
			};
		};
		hornSoundSetEXT="Spur_VeeDub_Horn_Ext_SoundSet";
        hornSoundSetINT="Spur_VeeDub_Horn_Int_SoundSet";
	};
	class VeeDub: VeeDub_base
	{
		scope=2;
		InteractActions[]={1048,1035};
		displayname="VeeDub ";
		Model="\Spur_VeeDub\Spur_VeeDub.p3d";
		maxspeed=40;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Spur_VeeDub\data\Van_Base_Color_Black.paa"
		};
	};
	class VeeDub_Black_And_Blue: VeeDub_base
	{
		scope=2;
		InteractActions[]={1048,1035};
		displayname="VeeDub ";
		Model="\Spur_VeeDub\Spur_VeeDub.p3d";
		maxspeed=40;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Spur_VeeDub\data\Van_Base_Color_Black_And_Blue.paa"
		};
	};
	class VeeDub_door_driver_Black_And_Blue: VeeDub_door_driver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Black_And_Blue.paa"
		};
	};
	
	class VeeDub_door_codriver_Black_And_Blue: VeeDub_door_codriver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Black_And_Blue.paa"
		};
	};
	class VeeDub_door_cargo1_Black_And_Blue: VeeDub_door_cargo1
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Black_And_Blue.paa"
		};
	};
	class VeeDub_door_cargo2_Black_And_Blue: VeeDub_door_cargo2
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Black_And_Blue.paa"
		};
	};
	class VeeDub_door_cargo3_Black_And_Blue: VeeDub_door_cargo3
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Black_And_Blue.paa"
		};
	};
	class VeeDub_door_cargo4_Black_And_Blue: VeeDub_door_cargo4
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Black_And_Blue.paa"
		};
	};
	class VeeDub_Green_And_Black: VeeDub_base
	{
		scope=2;
		InteractActions[]={1048,1035};
		displayname="VeeDub ";
		Model="\Spur_VeeDub\Spur_VeeDub.p3d";
		maxspeed=40;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Spur_VeeDub\data\Van_Base_Color_Green_And_Black.paa"
		};
	};
	class VeeDub_door_driver_Green_And_Black: VeeDub_door_driver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Green_And_Black.paa"
		};
	};
	class VeeDub_door_codriver_Green_And_Black: VeeDub_door_codriver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Green_And_Black.paa"
		};
	};
	class VeeDub_door_cargo1_Green_And_Black: VeeDub_door_cargo1
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Green_And_Black.paa"
		};
	};
	class VeeDub_door_cargo2_Green_And_Black: VeeDub_door_cargo2
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Green_And_Black.paa"
		};
	};
	class VeeDub_door_cargo3_Green_And_Black: VeeDub_door_cargo3
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Green_And_Black.paa"
		};
	};
	class VeeDub_door_cargo4_Green_And_Black: VeeDub_door_cargo4
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Green_And_Black.paa"
		};
	};
	class VeeDub_Orange: VeeDub_base
	{
		scope=2;
		InteractActions[]={1048,1035};
		displayname="VeeDub ";
		Model="\Spur_VeeDub\Spur_VeeDub.p3d";
		maxspeed=40;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Spur_VeeDub\data\Van_Base_Color_Orange.paa"
		};
	};
	class VeeDub_door_driver_Orange: VeeDub_door_driver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Orange.paa"
		};
	};
	class VeeDub_door_codriver_Orange: VeeDub_door_codriver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Orange.paa"
		};
	};
	class VeeDub_door_cargo1_Orange: VeeDub_door_cargo1
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Orange.paa"
		};
	};
	class VeeDub_door_cargo2_Orange: VeeDub_door_cargo2
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Orange.paa"
		};
	};
	class VeeDub_door_cargo3_Orange: VeeDub_door_cargo3
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Orange.paa"
		};
	};
	class VeeDub_door_cargo4_Orange: VeeDub_door_cargo4
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Orange.paa"
		};
	};
	class VeeDub_Red_And_Black: VeeDub_base
	{
		scope=2;
		InteractActions[]={1048,1035};
		displayname="VeeDub ";
		Model="\Spur_VeeDub\Spur_VeeDub.p3d";
		maxspeed=40;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Spur_VeeDub\data\Van_Base_Color_Red_And_Black.paa"
		};
	};
	class VeeDub_door_driver_Red_And_Black: VeeDub_door_driver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_Black.paa"
		};
	};
	class VeeDub_door_codriver_Red_And_Black: VeeDub_door_codriver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_Black.paa"
		};
	};
	class VeeDub_door_cargo1_Red_And_Black: VeeDub_door_cargo1
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_Black.paa"
		};
	};
	class VeeDub_door_cargo2_Red_And_Black: VeeDub_door_cargo2
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_Black.paa"
		};
	};
	class VeeDub_door_cargo3_Red_And_Black: VeeDub_door_cargo3
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_Black.paa"
		};
	};
	class VeeDub_door_cargo4_Red_And_Black: VeeDub_door_cargo4
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_Black.paa"
		};
	};
	class VeeDub_Red_And_White: VeeDub_base
	{
		scope=2;
		InteractActions[]={1048,1035};
		displayname="VeeDub ";
		Model="\Spur_VeeDub\Spur_VeeDub.p3d";
		maxspeed=40;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Spur_VeeDub\data\Van_Base_Color_Red_And_White.paa"
		};
	};
	class VeeDub_door_driver_Red_And_White: VeeDub_door_driver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_White.paa"
		};
	};
	class VeeDub_door_codriver_Red_And_White: VeeDub_door_codriver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_White.paa"
		};
	};
	class VeeDub_door_cargo1_Red_And_White: VeeDub_door_cargo1
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_White.paa"
		};
	};
	class VeeDub_door_cargo2_Red_And_White: VeeDub_door_cargo2
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_White.paa"
		};
	};
	class VeeDub_door_cargo3_Red_And_White: VeeDub_door_cargo3
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_White.paa"
		};
	};
	class VeeDub_door_cargo4_Red_And_White: VeeDub_door_cargo4
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_Red_And_White.paa"
		};
	};
	class VeeDub_White: VeeDub_base
	{
		scope=2;
		InteractActions[]={1048,1035};
		displayname="VeeDub ";
		Model="\Spur_VeeDub\Spur_VeeDub.p3d";
		maxspeed=40;
		attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"VeeDub_door_driver",
			"VeeDub_door_codriver",
			"VeeDub_door_cargo1",
			"VeeDub_door_cargo2",
			"VeeDub_door_cargo3",
			"VeeDub_door_cargo4",
			"VeeDub_hood",
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare",
			"CanisterGasoline",
			"sea_chest",
			"55galDrum_1",
			"Melee",
			"Shoulder"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Spur_VeeDub\data\Van_Base_Color_White.paa"
		};
	};
	class VeeDub_door_driver_White: VeeDub_door_driver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_White.paa"
		};
	};
	class VeeDub_door_codriver_White: VeeDub_door_codriver
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_White.paa"
		};
	};
	class VeeDub_door_cargo1_White: VeeDub_door_cargo1
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_White.paa"
		};
	};
	class VeeDub_door_cargo2_White: VeeDub_door_cargo2
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_White.paa"
		};
	};
	class VeeDub_door_cargo3_White: VeeDub_door_cargo3
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_White.paa"
		};
	};
	class VeeDub_door_cargo4_White: VeeDub_door_cargo4
	{
		hiddenSelections[]=
		{
			"dmgzone_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"Spur_VeeDub\data\Van_Base_Color_White.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyPart
	{
		scope=2;
		simulation="ProxyInventory";
		model="";
		inventorySlot="";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=1;
	};
	class ProxyAttachment;
	class ProxyVehiclePart: ProxyAttachment
	{
		scope=2;
		simulation="ProxyInventory";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=0;
	};
	class ProxyVeeDub_wheel: ProxyVehiclePart
	{
		model="Spur_VeeDub\proxy\VeeDub_wheel.p3d";
		inventorySlot[]=
		{
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare"
		};
	};
	class ProxyVeeDub_wheel_destroyed: ProxyVehiclePart
	{
		model="Spur_VeeDub\proxy\VeeDub_wheel_destroyed.p3d";
		inventorySlot[]=
		{
			"VeeDub_wheel_1_1",
			"VeeDub_wheel_1_2",
			"VeeDub_wheel_2_1",
			"VeeDub_wheel_2_2",
			"VeeDub_wheel_spare"
		};
	};
	class ProxyVeeDub_door_driver: ProxyVehiclePart
	{
		Model="Spur_VeeDub\proxy\VeeDub_door_driver.p3d";
		inventorySlot="VeeDub_door_driver";
	};
	class ProxyVeeDub_door_codriver: ProxyVehiclePart
	{
		Model="Spur_VeeDub\proxy\VeeDub_door_codriver.p3d";
		inventorySlot="VeeDub_door_codriver";
	};
	class ProxyVeeDub_hood: ProxyVehiclePart
	{
		Model="Spur_VeeDub\proxy\VeeDub_hood.p3d";
		inventorySlot="VeeDub_hood";
	};
	class ProxyVeeDub_door_cargo1: ProxyVehiclePart
	{
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo1.p3d";
		inventorySlot="VeeDub_door_cargo1";
	};
	class ProxyVeeDub_door_cargo2: ProxyVehiclePart
	{
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo2.p3d";
		inventorySlot="VeeDub_door_cargo2";
	};
	class ProxyVeeDub_door_cargo3: ProxyVehiclePart
	{
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo3.p3d";
		inventorySlot="VeeDub_door_cargo3";
	};
	class ProxyVeeDub_door_cargo4: ProxyVehiclePart
	{
		Model="Spur_VeeDub\proxy\VeeDub_door_cargo4.p3d";
		inventorySlot="VeeDub_door_cargo4";
	};
	class Proxyjerrycan: ProxyVehiclePart
	{
		model="DZ\vehicles\parts\jerrycan.p3d";
		inventorySlot="CanisterGasoline";
	};
	class Proxysea_chest: ProxyVehiclePart
	{
		model="DZ\gear\camping\sea_chest.p3d";
		inventorySlot[]=
		{
			"sea_chest",
			"sea_chest_1",
			"sea_chest_2",
			"sea_chest_3",
			"sea_chest_4"
		};
	};
	class Proxy55galdrum: ProxyVehiclePart
	{
		model="DZ\gear\containers\55galdrum.p3d";
		inventorySlot[]=
		{
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"55galDrum_7",
			"55galDrum_8",
			"55galDrum_9",
			"55galDrum_10",
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4"
		};
	};
};
