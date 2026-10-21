#include "gameboy.hpp"

//GameBoy Color
//CGB
class CGB{
public:
    bool running; 
};


int main(int argc, char* arvg[]){
    if (argc<2){
        std::cout<<"Please provide a rom path" <<std::endl;
        return 0;
    }
    std::string rom_path = arvg[1];

}

