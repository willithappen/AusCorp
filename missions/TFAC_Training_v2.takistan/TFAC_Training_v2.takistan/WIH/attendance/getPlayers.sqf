_player = profileName;

_gMembers = [];
{
	_unit = name _x;
	_gMembers = _gMembers + [_unit];
} forEach AllPlayers;
_GroupMembers = _gMembers joinString ", ";

diag_log "==Attendance Dump==";
diag_log format ["%1",_GroupMembers];