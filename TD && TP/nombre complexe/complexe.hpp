#ifndef COMPLEXE_HPP
#define COMPLEXE_HPP
#include <iostream>

class complexe {
    private:
    double m_reel;
    double m_imaginaire;
    public:
    complexe();
    ~complexe();
    complexe(double reel, double imaginaire);
    complexe(const complexe &c);
    complexe& operator=(const complexe &c);
    double reel() const;
    double imaginaire() const;
    double module() const;
    void ajouter(complexe const &c);
    complexe multiplier(complexe const &c) const;
    void afficher() const;
    complexe operator+(complexe const &c);
    complexe operator*(complexe const &c);
    friend std::ostream& operator << (std::ostream& sortie ,const complexe &c) {
        sortie << c.m_reel << " + " << c.m_imaginaire << "i" << std::endl;
        return sortie;
    }

};




#endif // COMPLEXE_HPP