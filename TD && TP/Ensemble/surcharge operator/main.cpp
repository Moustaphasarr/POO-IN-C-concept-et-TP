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

    E<<1;
    E<<2;
    E<<3;
    E<<6;
    E<<4;

    F<<4;
    F<<5;
    F<<6;

    cout<<"la Reuninon entre E et F est: "<<endl;
    G = E + F;
    cout<<"G={E U f}=";
    G.affiche();

    cout<<"l'Intersection entre E et F est: "<<endl;
    H = E * F;
    cout<<"H={E Inter F}=";
    H.affiche();

    J=E;
    cout<<"J=";
    J.affiche();
    cout<<"suppresion de 1 dans l'ensemble J"<<endl;
    J>>1;
    cout<<"J=";
    J.affiche();

    cout<<"teste si E contient 2 "<<endl;
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
