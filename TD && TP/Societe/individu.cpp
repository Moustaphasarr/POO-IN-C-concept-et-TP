#include<iostream>
#include"individu.hpp"

using namespace std;
Individu::Individu(string nom,string prenom,int id)
{
    m_nom=nom;
    m_id=id;
    m_prenom=prenom;
}
Individu::~Individu()
{

}
void Individu::afficher()
{
    cout<<"nom: "<<m_nom<<endl;
    cout<<"prenom: "<<m_prenom<<endl;
    cout<<"id: "<<m_id<<endl;
}
int Individu::clef()
{
    return m_id;
}