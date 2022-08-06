#pragma once

class Piece
{
    private:
        char symbol;
    public:
        char get_symbol();
        void set_symbol(char symb);
        void print();
};