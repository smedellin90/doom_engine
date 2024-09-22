#pragma once

#include <cstdint> 
#include <fstream>
#include <string>
#include <vector>

#include "WADReader.h"
#include "DataTypes.h"
#include "Map.h"

class WADLoader
{
public:
    WADLoader(std::string sWADFilePath);
    bool LoadWAD();
    bool LoadMapData(Map &map);

    ~WADLoader();

protected:
    bool OpenAndLoad();
    bool ReadDirectories();
    bool ReadMapVertex(Map &map);
    bool ReadMapLinedef(Map &map);
    int FindMapIndex(Map &map);

    std::string m_sWADFilePath;
    std::ifstream m_WADFile;
    uint8_t *m_WADData;
    std::vector<Directory> m_WADDirectories;
    WADReader m_Reader;
};