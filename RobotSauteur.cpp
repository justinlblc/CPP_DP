#include <iostream>
#include "RobotSauteur.h"

 RobotSauteur* RobotSauteur::clone() {
     return new RobotSauteur(*this);

};