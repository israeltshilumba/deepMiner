//
// Created by isilu on 15.04.2022.
//

#include <iostream>
#include <ctime>
#include <array>
#include "field.h"
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

void Field::printField(Miner *& testMiner) {

    /*
    for (auto hoehe : this->gameField){
        for (auto breite : hoehe){
            for (auto laenge : breite){
                cout << laenge << " ";
            }
            std:: cout << std::endl;
        }
        std:: cout << std::endl;
        std:: cout << std::endl;
    }
*/
    for(int seite = 0; seite < SEITE; seite++){
        for(int reihe = 0; reihe < REIHE; reihe++){
            for(int zeile = 0; zeile < ZEILE; zeile++){
                if (seite == testMiner->getSeiteKoordinate() && zeile == testMiner->getZeileKoordinate() && reihe ==
                                                                                                              testMiner->getReiheKoordinate()){
                    cout << "X" << " ";
                } else std::cout << gameField[seite][reihe][zeile] << " ";

            }
            std:: cout << std::endl;
        }
        std:: cout << std::endl;
        std:: cout << std::endl;
    }
}


