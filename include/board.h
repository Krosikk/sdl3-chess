/*
 *      In this file is everything associated with board representation
 */
#ifndef BOARD_H
#define BOARD_H
#include <stdint.h>

typedef struct Board {
        int movesUntilTie;
        uint8_t nextToMove; /* 0 white, 1 black */
        uint8_t check;
        uint8_t board[8][8];
} Board;
/* enum for next move */
enum {
        WHITE,
        BLACK
};
/* enum for chess pieces on board */
enum {
        CLEAR,
        WHITE_PIECE,
        WHITE_ROOK,
        WHITE_KNIGHT,
        WHITE_BISHOP,
        WHITE_KING,
        WHITE_QUEEN,
        BLACK_PIECE,
        BLACK_ROOK,
        BLACK_KNIGHT,
        BLACK_BISHOP,
        BLACK_KING,
        BLACK_QUEEN
};
void ClearBoard(Board *board);
#endif
