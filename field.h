//
// Created by isilu on 15.04.2022.
//

#ifndef DEEPMINER_FIELD_H
#define DEEPMINER_FIELD_H

#define FELD_ZEILEN 10
#define FELD_REIHEN 10
#define FELD_ARRAY 10


class Field {
public:
    void initializeField();
protected:
    int field[FELD_REIHEN][FELD_ZEILEN][FELD_ARRAY];

private:

};


#endif //DEEPMINER_FIELD_H
