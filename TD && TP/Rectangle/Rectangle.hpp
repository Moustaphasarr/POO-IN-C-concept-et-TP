#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include<iostream>


class Rectangle
{
    private:
        unsigned int m_Largeur;
        unsigned int m_Hauteur;
    public:
        Rectangle(unsigned int L,unsigned int H);
        Rectangle(const Rectangle& R);
        ~Rectangle();
        Rectangle& operator=(const Rectangle& R);
        int GetLargeur()const;
        int GetHauteur()const;
        int perimetre()const;
        int surface()const;
        void SetLargeur(unsigned int A);
        void SetHauteur(unsigned int A);
        bool compare(const Rectangle& R)const;
        void afficher()const;
        bool operator==(const Rectangle& R)const;
        friend std::ostream& operator<<(std::ostream& sortie,const Rectangle& R );

};




#endif //RECTANGLE_HPP