#include<iostream>
#include"Entreprise.hpp"
using namespace std;

Entreprise::Entreprise(string nom,int id,int nbsal,string nomdirec, string prenom_direc,int iddirec):m_directeur(nomdirec,prenom_direc,iddirec)
{
    m_nom=nom;
    m_idE=id;
    m_nombre_sal=nbsal;
}
Entreprise::~Entreprise()
{

}
void Entreprise::afficher()
{
    m_directeur.afficher();
    cout<<"nom Etreprise: "<<m_nom;
    cout<<"idE: "<<m_idE;
    cout<<"nombre de salarie"<<m_nombre_sal;
}
int Entreprise::clef()
{
    return m_idE;
}