#ifndef LISTE_H
#define LISTE_H
#include <iostream>
#include "individu.hpp"
#include "Employer.hpp"
#include "Entreprise.hpp"


class list
{
    Base **m_T;
    int m_taille;
    int m_nbcourant;
    public:
    list(int);
    ~list();
    void afficher();
    void ajouter(Base *);

};



#endif