//
// Created by isilu on 15.04.2022.
//

#ifndef DEEPMINER_FIELD_H
#define DEEPMINER_FIELD_H

#include <array>

#define LAENGE 10
#define BREITE 10
#define HOEHE 10

using namespace std;
class Field {
public:
    virtual void initializeField();
    virtual void printField();

protected:
    array<array<array<int, HOEHE>, BREITE>, LAENGE> gameField; //Dreidimensionales Array

private:

};


#endif //DEEPMINER_FIELD_H
