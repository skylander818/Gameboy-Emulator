#pragma once

#include <iostream>
#include <string>
#include <cstdint>

//SDL shit
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_render.h>

//Console Files
#include "consolefiles\cpu.cpp"
#include "consolefiles\joypad.cpp"
#include "consolefiles\mbc.cpp"
#include "consolefiles\mmu.cpp"
#include "consolefiles\timer.cpp"
#include "consolefiles\audio.cpp"



void emulate_instructions(cpu_t cpu);