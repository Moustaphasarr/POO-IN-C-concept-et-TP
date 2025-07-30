#ifndef COMPLEXE_H
#define COMPLEXE_H
#include "Soiree.h"
#include "Anniversaire_Entreprise.h"
#include "Leve_de_fond.h"
#include <string>
using namespace std;

class Complexe
{
    private:
        Soiree** soirees; // Tableau de pointeurs vers des objets Soiree
        int capacite;     // Capacité du tableau
    public:
        Complexe(int cap);
        ~Complexe();
        void ajouterSoiree(Soiree* soiree);
        void afficherSoirees() const;
        float gain() const;
};

#endif
