#include<iostream>
#include<cstring>
#include "Pile.hpp"

Pile::Pile()
{
    m_tete = NULL;
    m_nbelement = 0;
}
Pile::~Pile()
{
    while (!estVide())
    {
        this->depiler();
    }
    delete m_tete;
}
void Pile::empiler(int x)
{
    Pile_elt *e = new Pile_elt;
    if (e == NULL)
    {
        std::cerr << "Erreur d'allocation memoire" << std::endl;
        exit(-1);
    }
    e->x = x;
    e->Next = m_tete;
    m_tete =e;
    m_nbelement++;
}
void Pile::depiler()
{
    if(!estVide())
    {
        Pile_elt *temp = m_tete;
        m_tete = m_tete->Next;
        delete temp;
        m_nbelement--;
    }
    
}
int Pile::sommet() const
{
    if (!estVide())
    {
        return m_tete->x;
    }
    else
    {
        ErreurPile e;
        throw e;
    }
}
bool Pile::estVide() const
{
    return m_tete == NULL;
}
void Pile::afficher()
{
    Pile P1 = *this;
    while (!P1.estVide())
    {
        std::cout << P1.sommet();
        P1.depiler();
        if(!P1.estVide())
            std::cout << " -> ";
        
    }
}
Pile::Pile(Pile &p)
{
    m_tete=NULL;
    m_nbelement = 0;
    Pile P1;
    while (!p.estVide())
    {
        P1.empiler(p.sommet());
        p.depiler();
    }
    while (!P1.estVide())
    {
        this->empiler(P1.sommet());
        p.empiler(P1.sommet());
        P1.depiler();
    }

}
Pile& Pile::operator=(Pile &p)
{
    if(this==&p)
        return *this;
    while (!this->estVide())
        this->depiler();
    delete m_tete;
    m_tete = NULL;
    Pile P1;
    m_nbelement = 0;
    while (!p.estVide())
    {
        P1.empiler(p.sommet());
        p.depiler();
    }
    while (!P1.estVide())
    {
        this->empiler(P1.sommet());
        p.empiler(P1.sommet());
        P1.depiler();
    }
    return *this;
}

int evaluerpostfixe(char *expr)
{
    char *S1,S2[30];
    int a,b;
    Pile P1;
    S1=expr;
    while(*S1!='\0')
    {
        sscanf(S1,"%s",S2);
        if(isdigit(*S2))
        {
            P1.empiler(atoi(S2));
        }
        else
        {
            a=P1.sommet();
            P1.depiler();
            b=P1.sommet();
            P1.depiler();
            switch(S2[0])
            {
                case '+':
                    P1.empiler(a+b);
                    break;
                case '-':
                    P1.empiler(b-a);
                    break;
                case '*':
                    P1.empiler(a*b);
                    break;
                case '/':
                    P1.empiler(b/a);
                    break;
            }
        }
        // S1+=strlen(S2)+1;
        while(*S1!=' ' && *S1!='\0')
            S1++;
        S1++;
    }
    return P1.sommet();  
}