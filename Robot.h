#include <string>
#ifndef ROBOT_H
#define ROBOT_H

class Robot {
protected:
    int id;
    int size;
public:
    Robot(int id, int size);
    virtual void clone();
};

#endif
