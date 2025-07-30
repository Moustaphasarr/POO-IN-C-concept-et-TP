#ifndef LEVE_DE_FOND_H
#define LEVE_DE_FOND_H
#include "Soiree.h"
#include <string>
using namespace std;

class Leve_de_fond : public Soiree
{
private:
    float fraisCommunication;
    float collecte;
    float frais_leve_de_fond;
public:
    Leve_de_fond(Date date, string thematique, string salle, float frais, float fraisCom, float collecte, float flf);
    ~Leve_de_fond();
    ostream& afficher(ostream&) const;
    friend ostream& operator<<(ostream&, Leve_de_fond&);
    float calculeprix() const;
};

#endif
