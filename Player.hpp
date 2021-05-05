#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"

using namespace std;
namespace pandemic
{
    class Player
    {
    public:
        Player(Board board, City start_from)
        {
        }
        Player &fly_direct(City target);
        Player &fly_shuttle(City target);
        Player &fly_charter(City target);
        Player &build();
        Player &discover_cure(Color color);
        virtual Player &treat(City city);
        Player &take_card(City city);
        Player &drive(City city);
        string role();
    };
}