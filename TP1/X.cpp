#include <iostream>
#include <Cassert>
#include "X.h"

using namespace std;

X::X()
    : util(0)
{
    cout << "Constructeur par d" << char(0x82) << "faut" << endl;
    initialise_tableau(10);
    util = 10;
}

// PROGRAMMATION DU CONTRUCTEUR DE COPIE copie membre à membre chaque instance possède son propre tableau

X::X(const X & x)
: util(x.util)
{
    cout << "Constructeur de copie" << endl;
    initialise_tableau(util);
}

X::~X()
{
    cout << "Destructeur" << endl;
}

ostream & operator<<(ostream & os, const X & x)
{
    for (int i = 0; i < x.util; i++)
        os << x.vals[i] << '\t';
    os << endl;
    return os;
}

long & X::valAt(int indice)
{
    assert(0 <= indice && indice <= 10);
    return vals[indice];
}

void X::initialise_tableau(int taille)
{
    for (int i = 0; i < taille; i++)
        valAt(i) = 2 * i + 3; // par exemple!
    util = taille;
}
