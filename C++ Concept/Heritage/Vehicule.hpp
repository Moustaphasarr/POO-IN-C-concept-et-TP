#ifndef VEHICULE_HPP
#define VEHICULE_HPP
#include <iostream>
#include <vector>
class Vehicule
{
    public:
    //Les methode 
    Vehicule(std::string Genre,std::string Immatriculation,std::string Proprietaire);// Constructeur 
    void Sarreter();
    void Avancer();
    virtual void typeVehicule(); // Methode virtuelle pure pour forcer les classes derives a implementer cette methode

    //Les attributs 
    std::string m_Genre;
    std::string m_Immatriculation;
    std::string m_Proprietaire;
};

class Automobile : public Vehicule // ici , La classe automobile herite de Vehicule
{
    //Les methodes
    public:
    Automobile(std::string Genre,std::string Immatriculation,std::string Proprietaire,int Nb_places); // Constructeur
    void liste_passagers();
    void Ajouter_passager(std::string name);
    void Sarreter();
    void Avancer();
    void typeVehicule();

    //attribut
    private:
    int m_Nb_places;
    std::vector<std::string>m_passager;

};

class Camion :public Vehicule
{
    //Les methodes
    public:
    // Constructeur
    Camion(std::string Genre,std::string Immatriculation,std::string Proprietaire,std::string type_chargement,float tonnage);
    void Sarreter();
    void Avancer();
    void typeVehicule();

    //Les attributs
    private:
    std::string m_type_chargement;
    float m_tonnage; 
};




#endif