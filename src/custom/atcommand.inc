// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom Atcommands
 * Place the body of custom atcommands in this file.
 * Format:
 *	ACMD_FUNC(command_name)
 *	{
 *		<code>;
 *	}
 **/

//ACMD_FUNC(newcommand)
//{
//	clif_displaymessage(fd, "It works!");
//	clif_specialeffect(&sd->bl, EF_HEARTCASTING, AREA);
//	return 0;
//}

ACMD_FUNC(battleinfo)
{
	if( sd->state.battleinfo )
	{
		clif_displaymessage(fd, "- Battle Information Display OFF - Kill/Death -");
		sd->state.battleinfo = 0;
	}
	else
	{
		clif_displaymessage(fd, "- Battle Information Display ON - Kill/Death -");
		sd->state.battleinfo = 1;
	}
	return 0;
}