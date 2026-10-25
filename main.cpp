#include "gameboy/audio.hpp"
#include "gameboy/cpu.hpp"
#include "gameboy/joypad.hpp"
#include "gameboy/mbc.hpp"
#include "gameboy/mmu.hpp"
#include "gameboy/timer.hpp"
#include <iostream>



//GameBoy Color
//"C:\ROMs\Pokemon - Blue Version (USA, Europe) (SGB Enhanced).gb"

int main(int argc, char* arvg[]){
    if (argc<2){
        std::cout<<"Please provide a rom path" <<std::endl;
        return 0;
    }
    memory_t memory;
    std::string rom_file_path_string = arvg[1];
    memory.rom_file_path = rom_file_path_string;
    memory.rom_init();
}


