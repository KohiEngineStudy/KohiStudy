#pragma once

#include "core/application.h"
#include "core/logger.h"
#include "game_types.h"

extern b8 create_game(game* out_game);

int main(void)
{
    game game_inst;

    if(!create_game(&game_inst)){
        KFATAL("Could not create game!");
        return -1;
    }

    if(!game_inst.render || !game_inst.update || !game_inst.initialize || !game_inst.on_resize ){
        KFATAL("The game function pointers must be initialized!");
        return -2;
    }

    if(!application_create(&game_inst)){
        KINFO("Application failed create!\n");
        return 1;
    }

    if(application_run()){
        KINFO("Application did not shutdown gracefully!");
        return 2;
    }


    return 0;
}