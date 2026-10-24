#include "gameboy.hpp"


class cpu_t {
public:
    std::uint8_t A{}, F{};
    std::uint8_t B{}, C{};
    std::uint8_t D{}, E{};
    std::uint8_t H{}, L{};
    std::uint16_t PC{}, SP{};

    std::uint16_t AF() const {
        return (std::uint16_t{A} <<8) | F;
    }
};


void emulate_instructions(cpu_t cpu) {
}