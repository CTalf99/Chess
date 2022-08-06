#include "../include/Board.h"
#include "../include/Piece.h"
#include "../include/BlankSquare.h"
#include "../include/Queen.h"

int main()
{
    Board gameBoard;
    gameBoard.populateBoard();
    gameBoard.displayBoard();
    return 0;
}