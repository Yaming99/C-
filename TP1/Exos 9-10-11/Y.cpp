#include <iostream>
#include <assert.h>
#include "Y.h"

using namespace std;

Y::Y(long size)
{
    cout << "Constructeur avec une valeur par défaut" << endl;

    if (size > 0)
    {
        tmax = size;
        vals = new double[tmax];// tableau alloué dynamiquement
        
        for (int i = 0; i < size; i++)
			valAt(i) = 1; // par exemple!
        tutil = size;
    }
    else
    {
        tmax = 0;
        tutil = 0;
        vals = 0; // pointeur nul (en C NULL/ en C++ 0)
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
    cout << "Constructeur de copie profonde" << endl;
    vals = new double[tmax];
    
    for(int i = 0; i < y.tutil; i++)
        vals[i] = y.vals[i];
}


Y::~Y()
{
    cout << "Destructeur" << endl;
    delete [] vals;
}

void Y::print() const
{
    for (int i = 0; i < tutil; i++)
        cout << vals[i] << '\t';
    cout << endl;
}

double & Y::valAt(int indice)
{
    assert(0 <= indice);
    assert(indice <= 10);
    return vals[indice];
}




