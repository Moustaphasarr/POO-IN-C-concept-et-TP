#include <iostream>
#include "Compte.hpp"
using namespace std;

Compte::Compte(long num)
{
    numero=numero_a_utiliser;
    numero_a_utiliser++;
    solde=0;
}
void Compte::afficher_toi()
{
    cout<<"numero de compte"<<numero<<endl;
    cout<<"montant "<<solde;   
}

void Compte::versement(double montant)
{
    solde+=montant;
}
bool Compte::retrait(double montant)
{
    if(solde-montant>=0)
        return true;
    
        return false;
}

Compte& Compte::operator=(Compte& C)
{
    if(this!=&C)
    {
        numero= C.numero;
        solde=C.solde;
    }

    return *this;
}
Compte::Compte(Compte& C)
{
    numero=C.numero;
    solde=C.solde;
}
Compte::~Compte()
{
    cout<<"compte numero "<<numero<<"detruit"<<endl;

}

CompteCour::CompteCour():Compte()
{

}
bool CompteCour::retrait(int solde)
{
    if(solde>)
}