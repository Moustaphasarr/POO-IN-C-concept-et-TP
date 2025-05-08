#ifndef CERCLE_HPP
#define CERCLE_HPP

class Centre
{
    private:
        unsigned int m_centre_x;
        unsigned int m_centre_y;
    public:
    Centre();
    Centre(unsigned int centre_x,unsigned int centre_y);
    int Getcentre_x()const;
    int Getcentre_y()const;
    

};

class Cercle 
{
    private:
        unsigned int m_rayon; // Rayon du cercle
        Centre m_centre;

    public:
    //Definition minimal
    Cercle();
    Cercle(unsigned int rayon,unsigned int x,unsigned int y);
    Cercle(const Cercle &C);
    ~Cercle();
    Cercle& operator=(const Cercle &C);
    unsigned int GetRayon() const;
    Centre GetCentre() const;
    unsigned int perimetre() const; // Périmètre du cercle
    unsigned int surface() const; // Surface du cercle
    void Setrayon(unsigned int rayon); 
    void SetCentre(const Centre& C);
    bool compare(const Cercle& C);
    void afficher();
    //surdefinition des oparateurs << et ==
    bool operator==(const Cercle& C) const;
    friend std::ostream& operator<<(std::ostream & sortie,Cercle & C);

};



#endif