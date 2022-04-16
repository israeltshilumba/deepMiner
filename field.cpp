//
// Created by isilu on 15.04.2022.
//

#include <iostream>
#include <ctime>
#include <array>
#include "field.h"

using namespace std;

void Field::initializeField() { //weist zufällige Werte zw. 1-9 ins Feld zu



    for(int i = 0; i < HOEHE; i++){
        for(int j = 0; j < BREITE; j++){
            for(int k = 0; k < LAENGE; k++){
                this->gameField[i][j][k] = rand() % 10;
            }
        }
    }
}

void Field::printField() {
/*
    for (auto iterator = this->gameField.begin()->begin()->begin(); iterator != this->gameField.end()->end()->end(); iterator++, cout << " "){
        cout << *iterator;
    }
    */

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

/*
    for(int i = 0; i < HOEHE; i++){
        for(int j = 0; j < BREITE; j++){
            for(int k = 0; k < LAENGE; k++){
                std::cout << gameField[i][j][k];
            }
            std:: cout << std::endl;
        }
        std:: cout << std::endl;
        std:: cout << std::endl;
    }
*/
}


