#ifndef PROFESSEUR_H
#define PROFESSEUR_H
#include "salarie.h"
class Professeur: public Salarie{
private:
    char *diplome;
    char *matieres[10];
public:
    Professeur(const char *,const char*,const char*);
    Professeur(const Professeur &);
    ~Professeur();
    char *getDiplome()const;
    char *getIemeMatier(int)const;
    void ajouterMatiere(const char *);
    void afficher();
    Professeur& operator=(Professeur &);
};
#endif