#include "Carre.h"
#include <iostream>

using namespace std;

void Carre::afficher(void) const
{
    cout << "Je suis un carre" << endl;
}

Carre::~Carre()
{
    cout << "Un carre a ete detruite" << endl;
}
