// Generated by unRap v1.06 by Kegetys

class RscDisplayMission : RscDisplayEmpty {
	onLoad = "[""onLoad"",_this,""RscDisplayMission"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayMission"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	
	class controls : controls {
		class CA_Vignette : CA_Vignette {};
		
		class BcgWIP : RscWIP {
			idc = 11400;
		};
		
		class VehicleNotification : VehicleNotification {
			idc = 11406;
		};
	};
};