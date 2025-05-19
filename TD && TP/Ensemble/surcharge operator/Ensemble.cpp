#include <iostream>
#include "Ensemble.hpp"

Ensemble::Ensemble(int N)
{
    m_N_Element = N;
    m_cardinal = 0;
    m_tab = new int[m_N_Element];
    if(!m_tab)
    {
        std::cerr << "Memory allocation failed" << std::endl;
        exit(1);
    }
}
Ensemble::Ensemble(const Ensemble &E)
{
    m_N_Element = E.m_N_Element;
    m_cardinal = E.m_cardinal;
    m_tab = new int[m_N_Element];
    if(!m_tab)
    {
        std::cerr << "Memory allocation failed" << std::endl;
        exit(1);
    }
    for(int i=0; i<m_cardinal; i++)
    {
        m_tab[i] = E.m_tab[i];
    }
}
Ensemble::~Ensemble()
{
    delete[] m_tab;
    
}
Ensemble& Ensemble::operator=(const Ensemble& E)
{
    if(this != &E)
    {
        delete[] m_tab;
        m_N_Element = E.m_N_Element;
        m_cardinal = E.m_cardinal;
        m_tab = new int[m_N_Element];
        if(!m_tab)
        {
            std::cerr << "allocation essouer" << std::endl;
            exit(-1);
        }
        for(int i=0; i<m_cardinal; i++)
        {
            m_tab[i] = E.m_tab[i];
        }
    }
    
    return *this;
}
int Ensemble::cardinal()const
{
    return m_cardinal;
}


void Ensemble::affiche()const
{
    if(m_cardinal == 0)
    {
        std::cout << "Ensemble vide" << std::endl;
    }
    else
    {
        std::cout << "[";
        for(int i=0; i<m_cardinal; i++)
        {
            std::cout << m_tab[i];
            if(i+1< m_cardinal)
            {
                std::cout << ", ";
            }

        }
        std::cout << "]" << std::endl;
    }
}
Ensemble& Ensemble::operator<<(int x)//add x
{
    if(m_cardinal<m_N_Element && !(*this%x))
    {   
        m_tab[m_cardinal]=x;
        m_cardinal++;
    }
    return *this;
}
Ensemble& Ensemble::operator>>(int x)//delete x
{
    int i=0;
    while(i<m_cardinal&& m_tab[i]!=x)
        i++;
    if(i<m_cardinal)
    {
        while(i<m_cardinal)
        {
            m_tab[i]=m_tab[i+1];
            i++;
        }    
        m_cardinal--;
    }
    return *this;
}
bool Ensemble::operator%(int x )const// x est il dans E
{
    int i=0;
    while(i<m_cardinal&&m_tab[i]!=x)
        i++;
    return (i<m_cardinal);
}
Ensemble Ensemble::operator+(const Ensemble& E)const//Union
{
    Ensemble result(m_N_Element + E.m_N_Element);
    for(int i=0; i<m_cardinal; i++)
    {
        result<< m_tab[i];
    }
    for(int i=0; i<E.m_cardinal; i++)
    {
        result<<E.m_tab[i];
    }

    return result;
}
Ensemble Ensemble::operator*(const Ensemble& E)const // INTERSECT
{
    int i=0;;
    Ensemble result(m_N_Element + E.m_N_Element);
    while(i<m_cardinal)
    {
        if(E%m_tab[i])
        {
            result<<m_tab[i];
        }
        i++;
    }

    return result;
}

void Ensemble::init()
{
    parcour=0;
}
bool Ensemble::existe()const
{
    return parcour < m_cardinal;
}
int Ensemble::prochain()
{
    return m_tab[parcour++];
}

int somme(Ensemble E)
{
    E.init();
    int s=0;
    while(E.existe())
    {
        s+=E.prochain();
    }
    return s;
}