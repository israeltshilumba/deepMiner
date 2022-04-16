//
// Created by isilu on 16.04.2022.
//

#include "Game.h"
#include "Miner.h"

void Game::uebungsmodus(Miner *&player) { //Ich bin actually genial
    player->setSeiteKoordinate(9); //Seite
    player->setZeileKoordinate(0); //Zeile
    player->setReiheKoordinate(0); //Reihe
}

void Game::movePlayer(Miner *&player, char input) {
    int reihe = player -> getReiheKoordinate();
    int zeile = player -> getZeileKoordinate();
    int seite = player -> getSeiteKoordinate();

    switch(input){
        case 'w' : player ->setZeileKoordinate(zeile + 1) ;
            break;
        case 'a' : player ->setReiheKoordinate(reihe - 1) ;
            break;
        case 's' : player ->setZeileKoordinate(zeile - 1) ;
            break;
        case 'd' : player ->setReiheKoordinate(reihe + 1) ;
            break;
    }
}
