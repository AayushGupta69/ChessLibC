/**
 * @file board.h
 * @author AayushGupta69 (aayushgupta69official@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-06-15
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#define BOARD_SIZE 8

enum Color { None, White, Black };

enum Piece { Empty, Pawn, Bishop, Knight, Rook, King, Queen };

struct square {
  enum Piece pieceType;
  enum Color pieceColor;
};

extern struct square chessBoard[BOARD_SIZE][BOARD_SIZE];

void initializeChessBoard(struct square chessBoard[BOARD_SIZE][BOARD_SIZE]);

#endif