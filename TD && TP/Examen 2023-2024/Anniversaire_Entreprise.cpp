#include <iostream>
#include "Anniversaire_Entreprise.h"
#include <string>
using namespace std;

Anniversaire_Entreprise::Anniversaire_Entreprise(Date date, string thematique, string salle, float frais, float fraisCom, float fraisCont, float forf, float fan)
: Soiree(date, thematique, salle, frais)
{
    fraisCommunication = fraisCom;
    fraisContact = fraisCont;
    forfait = forf;
    frais_anniversaire_entreprise = fan;
}

Anniversaire_Entreprise::~Anniversaire_Entreprise()
{
    cout << "Destructeur de Anniversaire_Entreprise" << endl;
}

ostream& Anniversaire_Entreprise::afficher(ostream& os) const
{
    Soiree::afficher(os);
    os << "Frais de communication: " << fraisCommunication << endl;
    os << "Frais de contact: " << fraisContact << endl;
    os << "Forfait: " << forfait << endl;
    os << "Frais d'anniversaire d'entreprise: " << frais_anniversaire_entreprise << endl;
    return os;
}

ostream& operator<<(ostream& os, Anniversaire_Entreprise& AE)
{
    return AE.afficher(os);
}

float Anniversaire_Entreprise::calculeprix() const
{
    return getFrais() + fraisCommunication + fraisContact + forfait + frais_anniversaire_entreprise;
}
