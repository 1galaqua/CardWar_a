#include "game.hpp"
#include "player.hpp"

using namespace ariel;

 Game::Game(Player& player01, Player& player02):player1(player01),player2(player02){
    this->player1=player01;
    this->player2=player02;

 };

    void Game::playTurn(){};

    void Game::printLastTurn(){};
    
    void Game::playAll(){};
    
    void Game::printWiner(){};

    void Game::printLog(){};
    
    void Game::printStats(){};