#include "doctest.h"
#include <stdexcept>

#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
using namespace ariel;

Player player("gal");
Player player2("David");
TEST_CASE("Player Test"){
    CHECK(player.stacksize()==26);
    CHECK(player2.stacksize()==26);
    CHECK(&player != &player2);
    Game game(player,player2);
    game.playTurn();
    
        CHECK(player.stacksize()<=25);  
        CHECK(player2.stacksize()<=25);
        CHECK_LT(player.cardesTaken(),2);
        CHECK_LT(player2.cardesTaken(),2);
   
}

TEST_CASE("Game Test"){

    Player playerg1("Alice");
    Player playerg2("Bob");
    Game game(playerg1,playerg2);
    
    CHECK_THROWS(game.printLastTurn());
    CHECK_THROWS(game.printLog());
    CHECK_THROWS(game.printStats());
    CHECK_THROWS(game.printWiner());
    
    for (int i=0;i<10;i++) {
        CHECK_NOTHROW(game.playTurn());
        CHECK_LE(player.cardesTaken() ,10);
        CHECK_LE(player2.cardesTaken() ,10);
        

   }
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
    CHECK_GE(player.cardesTaken() ,-1);
    CHECK_GE(player2.cardesTaken() ,-1);

    
}

