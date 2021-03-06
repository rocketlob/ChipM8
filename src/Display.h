#ifndef DISPLAY_H
#define DISPLAY_H

#include "Chip8.h"
#include <pdcurses\curses.h>
#include <SDL\SDL.h>
#include <SDL\SDL_opengl.h>
#define DEBUG_WIDTH 35
#define DEBUG_HEIGHT 20
#define DISPLAY_WIDTH 640
#define DISPLAY_HEIGHT 320


//SDL window refreshing and OpenGL setup and refreshing
void initGL();
void render(Chip8* chip8, SDL_Window* screen);


//Debug display functions
WINDOW* debugSetup();
void debugUpdate(Chip8* chip8, WINDOW* win);

#endif