#include <iostream>
#include <cstring>
#include "administrateur.h"
using namespace std;
Administrateur::Administrateur(const char* prenom,const char* nom,const char* fonction) : Salarie(prenom,nom)
{
    this->fonction = new char[strlen(fonction)];
    strcpy(this->fonction,fonction);
}

Administrateur::Administrateur(const Administrateur &a) : Salarie(a)
{
    this->fonction = new char[strlen(a.fonction)];
    strcpy(this->fonction,a.fonction);
}

Administrateur::~Administrateur()
{
    if(fonction)
        delete fonction;
}

char * Administrateur::getFonction() const
{
    return fonction;
}

void Administrateur::afficher()
{
    Salarie::afficher();
    cout << "Fonction : " << fonction << endl;
}

Administrateur & Administrateur::operator=(Administrateur &a)
{
    if(this != &a){
        Salarie::operator=(a);
        //Salarie *s1,*s2;
        //s1 = this;
        //s2 = &a;
        //*s1 = *s2;
        if(fonction)
            delete fonction;
        fonction = new char[strlen(a.fonction)];
        strcpy(fonction, a.fonction);
    } 
    return *this;
}