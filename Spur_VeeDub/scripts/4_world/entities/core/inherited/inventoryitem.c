class VeeDub_wheel extends CarWheel {
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "VeeDub_wheel":
				newWheel = "VeeDub_wheel_destroyed";
			break;
		}
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}

	override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};


class VeeDub_wheel_destroyed extends CarWheel {};
class VeeDub_door_driver extends CarDoor {};
class VeeDub_door_codriver extends CarDoor {};
class VeeDub_hood extends CarDoor {};
class VeeDub_door_cargo1 extends CarDoor {};
class VeeDub_door_cargo2 extends CarDoor {};
class VeeDub_door_cargo3 extends CarDoor {};
class VeeDub_door_cargo4 extends CarDoor {};

modded class CanisterGasoline extends Bottle_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class SeaChest extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class Barrel_ColorBase extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class ItemBase extends InventoryItem 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
modded class Weapon_Base extends Weapon
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionAttachOnSelection);
		AddAction(ActionDetach);
	}
};
