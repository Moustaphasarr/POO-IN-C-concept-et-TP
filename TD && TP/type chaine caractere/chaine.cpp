#include <iostream>
#include"chaine.hpp"


str::str()
{
    m_longueur=0;
    m_chaine=NULL;
}
str::str(const char *C)
{
    m_longueur=0;
    while(C[m_longueur]!='\0')
        m_longueur++;
    m_chaine=new char[m_longueur];
    if(!m_chaine)
        exit(-1);
    int i=0;
    while(i<m_longueur)
    {    m_chaine[i]=C[i];
        i++;
    }
    // m_chaine[m_longueur] = '\0';
}
str::str(const str& S)
{
    m_longueur=S.m_longueur;
    m_chaine= new char[m_longueur];
    int i=0;
    while(i<m_longueur)
    {    m_chaine[i]=S.m_chaine[i];
        i++;
    }
    // m_chaine[m_longueur] = '\0';

}
str::~str()
{   delete[] m_chaine;
    std::cout<<"destruction de"<<this<<std::endl;
}

str& str::operator=(str& S)
{
    int i=0;
    if(this!=&S)
    {  
        m_longueur=S.m_longueur;
        delete m_chaine;
        m_chaine= new char[m_longueur];
        if(!m_chaine)
            exit(-1);
        while(i<m_longueur)
        {    m_chaine[i]=S.m_chaine[i];
            i++;
        }
        // m_chaine[m_longueur] = '\0';
    }
    return *this;
}
bool str::operator==(str& S)const
{   
    if(m_longueur!=S.m_longueur)
        return false;
    int i=0;
    while(i<m_longueur&& m_chaine[i]==S.m_chaine[i])
        i++;
    if(i==m_longueur)
        return true;
    else
        return false;
}
str str::operator+(str& S)
{
    str C1;
    C1.m_longueur=m_longueur + S.m_longueur;
    C1.m_chaine=new char[C1.m_longueur];
    if(!C1.m_chaine)
        exit(-1);
    int i=0;
    while(i<m_longueur)
    {
        C1.m_chaine[i]=m_chaine[i];
        i++;
    }
    i=0;
    while(i+m_longueur<m_longueur+S.m_longueur)
    {
        C1.m_chaine[i+m_longueur]=S.m_chaine[i];
        i++;
    }
    C1.m_chaine[C1.m_longueur]='\0';
    return C1;
}

char& str::operator[](int i)
{
    if(i>0&&i<m_longueur)
        return m_chaine[i-1];
}

void str::afficher()
{
    std::cout<<"Chaine :"<<m_chaine<<std::endl;
}

std::istream&  operator>>(std::istream &entre , str &S)
{
    char C[100];
    std::cout<<"entrer une chaine de caractere"<<std::endl;
    entre>>C;
    S.m_longueur=0;
    while(C[S.m_longueur]!='\0')
        S.m_longueur++;
    S.m_chaine=new char[S.m_longueur];
    if(!S.m_chaine)
        exit(-1);
    int i=0;
    while(i<S.m_longueur)
    {    S.m_chaine[i]=C[i];
        i++;
    }
    // S.m_chaine[S.m_longueur] = '\0';
    return entre;
}
    
bool str::operator>(str&S)const
{
    if(m_longueur>S.m_longueur)
        return true;
    else if(m_longueur<S.m_longueur)
        return false;
    else
    {
        int i=0;
        while(i<m_longueur&&m_chaine[i]==S.m_chaine[i])
            i++;
        if(i==m_longueur)
            return false;
        else if(m_chaine[i]>S.m_chaine[i])
            return true;
        else
            return false;
    }
}