#include <iostream>
#include <memory>
#include "../include/Board.h"
#include "../include/Piece.h"
#include "../include/Queen.h"
#include "../include/BlankSquare.h"

void Board::displayBoard()
{
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            std::cout << " " << board[i][j]->get_symbol() << " ";
        }
        std::cout << std::endl;
    }

}

void Board::populateBoard()
{

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
           if ((i == 0 && j == 0) || (i == 7 & j == 7))
           {
                board[i][j] = new Queen();
           }
           else 
           {
                board[i][j] = new BlankSquare();
           }
        }
    }
}