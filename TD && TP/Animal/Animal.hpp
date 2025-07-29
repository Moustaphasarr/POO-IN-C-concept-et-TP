#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal 
{
    std::string m_nom;
    public:
    Animal(std::string);
    virtual void exprimer() = 0; // Pure virtual function 
    virtual std::string getnom()const;
    virtual  ~Animal();
};

class Mamifer:public Animal
{
    public:
    Mamifer(std::string);
    void exprimer() = 0;
    std::string getnom()const;
    ~Mamifer();
};

class Chat:public Mamifer
{
    public:
    Chat(std::string);
    ~Chat();
    void exprimer();
    std::string getnom()const;
};

class Souris: public Mamifer
{
    public:
    Souris(std::string);
    ~Souris();
    void exprimer();
    std::string getnom()const;
};


class Oiseau:public Animal
{
    public:
    Oiseau(std::string);
    ~Oiseau();
    void exprimer() = 0;
    std::string getnom()const;
};

class Canari:public Oiseau
{
    public:
    Canari(std::string);
    ~Canari();
    void exprimer();
    std::string getnom()const;
};


#endif // ANIMAL_HPP