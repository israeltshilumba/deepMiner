#include <iostream>
#include <limits>
#include <vector>
#include "field.h"
#include "Miner.h"
#include "GameMenues.h"
#include "Input.h"
#include "Raphael.h"
#include "Michelangelo.h"


using namespace std;
int main() {

    int input;

    GameMenues::gameStartMessage();
    GameMenues::printLine();
    GameMenues::printCharacters();
    cin >> input;
    while (Input::validateCharacter(input)){
        cin.clear();
        cin.ignore();
        cin >> input;
    }



    //toDo: initialize Robot
    Miner *miner_1;
    //Miner *test = new Miner;
    //Miner *MAP = new Miner;

    switch (input) {
        case 1 : //miner_1 = new Michelangelo;
            break;
        case 2 : miner_1 = new Raphael;
            break;
        case 3 :
            break;
        default:
            break;
    }
    //toDo: initialize enemy/opp

    //toDo: Movement

    //




    return 0;
}
