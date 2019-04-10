#include <iostream>
#include "Carrot.h"

using namespace std;

Carrot::Carrot(double poids_, int taille_):Vegetable(poids_),taille(taille_)
{
}


ostream & operator<< (ostream & os, const Carrot & c)
{
    os << "Carotte: [" << c.getPoids() << " kg - " << c.taille <<" cm]";
    return os;
}
