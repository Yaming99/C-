#include "Potatoe.h"

Potatoe::Potatoe(double poids_,int yeux_):Vegetable(poids_),yeux(yeux_)
{
    //ctor
}

Potatoe::Potatoe(double poids_):Vegetable(poids_),yeux(int(poids_*10))
{
    //ctor
}



ostream & operator<< (ostream & os, const Potatoe & c)
{
    os << "Patate: [" << c.getPoids() << " kg - " << c.yeux <<" yeux]";
    return os;
}

