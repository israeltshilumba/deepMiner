#include <iostream>
#include <limits>
#include <vector>
#include "field.h"
#include "Miner.h"
#include "GameMenues.h"
#include "Input.h"


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

    //toDo: initialize enemy/opp

    //toDo: Movement

    //




    return 0;
}
