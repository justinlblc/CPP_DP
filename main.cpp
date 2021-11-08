#include <iostream>
#include "Robot.h"
#include "RobotPoussiere.h"
#include "RobotMixeur.h"
#include "RobotFactory.h"
#include "SortList.h"

#include <stdlib.h>
#include <stdio.h>



int main(){

    slist *Mysl = NULL;

    Insert(&Mysl,12);
    Insert(&Mysl,8);
    Insert(&Mysl,3);
    Insert(&Mysl,5);
    Insert(&Mysl,9);
    Insert(&Mysl,5);
    Insert(&Mysl,2);
    Insert(&Mysl,7);
    printf("Nb d'elements : %d\n",Length(Mysl));
    View(Mysl);

    puts("Retrait de deux elements :");
    printf("%d\n",Pop(&Mysl));
    printf("%d\n",Pop(&Mysl));
    printf("Nb d'elements : %d\n",Length(Mysl));
    View(Mysl);

    puts("Vidage de la liste puis ajout de 3 elements :");
    Clear(&Mysl);
    Insert(&Mysl,3);
    Insert(&Mysl,9);
    Insert(&Mysl,5);
    printf("Nb d'elements : %d\n",Length(Mysl));
    View(Mysl);

    Clear(&Mysl);
    return 0;

}