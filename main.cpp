#include <iostream>
#include "Robot.h"
#include "RobotPoussiere.h"
#include "RobotMixeur.h"
#include "RobotMineur.h"
#include "RobotFactory.h"
#include "SortList.h"

#include <stdlib.h>
#include <stdio.h>



int main(){

    RobotMineur rb = RobotMineur("toto",4,1,1,1);
    rb.addRessource(1);
    rb.getPosition();
    rb.getlistRessourcesMined();
    rb.move(0,0,0);
    rb.getPosition();


    return 0;

}