#include<iostream>
#include "Employer.hpp"

using namespace std;

Employer::Employer(string nom,string prenom,string competence,int id ):Individu(nom,prenom,id)
{
m_competence=competence;
}

Employer::~Employer()
{

}
void Employer::afficher()
{
    Individu::afficher();
    cout<<"competence :"<<m_competence;
}

int Employer::clef()
{
    return Individu::clef();
}

