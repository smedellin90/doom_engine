#include "WADLoader.h"
#include "Map.h"
#include <iostream>

int main(int argc, char* args[]) {
    WADLoader wl("assets/DOOM2.wad");

    if (!wl.LoadWAD()) 
    {
        std::cout << "Error: Load WAD." << std::endl;
        return -1;
    }

    Map map("MAP01");
    if (!wl.LoadMapData(map))
    {
        std::cout << "Error: Load Map Data." << std::endl;
        return -1;
    }

    std::cout << "Finished without an issue!" << std::endl;

    return 0;
}