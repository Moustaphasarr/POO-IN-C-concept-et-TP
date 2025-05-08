#include<iostream>
#include "Cercle.hpp"


//Pour la classe Centre
Centre::Centre()
{
    m_centre_x=0;
    m_centre_y=0;
}
Centre::Centre(unsigned int centre_x,unsigned int centre_y)
{
    m_centre_x = centre_x; 
    m_centre_y = centre_y;
}

int Centre::Getcentre_x()const
{
    return m_centre_x;
}

int Centre::Getcentre_y()const
{
    return m_centre_y;
}

//Pour La calsse cercle

Cercle::Cercle(): m_rayon(0),m_centre(0,0)
{

}

Cercle::Cercle(unsigned int rayon,unsigned int x,unsigned int y)
{
    m_rayon = rayon;
    m_centre=Centre(x,y) ;
}


Cercle::Cercle(const Cercle &C)
{
    m_centre=C.m_centre;
    m_rayon=C.m_rayon;
}

Cercle::~Cercle()
{
    std::cout<<"supression de "<<this<<std::endl;
}

Cercle& Cercle::operator=(const Cercle &C)
{
    if(this!=&C) // On verifie que l'on ne s'auto-assign pas
    {
        m_centre=C.m_centre;
        m_rayon=C.m_rayon;
    }
    return *this; // On retourne l'objet courant
}
unsigned int Cercle::GetRayon() const
{
    return m_rayon; // On retourne le rayon du cercle   
}
Centre Cercle::GetCentre() const
{
    return m_centre; // On retourne le centre du cercle   
}
unsigned int Cercle::perimetre() const
{
    return 2*3.14*m_rayon; // Périmètre du cercle
} // Périmètre du cercle
unsigned int Cercle::surface() const
{
    return 3.14*m_rayon*m_rayon; // Surface du cercle
} // Surface du cercle
void Cercle::Setrayon(unsigned int rayon)
{
    m_rayon=rayon; // On modifie le rayon du cercle
} 
void Cercle::SetCentre(const Centre& C)
{
    m_centre=C; // On modifie le centre du cercle
}
bool Cercle::compare(const Cercle& C)
{
return (m_rayon==C.m_rayon && m_centre.Getcentre_x()==m_centre.Getcentre_x() && m_centre.Getcentre_y()==m_centre.Getcentre_y()); // On compare les cercles
}
void Cercle::afficher()
{
    std::cout<<"Cercle de centre (x,y)=("<<m_centre.Getcentre_x()<<","<<m_centre.Getcentre_y()<<") et de rayon r="<<m_rayon<<std::endl;

}

// surdefinition des eprateur

bool Cercle::operator==(const Cercle& C) const
{
    return (m_rayon==C.m_rayon && m_centre.Getcentre_x()==C.m_centre.Getcentre_x() && m_centre.Getcentre_y()==C.m_centre.Getcentre_y()); // On compare les cercles
}
std::ostream& operator<<(std::ostream & sortie,Cercle & C)
{
    sortie<<"Cercle de centre (x,y)=("<<C.m_centre.Getcentre_x()<<","<<C.m_centre.Getcentre_y()<<") et de rayon r="<<C.m_rayon<<std::endl;
    return sortie;
}