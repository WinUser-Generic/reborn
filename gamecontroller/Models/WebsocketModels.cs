namespace gamecontroller.Models
{
	public class WebsocketMessage
	{
		public string MessageType { get; set; }
		public string Message { get; set; }

		public WebsocketMessage(string messageType, string message)
		{
			MessageType = messageType;
			Message = message;
		}
	}

	public class WebsocketJoinMessage
	{
		public string IpToJoin { get; set; }
	}

	public class WebsocketChatMessage
	{
		public string Message { get; set; }
	}

	public class WebsocketCharacterSelection
	{
		public string CharacterSelectionObjectName { get; set; }
	}

	public class WebsocketSkinSelection
	{
		public string SkinSelectionObjectName { get; set; }
	}

	public class WebsocketTauntSelection
	{
		public string TauntSelectionObjectName { get; set; }
	}

	public class WebsocketGearSelection
	{
		public string GearSlotOneSelectionObjectName { get; set; }
		public string GearSlotTwoSelectionObjectName { get; set; }
		public string GearSlotThreeSelectionObjectName { get; set; }
	}

	public class WebsocketMapModeSelection
	{
		public string HumanReadableMapModeName { get; set; }
		public string ServerStartString { get; set; }
	}

	public class WebsocketSwitchTeam
	{
		public int TeamId { get; set; }
	}
}
