#include "player.hpp"
#include "card.hpp"
#include "string"
using namespace std;
using namespace ariel;


Player::Player(){};
 Player::Player (string name){
    // this->myname=name;
    // cout<< name <<endl;
 }



            int Player::stacksize(){
                return 26;
            }

            int Player::cardesTaken(){
                return 0;
            }
