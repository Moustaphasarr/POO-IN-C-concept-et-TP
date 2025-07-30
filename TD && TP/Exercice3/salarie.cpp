#include <iostream>
#include <cstring>
#include "salarie.h"
using namespace std;
Salarie::Salarie(const char *prenom,const char *nom)
{
    this->prenom = new char[strlen(prenom)];
    strcpy(this->prenom,prenom);
    this->nom = new char[strlen(nom)];
    strcpy(this->nom,nom);
}

Salarie::Salarie(const Salarie &s)
{
    this->prenom = new char[strlen(s.prenom)];
    strcpy(this->prenom,s.prenom);
    this->nom = new char[strlen(s.nom)];
    strcpy(this->nom,s.nom);
}
Salarie::~Salarie()
{
    if(prenom)
        delete prenom;
    if(nom)
        delete nom;
}
char* Salarie::getPrenom()const{
    return prenom;
}
char* Salarie::getNom()const{
    return nom;
}
void Salarie::afficher()
{
    cout << "Prenom : " << prenom << " | Nom : " << nom << endl;
}

Salarie & Salarie::operator=(const Salarie &s)
{
    if(this != &s){
        if(prenom)
            delete prenom;
        if(nom)
            delete nom;
        prenom = new char[strlen(s.prenom)];
        strcpy(prenom,s.prenom);
        nom = new char[strlen(s.nom)];
        strcpy(nom,s.nom);
    }
    return *this;
}