/*
 * xrick/src/xrick.c
 *
 * Copyright (C) 1998-2002 BigOrno (bigorno@bigorno.net). All rights reserved.
 *
 * The use and distribution terms for this software are contained in the file
 * named README, which can be found in the root of this distribution. By
 * using this software in any fashion, you are agreeing to be bound by the
 * terms of this license.
 *
 * You must not remove this notice, or any other, from this software.
 */

#include "system.h"
#include "game.h"

#include <SDL.h>

/*
 * main
 */
int
main(int argc, char *argv[])
{
	sys_init(argc, argv);

    game_init();
    while (game_update()!=0)
    {
        game_draw();
    }
    game_shutdown();

#if 0
    game_run();
    while (true)
        {
            game_update();
            game_draw();
        }
#endif

    sys_shutdown();
	return 0;
}

/* eof */
