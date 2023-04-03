#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "card.hpp"
using namespace std;

namespace ariel{
    
class Player {
    string myname;
    int stack_size;
   // Card mycards;
        public:
            Player();
            Player (string name);


            int stacksize();

            int cardesTaken();

                    

        };

}


#endif