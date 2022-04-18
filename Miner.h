//
// Created by isilu on 16.04.2022.
//

#ifndef DEEPMINER_MINER_H
#define DEEPMINER_MINER_H


class Miner{

public:
    Miner();

    virtual void drillHole() = 0;

    int getReiheKoordinate() const; //Breite

    void setReiheKoordinate(int);

    int getZeileKoordinate() const; //Hoehe

    void setZeileKoordinate(int);

    int getSeiteKoordinate() const; //Tiefe

    void setSeiteKoordinate(int);

    int getPoints() const;

    void addPoints(int add);

    void setPoints(int);


protected:
    int x_coordinate;
    int y_coordinate;
    int z_coordinate;



    int points;


};


#endif //DEEPMINER_MINER_H
