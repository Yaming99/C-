#include <iostream>
#include <Cassert>
#include "X.h"

using namespace std;

X::X()
    : util(0)
{
    cout << "Constructeur par défaut" << endl;
    for (int i = 0; i < 10; i++)
    {
			vals[i] = 0;
    }
    
    util = 10;
}

/**
 * PROGRAMMATION DU CONTRUCTEUR DE COPIE
 * copie membre à membre
 * chaque instance possède son propre tableau
 */
 /*
X::X(const X & x)
	: util(x.util)
{
	 cout << "Constructeur de copie" << endl;
	  
	for (int i = 0; i < 10; i++)
    {
			// vals[i] = x.vals[i];
			this->vals[i] = x.vals[i];
    }
}
*/

X::~X()
{
    cout << "Destructeur" << endl;
}

void X::print() const
{
    for (int i = 0; i < x.util; i++)
        cout << x.vals[i] << '\t';
    cout << endl;
}

long & X::valAt(int indice)
{
    assert(0 <= indice);
    assert(indice <= 10);
    
    return vals[indice];
}


