 #ifndef ARTICLE_HPP
#define ARTICLE_HPP
#include <string>

/* Pour creer une classe , il suffit de definir une classe avec le mot clef class
puis de definir les attributs et les methodes de la classe
*/
class Article // nom de la classe
{
    //Les methodes
    public:
    Article();//constructeur par defaut
    Article(int refernce,std::string designation, float prix, int quantite);// constructeur personaliser
    //Les methodes qu'utilise la classe
    float CalculerPrixTTC() const;
    float CalculerPrixTransport() const;
    void Retirer(int quantite);
    void Ajouter(int quantite);
    void afficher();

    // Les attributs avec le principe de l'encapsulation
    private:
    int m_refernce;
    std::string m_designation;
    float m_prix;
    int m_quantite;
};

#endif