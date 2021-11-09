#include <iostream>
#include "Robot.h"


Robot::Robot(int id, int size){
    this->id = id;
    this->size = size;
}
 Robot* Robot::clone(){
     return new Robot(*this);

};