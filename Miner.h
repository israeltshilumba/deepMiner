//
// Created by isilu on 16.04.2022.
//

#ifndef DEEPMINER_MINER_H
#define DEEPMINER_MINER_H

#include "field.h"

class Miner : public Field {
public:
    Miner(string name);

protected:
    string name;
};


#endif //DEEPMINER_MINER_H
