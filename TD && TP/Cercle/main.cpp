#include <iostream>
#include "Cercle.hpp"

using namespace std;

int main()
{
    Cercle C1(5,2,3),C2(10,4,5);
    Cercle c3(C1),C4=C2; // Constructeur de copie
    cout<<"affichage de tout les objet creer"<<endl;
    C1.afficher();
    C2.afficher();
    c3.afficher();
    C4.afficher();
    cout<<"Cercle 1 : "<<endl;
    C1.afficher();
    cout<<"perimetre : "<<C1.perimetre()<<endl;
    cout<<"surface : "<<C1.surface()<<endl;
    cout<<"Cercle 2 : "<<endl;
    C2.afficher();
    cout<<"perimetre : "<<C2.perimetre()<<endl;
    cout<<"surface : "<<C2.surface()<<endl;
    cout<<"comparaison entre C1 et C3"<<endl;
    if(C1.compare(c3))
    {
        cout<<"C1 et C3 sont identiques"<<endl;
    }
    else
    {
        cout<<"C1 et C3 ne sont pas identiques"<<endl;
    }
    cout<<"comparaison entre C2 et C4"<<endl;
    if(C2.compare(C4))
    {
        cout<<"C2 et C4 sont identiques"<<endl;
    }
    else
    {
        cout<<"C2 et C4 ne sont pas identiques"<<endl;
    }

    cout<<"je modifie le rayon de C1 et le centre pour retester l'egalite entre les 2 cercles"<<endl;
    C1.SetCentre(Centre(3,4));
    C1.Setrayon(6);
    cout<<"recomparaison entre C1 et C3"<<endl;
    if(C1.compare(c3))
    {
        cout<<"C1 et C3 sont identiques"<<endl;
    }
    else
    {
        cout<<"C1 et C3 ne sont pas identiques"<<endl;
    }

    cout<<"===============On utilise Les operateur << et ==";
    cout<<"comparaison entre C2 et C4"<<endl;
    if(C2==C4)
    {
        cout<<"C2 et C4 sont identiques"<<endl;
    }
    else
    {
        cout<<"C2 et C4 ne sont pas identiques"<<endl;
    }
    cout<<"affichage avec l'operateur <<"<<endl;
    cout<<C1<<C2<<c3<<C4<<endl;
    


    return 0;
}