#ifndef SALARIE_H
#define SALARIE_H
class Salarie{
private:
    char *prenom,*nom;
public:
    Salarie(const char *,const char*);
    Salarie(const Salarie &);
    virtual ~Salarie();
    char *getPrenom()const;
    char *getNom()const;
    void afficher() ;
    Salarie & operator=(const Salarie &);
};
#endif