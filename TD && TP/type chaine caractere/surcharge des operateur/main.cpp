#include<iostream>
#include<string>
#include "chaine.hpp"

using namespace std;

int main()
{
    str C1("Bonjour");
    str C2("Bonsoir");
    str C3(" Fatima");
    str C4("et la journee");
    str C5,C6;
    C5=C1;
    C6=C2;
    cout<<"on affiche les chaine de caractere avant de faire les manipulations"<<endl;
    cout<<"C1-->"<<C1;
    cout<<"C2-->"<<C2;
    cout<<"C2-->"<<C3;
    cout<<"C4-->"<<C4;
    cout<<"C5-->"<<C5;
    cout<<"C6-->"<<C6;

    cout<<"comparaison entre C1 ET C5"<<endl;
    if(C1==C5)
        cout<<"Les deux chaines se valent"<<endl;
    else
     cout<<"chaine different"<<endl;

    cout<<"comparaison entre C1 ET C2"<<endl;
     if(C1==C2)
         cout<<"Les deux chaines se valent"<<endl;
     else
      cout<<"chaine different"<<endl;

    cout<<"concatenation de C1 et C3"<<endl;
    str CONCA=C1+C2;
    cout<<CONCA;

    cout<<"Utilisation de l'operateur d'indexation"<<endl;
    cout<<"2 et 6 du chaine (et la journee) 2="<<C4[2]<<" 8="<<C4[8]<<endl;
    cout<<"Utilisation de l'operateur d'insertion"<<endl;
    cout<<"C1="<<C1<<endl;
    cout<<"C2="<<C2<<endl;
    cout<<"utilisation de l'operateur d'extraction"<<endl;
    str C7;
    cin>>C7;
    cout<<"C7="<<C7<<endl;



    return 0;
}