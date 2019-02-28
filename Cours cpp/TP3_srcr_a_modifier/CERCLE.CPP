#include "cercle.hpp"

// deplacement-translation de valeur le point trans
void Cercle::deplacer(const Point & p)
{

}

void Cercle::dessiner ( ) const
{
    cout << *this << endl;;
}

ostream & operator<< (ostream & os, const Cercle & cercle)
{
     return os;
}

