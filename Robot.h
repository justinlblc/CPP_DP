#ifndef ROBOTFACTORY_H
#define ROBOTFACTORY_H

class Robot {
protected:
    string name;
    int size;
public:
    Robot(string name, int size);
    virtual void clone();
};

#endif
