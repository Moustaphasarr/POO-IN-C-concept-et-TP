#ifndef ENSEMBLE_HPP
#define ENSEMBLE_HPP



class Ensemble
{
    private:
        int m_N_Element;
        int m_cardinal;
        int *m_tab;
        int parcour;
    public:
        Ensemble(int N);
        Ensemble(const Ensemble &E);
        ~Ensemble();
        Ensemble& operator=(const Ensemble& E);
        int cardinal()const;
        void ajouter(int x);
        void supprimer(int x);
        bool contient(int x)const;
        void affiche()const;
        Ensemble operator+(const Ensemble& E)const;//Union
        Ensemble operator*(const Ensemble& E)const; // INTERSECT
        void init();
        bool existe()const;
        int prochain();

};

int somme(Ensemble E);


#endif //ENSEMBLE_HPP