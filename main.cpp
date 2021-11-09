#include <iostream>
#include "Robot.h"
#include "RobotPoussiere.h"
#include "RobotMixeur.h"
#include "RobotMineur.h"
#include "SortList.h"

#include <stdlib.h>
#include <stdio.h>



int main(){

<<<<<<< HEAD
    //Tests sur robot mineur
    RobotMineur rb = RobotMineur(1,4,1,1,1);
    rb.addRessource(1);
    rb.getPosition();
    rb.getlistRessourcesMined();
    rb.move(0,0,0);
    rb.getPosition();

    RobotMineur robotCop = RobotMineur(1,4,2,2,2);
    RobotMineur* robotCopieur = robotCop.clone();
    robotCopieur->getPosition();
    robotCop.getPosition();
    robotCop.move(3,3,3);
    robotCopieur->getPosition();
    robotCop.getPosition();

    //Tests sur robot mixeur
    RobotMixeur rm = RobotMixeur(2, 15, 15);
    std::cout << "La vitesse de rotation actuelle du robot mixeur "<< rm.getId() <<" est de " << rm.getCurrentSpeed() << " rad/s."<< std::endl;
    RobotMixeur* rm2 = rm.clone();
    std::cout << "La vitesse de rotation actuelle du robot mixeur "<< rm2->getId() <<" est de " << rm2->getCurrentSpeed() << " rad/s."<< std::endl;
    rm.setSpeed(20);
    std::cout << "La vitesse de rotation actuelle du robot mixeur "<< rm.getId() <<" est de " << rm.getCurrentSpeed() << " rad/s."<< std::endl;
    std::cout << "La vitesse de rotation actuelle du robot mixeur "<< rm2->getId() <<" est de " << rm2->getCurrentSpeed() << " rad/s."<< std::endl;
    rm2->setSpeed(30);
    std::cout << "La vitesse de rotation actuelle du robot mixeur "<< rm.getId() <<" est de " << rm.getCurrentSpeed() << " rad/s."<< std::endl;
    std::cout << "La vitesse de rotation actuelle du robot mixeur "<< rm2->getId() <<" est de " << rm2->getCurrentSpeed() << " rad/s."<< std::endl;


    RobotMineur robotCloneur = RobotMineur(1,4,1,2,3);
    RobotMineur* robotClone = robotCloneur.clone();
    std::cout <<"Position du robot cloneu:r"<<std::endl;
    robotCloneur.getPosition();
    std::cout <<"Position du robot cloné:"<<std::endl;
    robotClone->getPosition();
    return 0;

}