#pragma once
#include <cstdint>
#include <iostream>

class memory_t{
public:
    std::uint8_t ROM_00[16384];
    std::uint8_t ROM_01[16384];
    std::uint8_t External_RAM[8192];
    std::uint8_t VRAM[8192];
    std::uint8_t WRAM_0[4096];
    std::uint8_t WRAM_17[4096];
    std::uint8_t Echo_RAM[7680];
    std::uint8_t OAM[160];
    std::uint8_t HRAM[96];
    std::uint8_t IO[128];
    std::string rom_file_path;

    void rom_init();
};