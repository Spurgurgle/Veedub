class VeeDub_base extends CarScript
{
	
	void VeeDub_base()
	{
		m_dmgContactCoef = 0.045;
		
		m_EngineStartOK = "CivilianSedan_engine_start_SoundSet";
		m_EngineStartBattery = "CivilianSedan_engine_failed_start_battery_SoundSet";
		m_EngineStartPlug = "CivilianSedan_engine_failed_start_sparkplugs_SoundSet";
		m_EngineStartFuel = "CivilianSedan_engine_failed_start_fuel_SoundSet";
		m_EngineStopFuel = "offroad_engine_stop_fuel_SoundSet";

		m_CarDoorOpenSound = "offroad_door_open_SoundSet";
		m_CarDoorCloseSound = "offroad_door_close_SoundSet";
	}	

    override float GetActionDistanceFuel()
    {
        return 3.2;
    }
	
	override float GetActionDistanceCoolant()
    {
        return 4.2;
    }
	
	
	override float GetActionDistanceOil()
    {
        return 4.2;
    }
	
	override int GetAnimInstance()
	{
		return VehicleAnimInstances.HATCHBACK;
	}
	
// Override for car-specific light type
		override CarRearLightBase CreateRearLight()
	{
		return CarRearLightBase.Cast( ScriptedLightBase.CreateLight(VeeDubRearLight) );
	}
	
	override CarLightBase CreateFrontLight()
	{
		return CarLightBase.Cast( ScriptedLightBase.CreateLight(VeeDubFrontLight) );
	}

	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		
		string attType = attachment.GetType();
		
		if ( EngineIsOn() || GetCarDoorsState("VeeDub_hood") == CarDoorState.DOORS_CLOSED )
		{
			if ( attType == "CarRadiator" || attType == "CarBattery" || attType == "SparkPlug" )
				return false;
		}

		return true;
	}

	override bool CanDisplayAttachmentCategory( string category_name )
	{
		//super
		if ( !super.CanDisplayAttachmentCategory( category_name ) )
		return false;
		//
	
		category_name.ToLower();
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		
		if ( category_name.Contains( "engine" ) )
		{
			if ( GetCarDoorsState("VeeDub_hood") == CarDoorState.DOORS_CLOSED )
				return false;
		}
				
		return true;
	}
	
	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;

		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor )
			return CarDoorState.DOORS_MISSING;
	
		switch( slotType )
		{
			case "VeeDub_door_driver":
				if ( GetAnimationPhase("DoorsDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
			
			case "VeeDub_door_codriver":
				if ( GetAnimationPhase("DoorsCoDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
			
			case "VeeDub_hood":
				if ( GetAnimationPhase("DoorsHood") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
				
				case "VeeDub_door_cargo1":
				if ( GetAnimationPhase("DoorsCargo1") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
				
			case "VeeDub_door_cargo2":
				if ( GetAnimationPhase("DoorsCargo2") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
			
			case "VeeDub_door_cargo3":
				if ( GetAnimationPhase("DoorsCargo3") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
			
			case "VeeDub_door_cargo4":
				if ( GetAnimationPhase("DoorsCargo4") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
			break;
			
		}

		return CarDoorState.DOORS_MISSING;
	}
	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
			case 0:
				if ( GetCarDoorsState( "VeeDub_door_driver" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			case 1:
				if ( GetCarDoorsState( "VeeDub_door_codriver" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			
			case 2:
				if ( GetCarDoorsState( "VeeDub_door_cargo1" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;
			
			case 3:
				if ( GetCarDoorsState( "VeeDub_door_cargo2" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;	

			case 4:
				if ( GetCarDoorsState( "VeeDub_door_cargo3" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;	

			case 5:
				if ( GetCarDoorsState( "VeeDub_door_cargo4" ) == CarDoorState.DOORS_CLOSED )
					return false;

				return true;
			break;	
		}

		return false;
	}
	
	override string GetDoorSelectionNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "doors_driver";
		break;
		case 1:
			return "doors_codriver";
		break;
         case 2:
			return "doors_cargo1";
		break;
		case 3:
			return "doors_cargo2";
		break;
		case 4:
			return "doors_cargo3";
		break;
		case 5:
			return "doors_cargo4";
		break;
		
		}
		
		return super.GetDoorSelectionNameFromSeatPos(posIdx);
	}
	
	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "VeeDub_door_driver";
		break;
		case 1:
			return "VeeDub_door_codriver";
		break;
		
		case 2:
			return "VeeDub_door_cargo1";
		break;
		
		case 3:
			return "VeeDub_door_cargo2";
		break;
		
		case 4:
			return "VeeDub_door_cargo3";
		break;	

		case 5:
			return "VeeDub_door_cargo4";
		break;
		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	
	override string GetAnimSourceFromSelection( string selection )
	{
		switch( selection )
		{
		case "doors_driver":
			return "DoorsDriver";
		case "doors_codriver":
			return "DoorsCoDriver";
		case "doors_cargo1":
			return "DoorsCargo1";
		case "doors_cargo2":
			return "DoorsCargo2";
		case "doors_cargo3":
			return "DoorsCargo3";
		case "doors_cargo4":
			return "DoorsCargo4";
		case "doors_hood":
			return "DoorsHood";
		}

		return "";
	}
	override string GetDoorConditionPointFromSelection( string selection )
	{
		switch( selection )
		{
		case "seat_driver":
			return "seat_con_1_1";
		break;
		case "seat_codriver":
			return "seat_con_2_1";
		break;
		case "seat_cargo1":
			return "seat_con_1_2";
		break;
		case "seat_cargo2":
			return "seat_con_2_2";
		break;
		}
		
		
		return "";
	}
	
	override bool IsVitalTruckBattery()
	{
		return false;
	}

	override bool IsVitalGlowPlug()
	{
		return false;
	}

	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_DRIVER;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_R;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;

		}

		return 0;
	}
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 )
				return true;
		break;
		
		case 1:
			if ( nextSeat == 0 )
				return true;
		break;			
		}
		return false;
	}

	override bool CanReachDoorsFromSeat( string pDoorsSelection, int pCurrentSeat )
	{
		switch( pCurrentSeat )
		{
		case 0:
			if (pDoorsSelection == "DoorsDriver")
			{
				return true;
			}
		break;
		case 1:
			if (pDoorsSelection == "DoorsCoDriver")
			{
				return true;
			}
		break;
		case 2:
			if (pDoorsSelection == "DoorsCargo1")
			{
				return true;
			}
		break;
		case 3:
			if (pDoorsSelection == "DoorsCargo2")
			{
				return true;
			}
		break;
	

		}
		
		return false;		
	}
	
	override float OnSound( CarSoundCtrl ctrl, float oldValue )
	{
		switch ( ctrl )
		{
			case CarSoundCtrl.DOORS:
				float newValue = 0;
				
				if ( GetCarDoorsState( "VeeDub_door_driver" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;

				if ( GetCarDoorsState( "VeeDub_door_codriver" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;

				if ( GetCarDoorsState( "VeeDub_hood" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.05;
				
				if ( newValue > 1 )
					newValue = 1;
			
				return newValue;
			break;
		}

		return oldValue;
	}
	
	override void OnDebugSpawn()
	{
		EntityAI entity;
		
		if ( Class.CastTo(entity, this) )
		{
			entity.GetInventory().CreateInInventory( "VeeDub_Wheel" );
			entity.GetInventory().CreateInInventory( "VeeDub_Wheel" );
			entity.GetInventory().CreateInInventory( "VeeDub_Wheel" );
			entity.GetInventory().CreateInInventory( "VeeDub_Wheel" );

			entity.GetInventory().CreateInInventory( "CarBattery" );
			entity.GetInventory().CreateInInventory( "SparkPlug" );
			entity.GetInventory().CreateInInventory( "CarRadiator" );

			entity.GetInventory().CreateInInventory( "VeeDub_door_driver" );
			entity.GetInventory().CreateInInventory( "VeeDub_door_codriver" );
			entity.GetInventory().CreateInInventory( "VeeDub_door_cargo1" );
			entity.GetInventory().CreateInInventory( "VeeDub_door_cargo2" );
			entity.GetInventory().CreateInInventory( "VeeDub_door_cargo3" );
			entity.GetInventory().CreateInInventory( "VeeDub_door_cargo4" );
			entity.GetInventory().CreateInInventory( "VeeDub_hood" );
			entity.GetInventory().CreateInInventory( "HatchbackTrunk" );

			entity.GetInventory().CreateInInventory( "HeadlightH7" );
			entity.GetInventory().CreateInInventory( "HeadlightH7" );
		};

		Fill( CarFluid.FUEL, 50 );
		Fill( CarFluid.COOLANT, 6.0 );
		Fill( CarFluid.OIL, 4.0 );
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        if (slot_name == "Melee") UpdateWeaponProxyVisibility(item.IsWeapon());
		
		if (slot_name == "Shoulder") UpdateRifleProxyVisibility(item.IsMeleeWeapon());
    }

    void UpdateWeaponProxyVisibility(bool boo)  
    {
        SetSimpleHiddenSelectionState(0, boo);
        SetSimpleHiddenSelectionState(1, !boo);
    }
	void UpdateRifleProxyVisibility(bool boo)   
    {
		SetSimpleHiddenSelectionState(2, !boo);
        SetSimpleHiddenSelectionState(3, boo);
    }
}
class VeeDub extends VeeDub_base
{
		
}
class VeeDub_Black_And_Blue extends VeeDub_base
{
		
}
class VeeDub_Green_And_Black extends VeeDub_base
{
		
}
class VeeDub_Orange extends VeeDub_base
{
		
}
class VeeDub_Red_And_Black extends VeeDub_base
{
		
}
class VeeDub_Red_And_White extends VeeDub_base
{
		
}
class VeeDub_White extends VeeDub
{
		
}




