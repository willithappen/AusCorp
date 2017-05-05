//--- Disable Saving
execVM "R3F_LOG\init.sqf";

enableSaving [false, false];

adv_aceCPR_quotient = 1;

//Init Block
[] spawn {
  _chatCommands = execVM "WIH\chatCommands.sqf";
}

/*

CAMERA = {
	switch (_this) do {

                //Key Y
		case 55: {
			nul = player exec "camera.sqs";
		};
	};
};

waituntil {!isnull (finddisplay 46)};
(findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call CAMERA;false;"];

*/
