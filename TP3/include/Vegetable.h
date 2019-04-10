#ifndef VEGETABLE_H
#define VEGETABLE_H
#include <iostream>

using namespace std;

class Vegetable
{
    public:
        Vegetable(double);
         virtual ~Vegetable();
        double getPoids()const;
        friend ostream & operator<< (ostream & os, const Vegetable & v);
    protected:
        double poids;
    private:

};

#endif // VEGETABLE_H
