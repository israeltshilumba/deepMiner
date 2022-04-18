//
// Created by isilu on 16.04.2022.
//

#include <iostream>
#include "Miner.h"


int Miner::getReiheKoordinate() const {
    return x_coordinate;
}

void Miner::setReiheKoordinate(int xCoordinate) {
    x_coordinate = xCoordinate;
}

int Miner::getZeileKoordinate() const {
    return y_coordinate;
}

void Miner::setZeileKoordinate(int yCoordinate) {
    y_coordinate = yCoordinate;
}

int Miner::getSeiteKoordinate() const {
    return z_coordinate;
}

void Miner::setSeiteKoordinate(int zCoordinate) {
    z_coordinate = zCoordinate;
}

int Miner::getPoints() const {
    return points;
}

void Miner::setPoints(int points) {
    this->points = points;
}

void Miner::addPoints(int add){
    this->points = points + add;
}
