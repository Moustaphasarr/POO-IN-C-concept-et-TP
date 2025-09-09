#include<iostream>
#include<cstring>
#include "Pile.hpp"

using namespace std;

int main()
{
    try
    {
        Pile p;
        p.empiler(1);
        p.empiler(2);
        p.empiler(3);
        p.afficher();
        Pile P1(p);
        cout << "\nSommet: " << P1.sommet() << endl;
        p.depiler();
        cout << "Sommet apres depilement: " << p.sommet() << endl;
        p.afficher();
        char expr[30] = "2 3 + 5 * 10 + ";
        cout << "Resultat de l'expression postfixe (2 3 + 5 * 10 +): " << evaluerpostfixe(expr) << endl;
    }
    catch (ErreurPile &e)
    {
        cout <<"vous demander le sommet alors que la pile est vide" << endl;
    }
    return 0;
}