#include <cstdint>

struct Board
{
    /* --- White Bitboards --- */
    uint64_t whitePawns{};
    uint64_t whiteKnights{};
    uint64_t whiteBishops{};
    uint64_t whiteRooks{};
    uint64_t whiteQueen{};
    uint64_t whiteKing{};
};