#ifndef CPP_DP_ROBOTMINEUR_H
#define CPP_DP_ROBOTMINEUR_H
#include "SortList.h"
#include "Robot.h"

class RobotMineur : public Robot{
    slist *listRessourcesMined = NULL;
    int position[3];

public:
    RobotMineur(int,int,int,int,int);
    virtual RobotMineur* clone();
    void addRessource(int);
    void clearRessources();
    void move(int,int,int);
    void getPosition();
    void getlistRessourcesMined();
};



#endif //CPP_DP_ROBOTMINEUR_H
