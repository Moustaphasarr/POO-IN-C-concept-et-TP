#include <iostream>
#include<string>
#include "Animal.hpp"
using namespace std;


Animal::Animal(std::string nom)
{
    m_nom=nom;
}
string Animal::getnom()const
{
    return m_nom;
}

Animal::~Animal()
{ }


//Mamifere

Mamifer::Mamifer(std::string nom):Animal(nom)
{
}
string Mamifer::getnom()const
{
    return Animal::getnom();
}
Mamifer::~Mamifer()
{ }

//Chat
Chat::Chat(std::string nom):Mamifer(nom)
{
}
Chat::~Chat()
{ }
void Chat::exprimer()
{
    cout << "Le chat " << getnom() << " dit: Miaou!" << endl;
}
string Chat::getnom()const
{
    return Mamifer::getnom();
}

//Souris
Souris::Souris(std::string nom):Mamifer(nom)
{
}
Souris::~Souris()
{ }
void Souris::exprimer()
{
    cout << "La souris " << getnom() << " dit: Couic!" << endl;
}
string Souris::getnom()const
{
    return Mamifer::getnom();
}

//Oiseau
Oiseau::Oiseau(std::string nom):Animal(nom)
{
}
Oiseau::~Oiseau()
{ }
string Oiseau::getnom()const
{
    return Animal::getnom();
}

//Canaris
Canari::Canari(std::string nom):Oiseau(nom)
{
}
Canari::~Canari()
{ }
void Canari::exprimer()
{
    cout << "Le canari " << getnom() << " dit: Cui cui!" << endl;
}

string Canari::getnom()const
{
    return Oiseau::getnom();
}