#include <iostream>
#include<string>
#include"Vehicule.hpp"



using  namespace std;
// La definition des methodes pour Vehicule  
Vehicule::Vehicule(std::string Genre,std::string Immatriculation,std::string Proprietaire):m_Genre(Genre),m_Immatriculation(Immatriculation),m_Proprietaire(Proprietaire)
{

}
void Vehicule::Sarreter()
{
    cout<<"Le vehicule s'arrete."<<endl;

}
void Vehicule::Avancer()
{
    cout<<"Le vehicule avance."<<endl;
}
void Vehicule::typeVehicule()
{
    cout<<"Le type de vehicule est : "<<m_Genre<<endl;
    cout<<"L'immatriculation est : "<<m_Immatriculation<<endl;
}

// La definition des methodes pour Automobile
Automobile::Automobile(std::string Genre,std::string Immatriculation,std::string Proprietaire,int Nb_places):Vehicule( Genre,Immatriculation,Proprietaire),m_Nb_places(Nb_places)
{

}

void Automobile::liste_passagers()
{
    int i=0;
    if(m_passager.size()>0)
    {
        while(i<m_passager.size())
        {
            cout<<"passager number :"<<i+1<<" "<<m_passager[i]<<endl;
            i++;
        }
    
    }
    
}

void  Automobile::Ajouter_passager(std::string name)
{
    if(m_passager.size()<m_Nb_places)
        m_passager.push_back(name);
}
void Automobile::Sarreter()
{
    cout<<"L'Automobile s'arrete."<<endl;
}
void Automobile::Avancer()
{
    cout<<"L'Automobile avance."<<endl;
}

void Automobile::typeVehicule()
{
    cout<<"Le type de vehicule est : "<<m_Genre<<endl;
    cout<<"L'immatriculation est : "<<m_Immatriculation<<endl;
}

// La definition des methodes pour Camion
Camion::Camion(string Genre,string Immatriculation,string Proprietaire,string type_chargement,float tonnage):Vehicule( Genre,Immatriculation,Proprietaire),m_type_chargement(type_chargement),m_tonnage(tonnage)
{

}
void Camion::Sarreter()
{
    cout<<"Le Camion s'arrete."<<endl;
}
void Camion::Avancer()
{
    cout<<"Le Camion avance."<<endl;
}

void Camion::typeVehicule()
{
    cout<<"Le type de vehicule est : "<<m_Genre<<endl;
    cout<<"L'immatriculation est : "<<m_Immatriculation<<endl;
}