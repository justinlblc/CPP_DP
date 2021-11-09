#ifndef ROBOTFACTORY_H
#define ROBOTFACTORY_H

class Robot {
protected:
    char[] name;
    int size;
public:
    Robot(char[] name, int size);
    virtual void clone();
};

#endif
