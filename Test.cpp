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
#include <vector>
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
TEST_CASE("generic use of derived classes")
{
    Board board;
    Researcher researcher(board, NewYork);
    OperationsExpert oe(board, NewYork);
    FieldDoctor fd(board, NewYork);
    Virologist vg(board, NewYork);
    GeneSplicer gs(board, NewYork);
    Dispatcher dp(board, NewYork);
    Medic md(board, NewYork);
    vector<Player> container;
    CHECK_NOTHROW(container.push_back(researcher));
    CHECK_NOTHROW(container.push_back(oe));
    CHECK_NOTHROW(container.push_back(fd));
    CHECK_NOTHROW(container.push_back(vg));
    CHECK_NOTHROW(container.push_back(gs));
    CHECK_NOTHROW(container.push_back(dp));
    CHECK_NOTHROW(container.push_back(md));
}
TEST_CASE("drive function")
{
    Board board;
    SUBCASE("try on researcher")
    {
        Researcher researcher(board, NewYork);
        CHECK_NOTHROW(researcher.drive(Montreal));
        CHECK_NOTHROW(researcher.drive(Chicago));
        CHECK_NOTHROW(researcher.drive(SanFrancisco));
        CHECK_THROWS(researcher.drive(Tokyo));
        CHECK_THROWS(researcher.drive(Miami));
        CHECK_THROWS(researcher.drive(Tokyo));
        CHECK_THROWS(researcher.drive(Bogota));
    }
    SUBCASE("try on OpeartionsExpert")
    {
        OperationsExpert oe(board, NewYork);
        CHECK_NOTHROW(oe.drive(Montreal));
        CHECK_NOTHROW(oe.drive(Chicago));
        CHECK_NOTHROW(oe.drive(SanFrancisco));
        CHECK_THROWS(oe.drive(Tokyo));
        CHECK_THROWS(oe.drive(Miami));
        CHECK_THROWS(oe.drive(Tokyo));
        CHECK_THROWS(oe.drive(Bogota));
    }
    SUBCASE("try on FieldDocotr")
    {
        FieldDoctor fd(board, NewYork);
        CHECK_NOTHROW(fd.drive(Montreal));
        CHECK_NOTHROW(fd.drive(Chicago));
        CHECK_NOTHROW(fd.drive(SanFrancisco));
        CHECK_THROWS(fd.drive(Tokyo));
        CHECK_THROWS(fd.drive(Miami));
        CHECK_THROWS(fd.drive(Tokyo));
        CHECK_THROWS(fd.drive(Bogota));
    }
    SUBCASE("try on Virologist")
    {
        Virologist vg(board, NewYork);
        CHECK_NOTHROW(vg.drive(Montreal));
        CHECK_NOTHROW(vg.drive(Chicago));
        CHECK_NOTHROW(vg.drive(SanFrancisco));
        CHECK_THROWS(vg.drive(Tokyo));
        CHECK_THROWS(vg.drive(Miami));
        CHECK_THROWS(vg.drive(Tokyo));
        CHECK_THROWS(vg.drive(Bogota));
    }
    SUBCASE("try on GeneSplicer")
    {
        GeneSplicer gs(board, NewYork);
        CHECK_NOTHROW(gs.drive(Montreal));
        CHECK_NOTHROW(gs.drive(Chicago));
        CHECK_NOTHROW(gs.drive(SanFrancisco));
        CHECK_THROWS(gs.drive(Tokyo));
        CHECK_THROWS(gs.drive(Miami));
        CHECK_THROWS(gs.drive(Tokyo));
        CHECK_THROWS(gs.drive(Bogota));
    }
    SUBCASE("try on Dispatcher")
    {
        Dispatcher dp(board, NewYork);
        CHECK_NOTHROW(dp.drive(Montreal));
        CHECK_NOTHROW(dp.drive(Chicago));
        CHECK_NOTHROW(dp.drive(SanFrancisco));
        CHECK_THROWS(dp.drive(Tokyo));
        CHECK_THROWS(dp.drive(Miami));
        CHECK_THROWS(dp.drive(Tokyo));
        CHECK_THROWS(dp.drive(Bogota));
    }
    SUBCASE("try on Medic")
    {
        Medic md(board, NewYork);
        CHECK_NOTHROW(md.drive(Montreal));
        CHECK_NOTHROW(md.drive(Chicago));
        CHECK_NOTHROW(md.drive(SanFrancisco));
        CHECK_THROWS(md.drive(Tokyo));
        CHECK_THROWS(md.drive(Miami));
        CHECK_THROWS(md.drive(Tokyo));
        CHECK_THROWS(md.drive(Bogota));
    }
}
