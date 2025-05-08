#include<iostream>
#include"Rectangle.hpp"


Rectangle::Rectangle(unsigned int L,unsigned int H)
{
    m_Hauteur=H;
    m_Largeur=L;    
}
Rectangle::Rectangle(const Rectangle& R)
{
    m_Hauteur=R.m_Hauteur;
    m_Largeur=R.m_Largeur;
}
Rectangle::~Rectangle()
{
    std::cout<<"delete"<<this;
}
Rectangle& Rectangle::operator=(const Rectangle& R)
{   if(this!= &R)
    {   m_Hauteur=R.m_Hauteur;
        m_Largeur=R.m_Largeur;
    }
    return *this;
}

int Rectangle::GetLargeur()const
{
    return m_Largeur;
}
int Rectangle::GetHauteur()const
{
    return m_Hauteur;
}
int Rectangle::perimetre()const
{
    return (m_Hauteur+m_Largeur)*2;
}
int Rectangle::surface()const
{
    return m_Hauteur*m_Largeur;
}
void Rectangle::SetLargeur(unsigned int A)
{
    m_Largeur=A;
}
void Rectangle::SetHauteur(unsigned int A)
{
    m_Hauteur=A;
}
bool Rectangle::compare(const Rectangle&  R)const
{
    return (m_Hauteur==R.m_Hauteur)&&(m_Largeur==R.m_Largeur);
}
void Rectangle::afficher()const
{
    std::cout<<"rectangle de L="<<m_Largeur<<" et H="<<m_Hauteur<<std::endl;
}
bool Rectangle::operator==(const Rectangle& R)const
{
    return (m_Hauteur==R.m_Hauteur)&&(m_Largeur==R.m_Largeur);
}
std::ostream& operator<<(std::ostream& sortie,const Rectangle& R )
{
    sortie<<"rectangle de L="<<R.m_Largeur<<" et H="<<R.m_Hauteur<<std::endl;
    return sortie;
}