#include<iostream>
#include "Ensemble.hpp"

using namespace std;

int main()
{
    Ensemble E(10);
    Ensemble F(10);
    Ensemble G(10);
    Ensemble H(10);
    Ensemble I(10);
    Ensemble J(10);
    Ensemble K(10);
    Ensemble L(10);
    Ensemble M(10);
    Ensemble N(10);

    E.ajouter(1);
    E.ajouter(2);
    E.ajouter(3);
    E.ajouter(6);
    E.ajouter(4);

    F.ajouter(4);
    F.ajouter(5);
    F.ajouter(6);

    cout<<"la Reuninon entre E et F est: "<<endl;
    G = E + F;
    cout<<"G={E U f}=";
    G.affiche();

    cout<<"l'Intersection entre E et F est: "<<endl;
    H = E * F;
    cout<<"H={E Inter F}=";
    H.affiche();

    cout<<"ajout des element dans I qui etait vide a travers l'operateur <<"<<endl;        
    I = E << 7<<5<<9<<7<<4<<1;
    cout<<"I=";
    I.affiche();

    cout<<"suppresion de 1 dans l'ensemble J"<<endl;
    J = E >> 1;
    cout<<"J=";
    J.affiche();

    cout<<"teste si E contient 2 a travers la methode contient "<<endl;
    if(E.contient(2))
        cout << "E Contient 2"<<endl;
    else
        cout<<"E ne Contient pas 2";

    cout<<"teste si E contient 2 a travers l'operateur % "<<endl;
    if(E % 2)
        cout << "E Contient 2"<<endl;
    else
        cout<<"E ne Contient pas 2";

    cout<<"reunion de E , F , G"<<endl;
    L = E + F + G;
    cout<<"L=";
    L.affiche();

    cout<<"Intersection de E , F et G"<<endl;
    M = E * F * G;
    cout<<"M=";
    M.affiche();
    cout<<"somme de M="<<somme(M)<<endl;

    return 0;
}
