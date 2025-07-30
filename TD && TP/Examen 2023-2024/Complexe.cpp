#include "Complexe.h"

using namespace std;

Complexe::Complexe(int cap)
{
    capacite=cap;
    soirees = new Soiree*[capacite];
    if(!soirees)
    {
        cout << "Erreur d'allocation de mémoire pour le tableau de soirées." << endl;
        exit(-1);
        
    }
    int i=0;
    while(i<capacite)
    {
        soirees[i]=nullptr;
        i++;
    }
}

Complexe::~Complexe()
{
    int i=0;
    while(i<capacite)
    {
        delete soirees[i]; // Suppression de chaque objet Soiree
        i++;
    }
    delete[] soirees;
}

void Complexe::ajouterSoiree(Soiree* soiree)
{
    int i = 0;
    while (i < capacite && soirees[i] != nullptr)
    {
        i++;
    }
    if (i >= capacite)
    {
        cout << "Capacité maximale atteinte, impossible d'ajouter une nouvelle soirée." << endl;
        return;
    }
    if (i < capacite)
    {
        soirees[i] = soiree;
        
    }
}

void Complexe::afficherSoirees() const
{
    int i=0;
    while (i < capacite)
    {
        if (soirees[i] != nullptr)
        {
            cout << *soirees[i] << endl;
            cout << "Cout: " << soirees[i]->calculeprix() << endl;
        }
        i++;
    }
}

float Complexe::gain() const
{
    int i=0;
    float totalGain = 0.0;
    while(i<capacite&& soirees[i] != nullptr)
    {
        totalGain += soirees[i]->calculeprix();
        i++;
    }
    return totalGain;
}
