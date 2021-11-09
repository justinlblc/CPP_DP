#include <iostream>
#include "Robot.h"
#include "RobotPoussiere.h"
#include "RobotMixeur.h"
#include "RobotMineur.h"
#include "SortList.h"

#include <stdlib.h>
#include <stdio.h>



int main(){

    RobotMineur robotCloneur = RobotMineur(1,4,1,2,3);
    RobotMineur* robotClone = robotCloneur.clone();
    std::cout <<"Position du robot cloneu:r"<<std::endl;
    robotCloneur.getPosition();
    std::cout <<"Position du robot cloné:"<<std::endl;
    robotClone->getPosition();
    return 0;

}