#ifndef BOARD_H
#define BOARD_H

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