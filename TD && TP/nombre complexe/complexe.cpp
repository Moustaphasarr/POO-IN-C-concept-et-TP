#include <iostream>
#include <math.h>
#include "complexe.hpp"


using namespace std;

complexe::complexe(){
    m_reel=0;
     m_imaginaire=0;
     cout<<"complexe nul"<<endl; 
}
complexe::complexe(double reel, double imaginaire)
 {
    m_reel=reel; 
    m_imaginaire=imaginaire;
    cout<<"complexe construit "<<"avec re="<<reel<<" et im="<<imaginaire <<endl;
 }
complexe::complexe(const complexe &c) {
    m_reel = c.m_reel;
    m_imaginaire = c.m_imaginaire;
}
double complexe::reel() const {
    return m_reel;
}
double complexe::imaginaire() const {
    return m_imaginaire;
}
double complexe::module() const {
    return sqrt(m_reel * m_reel + m_imaginaire * m_imaginaire);
}
void complexe::ajouter(complexe const &c) {
    m_reel += c.m_reel;
    m_imaginaire += c.m_imaginaire;
}
complexe complexe::multiplier(complexe const &c) const {
    double reel = m_reel * c.m_reel - m_imaginaire * c.m_imaginaire;
    double imaginaire = m_reel * c.m_imaginaire + m_imaginaire * c.m_reel;
    return complexe(reel, imaginaire);
}
void complexe::afficher() const {
    cout << m_reel << " + " << m_imaginaire << "i" << endl;
}

complexe complexe::operator+(complexe const &c) {

    return complexe(m_reel + c.m_reel, m_imaginaire + c.m_imaginaire);
}
complexe complexe::operator*(complexe const &c) {
    return complexe(m_reel * c.m_reel - m_imaginaire * c.m_imaginaire, m_reel * c.m_imaginaire + m_imaginaire * c.m_reel);
}

complexe& complexe::operator=(const complexe &c) {
    if (this != &c) { // Eviter l'auto-assignement
        m_reel = c.m_reel;
        m_imaginaire = c.m_imaginaire;
    }
    return *this;
}
complexe::~complexe() {
    cout << "Destruction de complexe" << endl;
}