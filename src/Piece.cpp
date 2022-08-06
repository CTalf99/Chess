#include <iostream>
#include "../include/Piece.h"

char Piece::get_symbol()
{
    return symbol;
}

void Piece::set_symbol(char symb)
{
    symbol = symb;
}

void Piece::print()
{
    std::cout << " " << symbol << " ";
}