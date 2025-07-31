#include <iostream>
#include "formatage.hpp"

using namespace std;

int main()
{
    str s1("je vais bien");
    formatage f1;
    formatage f2("Bonjour le monde", "italique", "gras", "rouge");
    formatage f3("Hola Mundo", "cursive", "negrita", "yellow");
    formatage f4(s1, "monsera", "gras", "bleu");
    formatage f5(f3);
    cout << "Affichage de f2: \n";
    f2.affichage();
    cout<<"--------------------------------------------------------\n";
    cout<<"test de l'operateur dafectation en faisant f1=f2"<<endl;
    f1=f2;
    f1.affichage();
    cout<<"--------------------------------------------------------\n";
    cout<<"test du constructeur de copie en faisant f5(f3)\n";
    f5.affichage();
    cout<<"--------------------------------------------------------\n";
    cout<<"chagement de la couleur , la taille et le style de f4\n";
    cout<<"f4 avant changement------- \n";
    f4.affichage();
    f4.setcolor("gris");
    f4.setsize("boold");
    f4.setStyle("italic");
    cout<<"f4 apres(boold,gris et italic) changement------- \n";
    f4.affichage();
    
    return 0;
}