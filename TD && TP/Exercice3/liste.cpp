#include <iostream>
#include "liste.h"
using namespace std;
Liste::Liste(int max)
{
    cout << "Constructeur de la liste polymorphe" << endl;
    max_l = max;
    nb_elems = 0;
    s = new Salarie*[max_l];
}

Liste::~Liste()
{
    cout << "Destructeur de la liste polymorphe" << endl;
    if(s)
        delete [] s;
}

void Liste::ajouter(Salarie *sal)
{
    if(nb_elems < max_l)
        s[nb_elems++] = sal;
}

void Liste::afficher()
{
    for (int i = 0; i < nb_elems; i++){
        cout << "\n\nSalarie " << i + 1 << ":\n";
        s[i]->afficher();
    }
    cout << "\n\n";
}

