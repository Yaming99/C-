#include <iostream>
#include "complex.h"

using namespace std;

complex::complex(double p_re, double p_im)
    : re(p_re), im(p_im)
{
    cout << "Constructeur avec 2 valeurs par défaut" << endl;
}

complex::~complex()
{
    cout << "Destructeur" << endl;
}

complex::complex(const complex & other)
    :re(other.re), im(other.im)
{
    cout << "Constructeur de copie" << endl;
}
