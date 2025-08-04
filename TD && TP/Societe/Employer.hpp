#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <iostream>
#include "individu.hpp"

class Employer:public Individu
{
    private:
        std::string m_competence;
    public:
        Employer(std::string,std::string,std::string,int);
        ~Employer();
        void afficher();
        int clef();

};



#endif