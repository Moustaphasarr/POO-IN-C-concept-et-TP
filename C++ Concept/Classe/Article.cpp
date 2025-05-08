#include<iostream>
#include"Article.hpp"

using namespace std;
// On definit L'ensembele Des methodes de la classe et certaines fonction si necessaire 
Article::Article() : m_refernce(0), m_designation(""), m_prix(0.0), m_quantite(0) 
{

}
Article::Article(int refernce,std::string designation, float prix, int quantite):m_refernce(refernce),m_designation(designation),m_prix(prix), m_quantite(quantite)
{

}

float Article::CalculerPrixTTC() const
{
    return m_prix*1.15;
}
float Article::CalculerPrixTransport() const
{
    return 0.05 *m_prix;
}
void Article::Retirer(int quantite)
{
    m_quantite=m_quantite-quantite;
}
void Article::Ajouter(int quantite)
{
    m_quantite=m_quantite+quantite;
}
void Article::afficher()
{
    cout<<"the number of refeferences is : "<<m_refernce<<endl;
    cout<<"designation :"<<m_designation<<endl;
    cout<<"Prix :"<<m_prix<<endl;
    cout<<"quantite"<<m_quantite<<endl;
}