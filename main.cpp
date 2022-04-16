#include <iostream>
#include <limits>
#include <vector>
#include "field.h"
#include "Miner.h"
#include "GameMenues.h"
#include "Input.h"
#include "Raphael.h"
#include "Michelangelo.h"
#include "Game.h"

void selectGameModes();

using namespace std;

void testStation(){
    Miner *testMiner = new Miner;
    Field *field = new Field;
    Game :: uebungsmodus(testMiner);
    cout << testMiner->getReiheKoordinate() << endl;
    cout << testMiner->getZeileKoordinate() << endl;
    cout << testMiner->getSeiteKoordinate() << endl;

    field -> initializeField();
    field -> printField(testMiner);




}
void selectGameModes(){

    GameMenues :: printLine();
    cout << "Bitte Waehlen Sie einen Spielmodus aus";
    cout << "\nUebungsmodus [1]\n";
    cout << "\nSpieler vs Computer [2]\n";
    cout << "\nSpieler vs Spieler [3]\n";
    //cout << "\nComputer vs Computer [4]\n";
    GameMenues :: printLine();

    int input;
    cin >> input;
    input = Input ::repeatInput(input);




}
int main() {
    testStation();
    /*
    int input;

    GameMenues::gameStartMessage();
    GameMenues::printLine();
    GameMenues::printCharacters();
    cin >> input;
    input = Input ::repeatInput(input);



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


*/

    return 0;
}
