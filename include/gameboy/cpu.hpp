#pragma once 
#include <cstdint>


class cpu_t {
public:
    std::uint8_t A{}, F{};
    std::uint8_t B{}, C{};
    std::uint8_t D{}, E{};
    std::uint8_t H{}, L{};
    std::uint16_t PC{}, SP{};
    
    void emulate_instructions();
};
