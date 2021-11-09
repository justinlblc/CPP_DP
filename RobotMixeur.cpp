#include <iostream>
#include "RobotMixeur.h"


RobotMixeur::RobotMixeur(int id, int size, int speed) : Robot(id, size){
    this->speed = speed;
}

int RobotMixeur::getCurrentSpeed(){
    return this->speed;
}

void RobotMixeur::setSpeed(int speed){
    this->speed=speed;
}


RobotMixeur* RobotMixeur::clone() {
     return new RobotMixeur(*this);
};