#include<iostream>
#include "individu.hpp"
#include "Employer.hpp"
#include "Entreprise.hpp"
#include "liste.hpp"

using namespace std;
int main()
{
    Individu I("Diop","Modou",2);
    Employer E("Faye","Lala","Developpeur",5);
    Entreprise D("Tigo",39,40,"Ly","Sophie",3);
    list l(3);
    l.ajouter(&I);
    l.ajouter(&E);
    l.ajouter(&D);
    l.afficher();
    return 0;

    
}