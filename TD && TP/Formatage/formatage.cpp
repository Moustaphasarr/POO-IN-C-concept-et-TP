#include<iostream>
#include "formatage.hpp"

formatage::formatage():str()
{
    m_style=nullptr;
    m_couleur=nullptr;
    m_size=nullptr;
}


formatage::formatage(const char *S,const char * style,const char *size,const char *couleur):str(S)
{
    m_style=new str(style);
    m_size=new str(size);
    m_couleur=new str(couleur);
}


formatage::formatage(str& S,const char * style,const char *size,const char *couleur):str(S)
{
    m_style=new str(style);
    m_size=new str(size);
    m_couleur=new str(couleur);
}


formatage::formatage(formatage& f):str(f)
{
    m_style = f.m_style ? new str(*f.m_style) : nullptr;
    m_size = f.m_size ? new str(*f.m_size) : nullptr;
    m_couleur = f.m_couleur ? new str(*f.m_couleur) : nullptr;
   
}
formatage::~formatage()
{
    delete m_style;
    delete m_size;
    delete m_couleur;
}
formatage& formatage::operator=(formatage& f)
{
    if(this != &f)
    {
        str::operator=(f);
        delete m_style;
        delete m_size;
        delete m_couleur;
        m_style = f.m_style ? new str(*f.m_style) : nullptr;
        m_size = f.m_size ? new str(*f.m_size) : nullptr;
        m_couleur = f.m_couleur ? new str(*f.m_couleur) : nullptr;
    }
    return *this;
}

void formatage::setStyle(const str& style)
{
    if(m_style)
        delete m_style;
    m_style = new str(style);
}
void formatage::setsize(const str& size)
{
    if(m_size)
        delete m_size;
    m_size = new str(size);
}
void formatage::setcolor(const str& couleur)
{
    if(m_couleur)
        delete m_couleur;
    m_couleur = new str(couleur);
}
void formatage::affichage()const
{
    if (m_couleur || m_size || m_style)
    {   if(m_style)
        {
            std::cout << "<" << (*m_style)[1] << ">";
            std::cout << *this;
            std::cout << "</" << (*m_style)[1] << ">" << "\n";
        }
        
        if(m_size)
        {
            std::cout << "<" << (*m_size)[1] << ">";
            std::cout << *this;
            std::cout << "</" << (*m_size)[1] << ">" << "\n";
        }
        
        if(m_couleur)
        {
            std::cout << "< font couleur=\"";
            m_couleur->afficher();
            std::cout<<" \">";
            std::cout << *this;
            std::cout << " </font>" << "\n";
        }
        
    }
    else
    {
        std::cout << "Texte: " << *this << "\n";
    }
}

