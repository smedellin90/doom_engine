#pragma once

#include <cstdint>

enum EMAPLUMPSINDEX
{
    eTHINGS = 1,
    eLINEDEFS,
    eSIDEDDEFS,
    eVERTEXES,
    eSEAGS,
    eSSECTORS,
    eNODES,
    eSECTORS,
    eREJECT,
    eBLOCKMAP,
    eCOUNT
}; 

struct Header
{
    char WADType[5];
    uint32_t DirectoryCount;
    uint32_t DirectoryOffset;
};

struct Directory
{
    uint32_t LumpOffset;
    uint32_t LumpSize;
    char LumpName[9];
};

struct Vertex {
    int16_t XPosition;
    int16_t YPosition;
};

struct LineDef {
    int16_t StartVertex;
    int16_t EndVertex;
    int16_t Flags;
    int16_t LineType;
    int16_t SectorTag;
    int16_t RightSidedef;
    int16_t LeftSidedef;
};