#include <iostream>
#include "RobotPoussiere.h"

 RobotPoussiere* RobotPoussiere::clone(){
     return new RobotPoussiere(*this);

};