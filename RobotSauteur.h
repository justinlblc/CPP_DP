#include <iostream>
#include "Robot.h"

#ifndef ROBOT_SAUTEUR_H
#define ROBOT_SAUTEUR_H

class RobotSauteur : public Robot {
public:
    virtual RobotSauteur* clone();
};

#endif