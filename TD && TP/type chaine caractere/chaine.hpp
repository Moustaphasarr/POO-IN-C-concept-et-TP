#ifndef STR_HPP
#define STR_HPP

class str
{
    private:
        unsigned int m_longueur;
        char* m_chaine;
    public:
        str();
        str(const char*);
        str(const str&);
        ~str();
        str& operator=(str&);
        bool operator==(str&)const;// equivalent a strcmp
        str operator+(str&); // equivalent a strcat
        char& operator[](int i);
        void afficher();
        friend std::ostream& operator<<(std::ostream &sortie,str &S);// equivalent a cout<<S
        friend std::istream&  operator>>(std::istream &entre , str &); // equivalent a cin>>S
       bool operator>(str&)const;

};










#endif //STR_HPP