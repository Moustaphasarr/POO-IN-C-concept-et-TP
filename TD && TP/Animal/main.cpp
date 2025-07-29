#include <iostream>
#include "Animal.hpp"
using namespace std;

int main()
{
    Chat S1("SYlvestre");
    Chat S2("Tom");
    Souris So("Jerry");
    Canari C("Titi");
    Animal* tab[4];
    tab[0] = &S1;
    tab[1] = &S2;
    tab[2] = &So;
    tab[3] = &C;

    for (int i = 0; i < 4; i++)
    {
        tab[i]->exprimer();
    }

    return 0;
}