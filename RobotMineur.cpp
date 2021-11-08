#include <iostream>
#include "RobotMineur.h"

void RobotMineur::clone() {

};

void RobotMineur::RobotMineur(char name , int size ,int x, int y,int z) : Robot(name,size) {
    position[0]=x;
    position[1]=y;
    position[2]=z;
}

void RobotMineur::move(int a, int b, int c) {
    position[0]=a;
    position[1]=b;
    position[2]=c;
}

void RobotMineur::addRessource(int quantity) {
    Insert(&listRessourcesMined,quantity);
    }

void RobotMineur::clearRessources() {
    Clear(&listRessourcesMined);
}

void RobotMineur::getPosition() {
    for(i=0;i<3;i++) std::cout <<position[i]<<std::endl;
}

void RobotMineur::getlistRessourcesMined() {
    View(listRessourcesMined);
}


}