#ifndef FORMATAGE_HPP
#define FORMATAGE_HPP
#include<iostream>
#include"..\type chaine caractere\chaine.hpp"

class formatage: public str
{
    //italique
    str *m_style;
    //gras
    str *m_size;
    //couleur
    str *m_couleur;
    
    public:
    formatage();
    formatage(const char *,const char * ,const char *,const char *);
    formatage(str& ,const char* ,const char*,const char*);
    formatage(formatage&);
    ~formatage();
    formatage& operator=(formatage&);
    void setStyle(const str&);
    void setsize(const str&);
    void setcolor(const str&);
    void affichage()const;

};



#endif