#include <iostream>
#include"Compte.hpp"

long Compte::numero_a_utiliser=100;

int main()
{
    Compte Client1(0);
    Compte Client2(0);
    Compte Client3(0);
    Compte Client4(0);
    Compte Client5(0);
    Compte Client6(0);
    Client1.versement(3000);
    Client2.versement(4000);
    Client3.versement(5000);
    Client4.versement(1000);

    Client1.afficher_toi();
    Client2.afficher_toi();
    Client3.afficher_toi();
    Client4.afficher_toi();
    Client5.afficher_toi();
    Client6=Client1;
    Client6.afficher_toi();
    Client6.retrait(2000);
    Client6.afficher_toi();
    
    
}