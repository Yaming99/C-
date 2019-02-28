#include "ligne.hpp"

// deplacement-translation de valeur le point trans
void Ligne::deplacer(const Point & p)
{

}

// dessin d' une ligne de son origine a son extremite
void Ligne::dessiner() const
{
	cout << *this << endl;;
}

ostream & operator<< (ostream & os, const Ligne & ligne)
{
    return os;
}

