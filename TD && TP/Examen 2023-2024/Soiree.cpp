#include "Soiree.h"
using namespace std;
#include <iostream>
#include <string>
using namespace std;

Soiree::Soiree(Date Da,string them,string sal,float fr):date(Da)
{
    thematique = them;
    salle = sal;
    frais = fr;
}
Soiree::~Soiree()
{
    cout << "Destructeur de Soiree" << endl;
}
ostream& Soiree::afficher(ostream& os)  const
{
    os << "Date: " << date.getJour() << "/" << date.getMois() << "/" << date.getAnnee() << endl;
    os << "Thematique: " << thematique << endl;
    os << "Salle: " << salle << endl;
    os << "Frais: " << frais << endl;
    return os;
}
ostream& operator<<(ostream& os, const Soiree& s)
{
    return s.afficher(os);
}
float Soiree::calculeprix() const
{
    return frais;
}
float Soiree::getFrais() const
{
    return frais;
}
