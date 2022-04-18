//
// Created by isilu on 15.04.2022.
//

#ifndef DEEPMINER_FIELD_H
#define DEEPMINER_FIELD_H

#include <array>
#include "Miner.h"

#define SEITE 10
#define ZEILE 10
#define REIHE 10

using namespace std;
class Field {
public:
    virtual void initializeField();
    void printField(Miner *&testMiner);

    void fieldPoints(Miner *&testMiner);

protected:
    array<array<array<int, SEITE>, ZEILE>, REIHE> gameField; //Dreidimensionales Array

private:


};


#endif //DEEPMINER_FIELD_H
