#pragma once

#include "defines.h"

struct game;

typedef struct application_config {
    /** @brief Window starting position x axis, if applicable. */
    i16 start_pos_x;

    /** @brief Window starting position y axis, if applicable. */
    i16 start_pos_y;

    /** @brief Window starting width, if applicable. */
    i16 start_width;

    /** @brief Window starting height, if applicable. */
    i16 start_height;

    /** @brief The application name used in windowing, if applicable. */
    char* name;

    // /** @brief Configuration for the font system. */
    // font_system_config font_config;

    // /** @brief A darray of render view configurations. */
    // render_view_config* render_views;
} application_config;

KAPI b8 application_create(struct game* game_inst);

KAPI b8 application_run();

