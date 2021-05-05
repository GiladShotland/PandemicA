#include <iostream>
#include <vector>
#include <unordered_map>
#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
using namespace std;
namespace pandemic
{
    unordered_map<City, int> levels;
    int &Board::operator[](City city)
    {
        return levels[city];
    }
    ostream &operator<<(ostream &outstream, const Board board)
    {
        return outstream;
    }

    bool Board::is_clean()
    {
        return false;
    }
    void Board::remove_cures() { return; }

}