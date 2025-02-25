#include "../include/board.h"
#include <stdint.h>

void
ClearBoard(Board *board){
        for(int8_t i = 0; i < 8; i++){
                board->board[0][i] = ((uint8_t[]){WHITE_ROOK, WHITE_KNIGHT, WHITE_BISHOP, WHITE_QUEEN, WHITE_KING, WHITE_BISHOP, WHITE_KNIGHT, WHITE_ROOK})[i];
                board->board[1][i] = WHITE_PIECE;
                board->board[2][i] = CLEAR;
                board->board[3][i] = CLEAR;
                board->board[4][i] = CLEAR;
                board->board[5][i] = CLEAR;
                board->board[6][i] = BLACK_PIECE;
                board->board[7][i] = ((uint8_t[]){BLACK_ROOK, BLACK_KNIGHT, BLACK_BISHOP, BLACK_QUEEN, BLACK_KING, BLACK_BISHOP, BLACK_KNIGHT, BLACK_ROOK})[i];
        }
        board->movesUntilTie = 100; /* 50 move rule but we use 1 move per team as move */
        board->nextToMove = WHITE;
        board->check = 0;
}
