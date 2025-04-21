#include <iostream>
#include<string.h>
#include"Vehicule.hpp"


using namespace std;

int main()
{
    // Creation d'un vehicule
    Vehicule *v1 = new Vehicule("Voiture", "1234ABCD", "John Doe");
    v1->Avancer();
    v1->Sarreter();
    v1->typeVehicule();

    // Creation d'une automobile
    Automobile *a1 = new Automobile("Automobile", "5678EFGH", "Jane Doe", 5);
    a1->Ajouter_passager("Alice");
    a1->Ajouter_passager("Bob");
    a1->liste_passagers();
    a1->Avancer();
    a1->Sarreter();
    a1->typeVehicule();

    // Creation d'un camion
    Camion *c1 = new Camion("Camion", "91011JKLM", "Charlie Brown", "Bois", 10.5);
    c1->Avancer();
    c1->Sarreter();
    c1->typeVehicule();

    // Libération de la mémoire
    delete v1;
    delete a1;
    delete c1;

    return 0;
}