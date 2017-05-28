["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;

if (hasInterface) then
	{
		[] execVM "briefing.sqf";

		setViewDistance 1600;
		setObjectViewDistance 1200;

		player setVariable ["Ace_medical_medicClass", 1];

		debug_davis = false;
	};