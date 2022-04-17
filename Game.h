//
// Created by isilu on 16.04.2022.
//

#ifndef DEEPMINER_GAME_H
#define DEEPMINER_GAME_H


#include "Miner.h"
#include <string>
class Game {
public:

    static void uebungsmodus(Miner *&player);
    static void movePlayer(Miner *&player, char);

    static bool validateMovement(Miner *&player, char input);
};


#endif //DEEPMINER_GAME_H
