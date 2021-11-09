#include <iostream>
#include "RobotMineur.h"

 RobotMineur* RobotMineur::clone() {
    return new RobotMineur(*this);
}



RobotMineur::RobotMineur(int id , int size ,int x, int y,int z) : Robot(id,size) {
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
    for(int i=0;i<3;i++) std::cout <<position[i]<<std::endl;
}

void RobotMineur::getlistRessourcesMined() {
    View(listRessourcesMined);
}


