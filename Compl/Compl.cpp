#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{

    Complex* c1 = new Complex(3, 4);
    Complex* c2 = new Complex(2, 3);
    double a = 5.5;

    cout << "c1 = "; 
    c1->afficher();
    cout << "c2 = ";
    c2->afficher();

    // Operations
    cout << endl << "les operations:" << endl;

    Complex* c3 = new Complex(*c1 - *c2);
    cout << "c1 - c2  = ";
    c3->afficher();

    Complex c4 = *c3 - a;
    cout << "c3 - 5.5 = ";
    c4.afficher();

    Complex c5 = *c1 * *c2;
    cout << "c1 * c2  = ";
    c5.afficher();

    Complex c6 = *c1 / *c2;
    cout << "c1 / c2  = ";
    c6.afficher();

    Complex c7 = *c1 / 2;
    cout << "c1 / 2   = "; c7.afficher();

    //  Comparaisons 
    cout << endl << "Comparaisons (1 + 0i = vrai, 0 + 0i = faux) " << endl;

    cout << "c1 == c2 : "; (*c1 == *c2).afficher();
    cout << "c1 != c2 : "; (*c1 != *c2).afficher();
    cout << "c1 > c2  : "; (*c1 > *c2).afficher();
    cout << "c1 < c2  : "; (*c1 < *c2).afficher();

    // pour liberer la memoire
    delete c1;
    c1 = nullptr;
    delete c2;
    c2 = nullptr;
    delete c3;
    c3 = nullptr;


}



