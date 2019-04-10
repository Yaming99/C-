#include "Vegetable.h"

Vegetable::Vegetable(double poids_)
{
    poids = poids_;
}

Vegetable::~Vegetable()
{

}

double Vegetable::getPoids()const
{
    return poids;
}

ostream & operator<< (ostream & os, const Vegetable & v)
{
    os << "Vegetable: " << v.poids << " kg ";
    return os;
}
