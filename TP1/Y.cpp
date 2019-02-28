#include <iostream>
#include <Cassert>
#include "Y.h"

using namespace std;

Y::Y(long size)
{
    cout << "Constructeur avec une valeur par défaut" << endl;

    if (size > 0)
    {
        tmax = size;
        vals = new double[tmax];
        initialise_tableau(size);
        tutil = size;
    }
    else
    {
        tmax = 0;
        tutil = 0;
        vals = 0;
    }
}


/**
 * PROGRAMMATION DU CONTRUCTEUR DE COPIE : INDISPENSABLE avec un pointeur en attribut
 * copie membre à membre pour tutil et tmax
 * données pointées réallouées : par de partage
 * chaque instance possède son propre tableau
 */
Y::Y(const Y & y)
    : tutil(y.tutil), tmax(y.tmax)
{
    cout << "Constructeur de copie" << endl;
    vals = new double[tmax];
    for(int i = 0; i < y.tutil; i++)
        vals[i] = y.vals[i];
}

Y::~Y()
{
    cout << "Destructeur" << endl;
    delete [] vals;
}

ostream & operator<<(ostream & os, const Y & y)
{
    for (int i = 0; i < y.tutil; i++)
        os << y.vals[i] << '\t';
    os << endl;
    return os;
}

double & Y::valAt(int indice)
{
    assert(0 <= indice && indice <= tutil);
    return vals[indice];
}

void Y::initialise_tableau(int taille)
{
    for (int i = 0; i < taille; i++)
        valAt(i) = 2.6 * i + 3.4; // par exemple!
}
