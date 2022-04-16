//
// Created by isilu on 16.04.2022.
//

#include <iostream>
#include "Miner.h"


Miner::Miner() {
    cout << "\nGeben Sie Ihren Namen ein.\n";
    std::cin >> this->name;
    cout << "\nWillkommen " << this->name;
    cout << "\nMiner CONSTRUCTOR";
}
