// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config initializations
 * Place the definition of custom battle configuration initializations in this file.
 *
 * Do not forget to add a comma at the end of the line, if you want to add another config
 *
 * Format:
 *	 { "name", &battle_config.<variable name>, <default value>, <minimum value>, <maximum value> },
 **/

	//Max Trap [Hyroshima]
	{ "skill_max_trap",                     &battle_config.skill_max_trap,                  1,      0,      INT_MAX,        },
	{ "global_max_trap",                    &battle_config.global_max_trap,                 1,      0,      INT_MAX,        },