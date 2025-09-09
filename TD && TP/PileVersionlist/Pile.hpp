#ifndef PILE_HPP
#define PILE_HPP
#include <iostream>

typedef struct cellule
{
    int x;
    struct cellule *Next;

}Pile_elt;


class Pile
{
    private:
        Pile_elt *m_tete;
        int m_nbelement;
    public:
        Pile();
        ~Pile();
        void empiler(int x);
        void depiler();
        int sommet() const;
        bool estVide() const;
        void afficher();
        Pile(Pile &p);
        Pile& operator=(Pile &p);

};
int evaluerpostfixe(char *expr);

class ErreurPile
{
    public:
        ErreurPile()
        {
            std::cout<<"La pile est vide impossible de recuperer la sommet"<<std::endl;
        }
};

#endif // PILE_HPP