#include <iostream>
#include <string>
#include "Leve_de_fond.h"
using namespace std;

Leve_de_fond::Leve_de_fond(Date date, string thematique, string salle, float frais, float fraisCom, float collecte, float flf)
: Soiree(date, thematique, salle, frais)
{
    fraisCommunication = fraisCom;
    this->collecte = collecte;
    frais_leve_de_fond = flf;
}

Leve_de_fond::~Leve_de_fond()
{
    cout << "Destructeur de Leve_de_fond" << endl;
}

ostream& Leve_de_fond::afficher(ostream& os) const
{
    Soiree::afficher(os);
    os << "Frais de communication: " << fraisCommunication << endl;
    os << "Collecte: " << collecte << endl;
    os << "Frais de leve de fond: " << frais_leve_de_fond << endl;
    return os;
}

ostream& operator<<(ostream& os, Leve_de_fond& LDF)
{
    return LDF.afficher(os);
}

float Leve_de_fond::calculeprix() const
{
    return getFrais() + fraisCommunication + 0.02 * collecte + frais_leve_de_fond;
}
