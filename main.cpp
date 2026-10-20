#include "gameboy.h"

//GameBoy Color
//CGB
class CGB{
public:
    bool running; 
};


int main(int argc, char* arvg[]){
    std::string x = arvg[1];
    CGB gameboy;
    gameboy.running = true;
    if (gameboy.running){
        std::cout <<"Running\n" ;
        std::cout <<x;
    }
    return 1;
}

