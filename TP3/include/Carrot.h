#ifndef CARROT_H
#define CARROT_H
#include <iostream>
#include "Vegetable.h"

using namespace std;

class Carrot : public Vegetable
{
    public:
        Carrot(double, int);
        friend ostream & operator<< (ostream & os, const Carrot & c);
    private:
        int taille;

};

#endif // CARROT_H
