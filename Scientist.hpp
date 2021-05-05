#pragma once
#include "Player.hpp"
#include "City.hpp"
namespace pandemic
{
    class Scientist : public Player
    {
    private:
        int num_of_cards;

    public:
        Scientist(Board b, City c, int n) : Player(b, c){};

        string role();
    };
}