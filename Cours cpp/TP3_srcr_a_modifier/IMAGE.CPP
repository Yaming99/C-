#include <stdio.h>

#include "image.hpp"
#include "ligne.hpp"
#include "cercle.hpp"


// ajout d' une figure a une image
void Image::ajouter( const Figure & f)
{

}

void Image::deplacer(const Point & p)
{

}

void Image::dessiner ( ) const
{
    cout << *this << endl;
}

ostream & operator<< (ostream & os, const Image & image)
{
    return os;
}
