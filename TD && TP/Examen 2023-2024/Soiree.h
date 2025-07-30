
#ifndef SOIREE_H
#define SOIREE_H
#include <iostream>
#include <string>

using namespace std;

class Date 
{
    private:
        int jour;
        int mois;
        int annee;
    public:
        Date(int jour, int mois, int annee)
        : jour(jour), mois(mois), annee(annee) {}
        ~Date()
        {
           
        }
        int getJour() const
        {
            return jour;
        }
        int getMois() const
        {
            return mois;
        }
        int getAnnee() const
        {
            return annee;
        }

};
class Soiree 
{
    private:
        Date date;
        string thematique;
        string salle;
        float frais;
    public:
        Soiree(Date,string,string,float);
        ~Soiree();
        virtual ostream& afficher(ostream&) const;
        friend ostream& operator<<(ostream&, const Soiree&);
        virtual float calculeprix() const;
        float getFrais() const;
};


#endif