#pragma once
#include <iostream>
#include <vector>
#include "Color.hpp"
#include "City.hpp"
using namespace std;
namespace pandemic
{
    class Board
    {
    public:
        int &operator[](City city);
        bool is_clean();
        void remove_cures();
        friend ostream &operator<<(ostream &outstream, const Board board);
    };
}
