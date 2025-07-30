#ifndef SCOMPTE_H
#define SCOMPTE_H

class Compte
{
    protected: long numero;
    protected: double solde;
    static long numero_a_utiliser;
public:
    Compte(long num=0);
    void afficher_toi();
    void versement(double);
    virtual bool retrait(double);
    Compte& operator=(Compte&);
    Compte(Compte&);
    ~Compte();
};

class CompteCour: public Compte
{
    public:
    CompteCour();
    bool retrait(double);
};

class ComptEpargne : public Compte
{

    double taux;
    public:
    ComptEpargne(long);
    double inetret();

};



#endif