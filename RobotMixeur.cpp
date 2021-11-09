#include <iostream>
#include "RobotMixeur.h"

 RobotMixeur* RobotMixeur::clone() {
     return new RobotMixeur(*this);

};