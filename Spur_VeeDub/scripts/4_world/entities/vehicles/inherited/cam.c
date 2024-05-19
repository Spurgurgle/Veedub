modded class DayZPlayerCamera3rdPersonVehicle extends DayZPlayerCameraBase
{
    void DayZPlayerCamera3rdPersonVehicle (DayZPlayer pPlayer, HumanInputController pInput)
    {
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "VeeDub")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "VeeDub_Black_And_Blue")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "VeeDub_Green_And_Black")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "VeeDub_Orange")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "VeeDub_Red_And_Black")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "VeeDub_Red_And_White")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
		if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "VeeDub_White")
		{
		//Print("new camera: DayZPlayerCamera3rdPersonVehicle");
		m_fDistance         = 5.5; 
		m_CameraOffsetMS    = "0.0 1.5 0.0";
		}
    }
}