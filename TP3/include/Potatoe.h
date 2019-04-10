#ifndef POTATOE_H
#define POTATOE_H
#include <iostream>
#include "Vegetable.h"

using namespace std;

class Potatoe : public Vegetable
{
    friend class Vegetable;
    public:
        Potatoe(double,int);
        Potatoe(double);
        friend ostream & operator<< (ostream & os, const Potatoe & c);
    protected:
    private:
        int yeux;
};

#endif // POTATOE_H
