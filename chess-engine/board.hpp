#pragma once
#include <cstdint>
#include <string>

enum COLORS{
    WHITE,
    BLACK   
};

class Cboard {

    Cboard fenParser(std::string fen);

    uint64_t whitePawns;
    uint64_t whiteRooks;
    uint64_t whiteKnights;
    uint64_t whiteBishops;
    uint64_t whiteQueen;
    uint64_t whiteKing;

    uint64_t blackPawns;
    uint64_t blackRooks;
    uint64_t blackKnights;
    uint64_t blackBishops;
    uint64_t blackQueen;
    uint64_t blackKing;
};


