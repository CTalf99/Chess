#pragma once
#include <memory>
#include <vector>
#include "../include/Piece.h"

class Board
{
    private:
        static const int size = 8;
        Piece* board[size][size];
    public:
        void displayBoard();
        void populateBoard();
};