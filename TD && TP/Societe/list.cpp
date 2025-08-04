#include <iostream>
#include "liste.hpp"

list::list(int taille)
{
    m_T=new Base*[taille];
    m_taille=taille;
    m_nbcourant;
}
list::~list()
{
    int i=0;
    while(i<m_nbcourant)
    {
        delete m_T[i];
        i++;
    }    
    delete []m_T;
}
void list::afficher()
{
    int i=0;
    while(i<m_nbcourant)
    {
        m_T[i]->afficher();
        i++;
    }
}
void list::ajouter(Base *b)
{
    if(m_nbcourant<m_taille)
    {
        m_T[m_nbcourant]=b;
        m_nbcourant++;

    }
}