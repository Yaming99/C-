#ifndef D_H_INCLUDED
#define D_H_INCLUDED
#include <iostream>

using namespace std;

class D
{
    private :
        int * x;
    public :
        D();
        D(const D & other);
        ~D();
};

D::D()
{
    cout << "\nExo 11 :\n\nConstructeur par d" << char(0x82) << "faut" << endl;
    // A ACTIVER POUR VOIR LE BUG on demande à détruire une zone déjà détruite
    // x = new int [4];
}

D::D(const D & other)
{
    cout << "Constructeur de copie" << endl;
    x = new int [4];
    for (int i = 0; i < 4; i++)
        x[i] = other.x[i];
}

D::~D()
{
    cout << "Destructeur : " << this << endl;
    delete [] x;
}

#endif // D_H_INCLUDED
