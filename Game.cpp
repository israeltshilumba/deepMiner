//
// Created by isilu on 16.04.2022.
//

#include <iostream>
#include "Game.h"
#include "Miner.h"

void Game::uebungsmodus(Miner *&player) { //Ich bin actually genial
    player->setSeiteKoordinate(9); //Seite
    player->setZeileKoordinate(9); //Zeile
    player->setReiheKoordinate(1); //Reihe
}


void Game::movePlayer(Miner *&player, char input) {

    int reihe = player -> getReiheKoordinate();
    int zeile = player -> getZeileKoordinate();
    int seite = player -> getSeiteKoordinate();

    switch(input){
        case 's' : {
            if (reihe + 1 > 9){
                std::cout << "\nWumps, da scheint eine Wand zu sein.\n";
            } else player -> setReiheKoordinate(reihe + 1) ;
        }
            break;
        case 'a' : {
            if (zeile - 1 < 1){
                std::cout << "\nWumps, da scheint eine Wand zu sein.\n";
            } else player->setZeileKoordinate(zeile - 1);
        }
            break;
        case 'w' : {
            if (reihe - 1 < 1){
                std::cout << "\nWumps, da scheint eine Wand zu sein.\n";
            } else player->setReiheKoordinate(reihe - 1);
        }
            break;
        case 'd' : {
            if (zeile + 1 > 9){
                std::cout << "\nWumps, da scheint eine Wand zu sein.\n";
            } else player->setZeileKoordinate(zeile + 1);
        }
            break;
    }
}
