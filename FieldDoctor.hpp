#pragma once
#include "Player.hpp"
using namespace std;
namespace pandemic
{
    class FieldDoctor : public Player
    {
    private:
    public:
        FieldDoctor(Board b, City c) : Player(b, c){};

        string role();
    };
}