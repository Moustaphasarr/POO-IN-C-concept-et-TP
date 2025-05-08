#include<iostream>
#include"Article.hpp"



using namespace std;

int main()
{
    // Dans la focntion main on utilise la classe en essayant de creer deux objets
    Article Habille(14251,"Pantalon",10000 , 100); // instanciation :Habille est une instance de la classe Article
    Article TELE(18322,"TV 51cm",150000,50);// De meme que ici
    cout<<"display before object opration "<<endl;
    Habille.afficher();
    TELE.afficher();
    cout<<"price or taxe of Habille"<<Habille.CalculerPrixTTC()<<endl;
    cout<<"price of transport "<<Habille.CalculerPrixTransport()<<endl;
    Habille.Retirer(6);
    Habille.Ajouter(5);
    cout<<"price or taxe of Habille"<<TELE.CalculerPrixTTC()<<endl;
    cout<<"price of transport "<<TELE.CalculerPrixTransport()<<endl;
    TELE.Retirer(6);
    TELE.Ajouter(5);

    cout<<"display after object opration "<<endl;
    Habille.afficher();
    TELE.afficher();

    



    return 0;
}