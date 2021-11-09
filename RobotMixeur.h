#include <iostream>
#include "Robot.h"

#ifndef ROBOT_MIXEUR_H
#define ROBOT_MIXEUR_H

class RobotMixeur : public Robot{

private:
   int speed; //en rad/s

public:
   RobotMixeur(int, int, int);
   virtual RobotMixeur* clone();
   void setSpeed(int newSpeed);
   int getCurrentSpeed();
   void toString();
};

#endif