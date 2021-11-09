#include <string>
#ifndef ROBOT_H
#define ROBOT_H

class Robot {
protected:
    int id;
    int size; //hauteur en cm
public:
    Robot(int id, int size);
    virtual Robot* clone();
    int getId();
};

#endif
