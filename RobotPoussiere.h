#include <iostream>
#include "Robot.h"

#ifndef ROBOT_POUSSIERE_H
#define ROBOT_POUSSIERE_H

class RobotPoussiere : public Robot {
public:
    virtual RobotPoussiere* clone();
};

#endif