#ifndef CPP_DP_ROBOTMINEUR_H
#define CPP_DP_ROBOTMINEUR_H

class RobotMineur : public Robot{
    string[] listRessourcesNames;
    double[] listeRessourcesQuantity;



public:
    void clone();
};

#endif //CPP_DP_ROBOTMINEUR_H
