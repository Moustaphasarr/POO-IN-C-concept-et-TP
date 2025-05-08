#include<iostream>
#include "complexe.hpp"

using namespace std;
int main()
{
    complexe c1(3, 4);
    complexe c2(1, 2);
    complexe c3 = c1.multiplier(c2);
    cout << "c1: ";
    c1.afficher();
    cout << "c2: ";
    c2.afficher();
    cout << "c3 (c1 * c2): ";
    c3.afficher();
    
    complexe c4;
    c4.ajouter(c1);
    cout << "c4 (c4 + c1): ";
    c4.afficher();
    complexe c5 = c1 + c2+c4;
    complexe c6 = c1 * c2;
    cout << "c5 (c1 + c2): ";
    c5.afficher();
    cout << "c6 (c1 * c2): ";
    c6.afficher();
    cout<<c1<<c2<<c3<<c4<<c5<<c6<<endl;
    return 0;
}