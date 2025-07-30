#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H
#include "salarie.h"
class Administrateur: public Salarie{
private:
    char *fonction;
public:
    Administrateur(const char*,const char*,const char*);
    Administrateur(const Administrateur &);
    ~Administrateur();
    char *getFonction()const;
    void afficher();
    Administrateur & operator=(Administrateur &);
};
#endif