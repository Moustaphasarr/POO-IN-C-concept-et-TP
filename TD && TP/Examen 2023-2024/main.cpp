#include <iostream>
#include "Anniversaire_Entreprise.h"
#include "Complexe.h"
#include "Leve_de_fond.h"
#include "Soiree.h"
using namespace std;

int main()
{
    Soiree s1(Date(27,4,2024), "Lien de famille", "Salle AMY",100000);
    Soiree s2(Date(27,9,2024), "L'amitie", "Salle BETA",90000);
    cout << s1 << endl;
    cout << s2 << endl;
    //TEST DES PARTIES SUIVANTES
    cout<<"test des parties suivantes ..."<<endl;
    Anniversaire_Entreprise AE(Date(27,4,2024), "Anniversaire entreprise", "Salle Khoudia", 100000, 5000, 3000, 2000, 15000);
    cout << AE << endl;
    Leve_de_fond LDF(Date(27,9,2024), "Leve de fond", "Salle BETA", 90000, 5000, 20000, 10000);
    cout << LDF << endl;
    //TEST DU COMPLEXE
    cout<<"test du complexe ..."<<endl;
    Complexe C(10);
    C.ajouterSoiree(&s1);
    C.ajouterSoiree(&s2);
    C.ajouterSoiree(&AE);
    C.ajouterSoiree(&LDF);
    C.afficherSoirees();
    cout << "Gain total: " << C.gain() << endl;

    return 0;
}