//
// Created by isilu on 16.04.2022.
//

#include <iostream>
#include "GameMenues.h"

using namespace std;

void GameMenues::gameStartMessage() {
    cout << "Willkommen zu Budget Minecraft\nVersion 1.0.0.0.0 Beta\n";

}

void GameMenues::printLine() {
    cout << "\nXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";

}

void GameMenues::askForName() {
    cout << "\nGeben Sie Ihren Namen ein!\n";
}

void GameMenues::printCharacters() {
    cout << "\nWaehlen Sie einen Miner Ninja Turtle aus:\n";
    cout << "\nMichelangelo, der Tollkuehne [1]\n";
    cout << "\nRaphael, der Rebell [2]\n";
    cout << "\nDonatello, der Weise [3]\n";
    cout << endl;

}
