#ifndef INDIVIDU_H
#define INDIVIDU_H
#include <iostream>
#include "Base.hpp"

class Individu:public Base
{
    private:
    std::string m_nom,m_prenom;
    int m_id;
    public:
    Individu(std::string="",std::string="",int);
    ~Individu();
    void afficher();
    int clef();

};



#endif