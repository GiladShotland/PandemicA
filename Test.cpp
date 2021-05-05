#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace std;
using namespace pandemic;
TEST_CASE("good names for cities") //bad names won't compile beacuse of the enumiration
{
    Board board;
    for (int i = 0; i < 48; i++)
    {
        CHECK_NOTHROW(board[(City)i] = 1);
    }
}
