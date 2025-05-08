#include <iostream>
#include"Rectangle.hpp"

using namespace std;
int main()
{
    Rectangle R(4,6),R1(1,6),R3(3,1);
    Rectangle R4(R),R5(R1);
    cout<<"affichage en utilisant les getteur: H= "<<R.GetHauteur()<<"L= "<<R.GetLargeur()<<endl;
    cout<<"affichage en utilisant la methode afficher"<<endl;
    R.afficher();
    cout<<"surface="<<R.surface()<<"perimetre"<<R.perimetre()<<endl;
    cout<<"affichage de R1 "<<endl;
    R1.afficher();
    cout<<"modification de R1 "<<endl;
    R1.SetHauteur(2);
    R1.SetLargeur(2);
    cout<<"affichage de R1"<<endl;
    R1.afficher();
    cout<<"on compare en utilisant la methode compare() R et R4"<<endl;
    if(R.compare(R4))
        cout<<"egaliter des deux rectangle"<<endl;
    else
        cout<<"pas egaliter"<<endl;
    cout<<"on compare en utilisant l'operateur ==() R et R4"<<endl;
    if(R==R4)
        cout<<"egaliter des deux rectangle"<<endl;
    else
        cout<<"pas egaliter"<<endl;
    cout<<"on compare en utilisant l'operateur ==() pour R1 et R4"<<endl;
    if(R1==R4)
        cout<<"egaliter des deux rectangle"<<endl;
    else
        cout<<"pas egaliter"<<endl;
    cout<<"on compare en utilisant la methode compare() R1 et R4"<<endl;
    if(R1.compare(R4))
        cout<<"egaliter des deux rectangle"<<endl;
    else
        cout<<"pas egaliter"<<endl;
    cout<<"on affiche avec l'operateur <<"<<endl;
    cout<<R1<<R3<<R4<<endl;
    return 0;

}