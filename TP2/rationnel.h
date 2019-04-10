#ifndef RATIONNEL_H_INCLUDED
#define RATIONNEL_H_INCLUDED

#include <iostream>

using namespace std;

class Rationnel
{
    public:
        Rationnel(int num = 0, int den = 1);

        void simplifier();

        double operator()(int a, int b);
        operator double();

        friend Rationnel operator+(Rationnel & a, Rationnel & b);
        friend double operator*(Rationnel & a, double x);
        friend Rationnel & operator+=(Rationnel & a, Rationnel & b);
        friend ostream & operator<< (ostream & os, const Rationnel & r);

    private :
        int _num;
        int _den;
};

#endif // RATIONNEL_H_INCLUDED
