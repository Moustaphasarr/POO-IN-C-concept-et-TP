#ifndef ANNIVERSAIRE_ENTREPRISE_H
#define ANNIVERSAIRE_ENTREPRISE_H
#include "Soiree.h"
#include <string>
using namespace std;

class Anniversaire_Entreprise : public Soiree
{
private:
    float fraisCommunication;
    float fraisContact;
    float forfait;
    float frais_anniversaire_entreprise;
public:
    Anniversaire_Entreprise(Date date, string thematique, string salle, float frais, float fraisCom, float fraisCont, float forf,float frais_anniversaire_entreprise);
    ~Anniversaire_Entreprise();
    ostream& afficher(ostream&) const;
    friend ostream& operator<<(ostream&, Anniversaire_Entreprise&);
    float calculeprix() const;
};

#endif
