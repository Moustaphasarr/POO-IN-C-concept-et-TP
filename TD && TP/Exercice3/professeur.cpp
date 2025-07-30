#include <iostream>
#include <cstring>
#include "professeur.h"
using namespace std;
Professeur::Professeur(const char *prenom,const char* nom,const char* diplome) : Salarie(prenom,nom)
{
    this->diplome = new char[strlen(diplome)+1];
    strcpy(this->diplome,diplome);
    for (int i = 0; i < 10; i++)
        matieres[i] = NULL;
}

Professeur::Professeur(const Professeur &p) : Salarie(p)
{
    diplome = new char[strlen(p.diplome)];
    strcpy(diplome,p.diplome);
    for (int j = 0; j < 10; j++)
        matieres[j] = NULL;
    int i = 0;
    while (i < 10 && p.matieres[i]){
        matieres[i] = new char[strlen(p.matieres[i])];
        strcpy(matieres[i],p.matieres[i]);
        i++;
    }
}

Professeur::~Professeur(){
    if(diplome)
        delete diplome;
    int i = 0;
    while (i < 10 && matieres[i]){
        delete matieres[i];
        i++;
    }
}

char *Professeur::getDiplome() const{
    return diplome;
}
char *Professeur::getIemeMatier(int i)const{
    if(i < 0 || i >= 10 || !matieres[i])
        return NULL;
    return matieres[i];
}
void Professeur::ajouterMatiere(const char *matiere)
{
    int i = 0;
    while (i < 10 && matieres[i])
        i++;
    if(i<10){
        matieres[i] = new char[strlen(matiere)];
        strcpy(matieres[i],matiere); 
    }
}

void Professeur::afficher(){
    Salarie::afficher();
    cout << "Diplome : " << diplome << endl;
    if(!matieres[0])
        cout << "Aucune matiere enseignee" << endl;
    else{
        int i = 0;
        cout << "Matieres enseignees :" << endl;
        while (i < 10 && matieres[i]){
            cout << matieres[i]  << " " << endl;
            i++;
        }
    }
}

Professeur& Professeur::operator=(Professeur &p){
    if(this != &p){
        //Salarie *s1, *s2;
        //s1 = this;
        //s2 = &p;
        //*s1 = *s2;
        Professeur::operator=(p);
        if(diplome)
            delete diplome;
        diplome = new char[strlen(p.diplome)];
        strcpy(diplome,p.diplome);
        int i = 0;
        while (i < 10 && matieres[i]){
            delete matieres[i];
            i++;
        }
        i = 0;
        while (p.matieres[i]){
            matieres[i] = new char[strlen(p.matieres[i])+1];
            strcpy(matieres[i],p.matieres[i]);
            i++;
        }
    }
    return *this;
}