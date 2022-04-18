//
// Created by isilu on 15.04.2022.
//

#include <iostream>
#include <ctime>
#include <array>
#include "Field.h"
#include "Miner.h"
using namespace std;

void Field::initializeField() { //weist zufällige Werte zw. 1-9 ins Feld zu

    for(int z = 0; z < SEITE; z++){
        for(int y = 0; y < REIHE; y++){
            for(int x = 0; x < ZEILE; x++){
                this->gameField[z][y][x] = rand() % 10;
            }
        }
    }

}

void Field::fieldPoints(Miner *& testMiner){
    int playerReihe = testMiner ->getReiheKoordinate();
    int playerZeile = testMiner -> getZeileKoordinate();
    int fieldPoints = 0;

    for (int i = 0; i < 3; i++){
        fieldPoints += gameField[SEITE - i][playerReihe][playerZeile];
        cout << " " << endl << gameField[SEITE - i][playerReihe][playerZeile] << endl; //debug
    }
    testMiner ->addPoints(fieldPoints);
}

void Field::printField(Miner *& testMiner) {

    for(int seite = testMiner->getSeiteKoordinate(); seite < SEITE; seite++){ //printet nur aktualle Seite
        for(int reihe = 0; reihe < REIHE; reihe++){
            for(int zeile = 0; zeile < ZEILE; zeile++){
                if (seite == testMiner -> getSeiteKoordinate()){//kann später entfernt werden, lieber noch da lassen
                    if (seite == testMiner->getSeiteKoordinate() && zeile == testMiner->getZeileKoordinate() && reihe ==
                                                                                                                testMiner->getReiheKoordinate()) {
                        cout << "X" << " ";
                    } else cout << "M ";//std::cout << gameField[seite][reihe][zeile] << " ";
                }

            }
            std:: cout << std::endl;
        }
        std:: cout << std::endl;
        std:: cout << std::endl;
    }
}



