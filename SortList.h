
#ifndef CPP_DP_SORTLIST_H
#define CPP_DP_SORTLIST_H

/*  Structure représentant un élément de la liste. */

typedef struct slist
{
    int valeur;
    struct slist *suiv;
} slist ;

#ifdef __cplusplus
extern "C" {
#endif

/*  Insert insert une valeur dans la liste. */

void Insert(slist **, int);


/*  Pop retire la dernière valeur de la liste. */

int Pop(slist **);


/*  Clear vide la liste. */

void Clear(slist **);


/*  Lenght retourne le nombre d'éléments de la liste. */

int Length(slist *p);


/*  Affiche la totalité de la liste en commençant par le sommet. */

void View(slist *);

#ifdef __cplusplus
}
#endif

#endif //CPP_DP_SORTLIST_H
