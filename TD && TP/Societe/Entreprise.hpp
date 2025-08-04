#ifndef Entreprise_H
#define Entreprise_H
#include <iostream>
#include "individu.hpp"

class Entreprise:public Base
{
    private:
        std::string m_nom;
        Individu m_directeur;
        int m_idE;
        int m_nombre_sal;
    public:
        Entreprise(std::string,int,int,std::string,std::string,int);
        ~Entreprise();
        void afficher();
        int clef();

};



#endif