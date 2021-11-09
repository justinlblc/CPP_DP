#include <iostream>
#include "Robot.h"
#include "RobotPoussiere.h"
#include "RobotMixeur.h"
#include "RobotMineur.h"
#include "SortList.h"

#include <stdlib.h>
#include <stdio.h>



int main(){

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



    return 0;

}