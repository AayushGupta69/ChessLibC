#include "board.h"

struct square chessBoard[BOARD_SIZE][BOARD_SIZE];

void initializeChessBoard(struct square chessBoard[BOARD_SIZE][BOARD_SIZE]) {
  // Assigning Pawns
  for (int i = 0; i < BOARD_SIZE; i++) {
    chessBoard[1][i] = (struct square){.pieceColor = White, .pieceType = Pawn};
    chessBoard[6][i] = (struct square){.pieceColor = Black, .pieceType = Pawn};
  }

  // Assigning Rooks
  chessBoard[0][0] = (struct square){.pieceColor = White, .pieceType = Rook};
  chessBoard[0][7] = (struct square){.pieceColor = White, .pieceType = Rook};
  chessBoard[7][0] = (struct square){.pieceColor = Black, .pieceType = Rook};
  chessBoard[7][7] = (struct square){.pieceColor = Black, .pieceType = Rook};

  // Assigning Knights
  chessBoard[0][1] = (struct square){.pieceColor = White, .pieceType = Knight};
  chessBoard[0][6] = (struct square){.pieceColor = White, .pieceType = Knight};
  chessBoard[7][1] = (struct square){.pieceColor = Black, .pieceType = Knight};
  chessBoard[7][6] = (struct square){.pieceColor = Black, .pieceType = Knight};

  // Assigning Bishops
  chessBoard[0][2] = (struct square){.pieceColor = White, .pieceType = Bishop};
  chessBoard[0][5] = (struct square){.pieceColor = White, .pieceType = Bishop};
  chessBoard[7][2] = (struct square){.pieceColor = Black, .pieceType = Bishop};
  chessBoard[7][5] = (struct square){.pieceColor = Black, .pieceType = Bishop};

  // Assigning Queens
  chessBoard[0][3] = (struct square){.pieceColor = White, .pieceType = Queen};
  chessBoard[7][3] = (struct square){.pieceColor = Black, .pieceType = Queen};

  // Assigning Kings
  chessBoard[0][4] = (struct square){.pieceColor = White, .pieceType = King};
  chessBoard[7][4] = (struct square){.pieceColor = Black, .pieceType = King};

  // MarKing the rest of squares Empty
  for (int i = 2; i < 6; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      chessBoard[i][j] =
          (struct square){.pieceColor = None, .pieceType = Empty};
    }
  }
}
