#ifndef LISTE_POLYMORPHE_H
#define LISTE_POLYMORPHE_H
#include "salarie.h"
class Liste{
private:
    int nb_elems;
    int max_l;
    Salarie **s;
public:
    Liste(int);
    ~Liste();
    void ajouter(Salarie *s);
    void afficher();
};
#endif