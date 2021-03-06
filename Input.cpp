//
// Created by isilu on 16.04.2022.
//

#include <iostream>
#include <iostream>
#include "Input.h"

bool Input::validateCharacter(int input) {
    if(input != 0){
        if (input != 1 && input != 2 && input != 3) {
            invalidInputMessage();
            return true;
        }
        return false;
    }
    invalidInputMessage();
    return true;
}

void Input::invalidInputMessage() {
    std::cout << "\nIhre Eingabe ist ungueltig. Bitte probieren Sie es noch einmal.\n";
}

bool Input::validateGameMode(int input) {
    return false;
}

int Input::repeatInput(int input) {
    while (Input::validateCharacter(input)){
        std::cin.clear();
        std::cin.ignore();
        std::cin >> input;
    }
    return input;
}
