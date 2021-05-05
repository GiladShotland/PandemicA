#pragma once
#include "Player.hpp"
#include "City.hpp"
namespace pandemic
{
    class Medic : public Player
    {
    public:
        Medic(Board b, City c) : Player(b, c){};

        string role();
    };
}
