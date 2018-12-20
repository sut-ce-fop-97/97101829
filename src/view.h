//
// Created by sadegh on 12/19/18.
//

#include "structs.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>

#ifndef TANK_VIEW_H
#define TANK_VIEW_H

extern int EXIT;
extern int tank_radius;

void initialize_game_values(Map *map);
void init_window();
void render_clear();
void present_window();
void quit_window();
void draw_shapes(Map *map);
void draw_tank(Tank *tank);
void draw_tank_gun(Tank *tank);
void draw_bullet(Bullet *bullet);
void draw_walls(Wall *walls);
int event_handling(Map *map);
void set_key_tank0(Uint32 type, SDL_Keycode code, Map *map);
void set_key_tank1(Uint32 type, SDL_Keycode code, Map *map);
void set_key_tank2(Uint32 type, SDL_Keycode code, Map *map);

#endif //TANK_VIEW_H
