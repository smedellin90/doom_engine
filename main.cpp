#include "WADLoader.h"
#include <iostream>

int main(int argc, char* args[]) {
    WADLoader wl("artifacts/DOOM2.wad");

    if (!wl.LoadWAD()) 
    {
        std::cout << "Error: Load WAD." << std::endl;
    }

    return 0;
}