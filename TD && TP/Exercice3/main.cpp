#include <iostream>
#include "professeur.h"
#include "administrateur.h"
#include "liste.h"
using namespace std;
int main()
{
    Salarie s1("Salarie 1","Sal1");
    Salarie s2("Salarie 2","Sal2");
    Professeur p1("Professeur 1","Prof1","Diplome 1");  
    p1.ajouterMatiere("Matier 1");  
    Professeur p2("Professeur 2","Prof2","Diplome 2");
    p1.ajouterMatiere("Matier 2");  
    Administrateur a1("Administrateur 1","Adm1","Fonction 1");
    Administrateur a2("Administrateur 2","Adm2","Fonction 2");
    Salarie *ps;
    s1.afficher();
    s2.afficher();
    p1.afficher();
    s2=a1;
    s2.afficher();
    ps=&p1;
    ps->afficher();
    /*Salarie *T[6];
    T[0]=&s1;
    T[1]=&s2;
    T[2]=&p1;
    T[3]=&p2;
    T[4]=&a1;
    T[5]=&a2;
    for(int i=0;i<6;i++)
        T[i]->afficher();*/

    /*Liste l(10);
    l.ajouter(&s1);
    l.ajouter(&s2);
    l.ajouter(&a1);
    l.ajouter(&a2);
    l.ajouter(&p1);
    l.ajouter(&p2);
    l.afficher();
    Administrateur a3=a2;
    cout <<"affichage du constructeur e copie"<< endl;
    a3.afficher();*/
    return 0;
}
