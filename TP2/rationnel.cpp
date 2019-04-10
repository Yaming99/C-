#include "rationnel.h"

extern int pgcd(int a, int b);

int pgcd(int a, int b)
{
    return ((!b) ? a : pgcd(b, a%b));
}

Rationnel::Rationnel(int num, int den)
    : _num(num), _den(den)
{

}

void Rationnel::simplifier()
{
    int p = pgcd( (_num > 0) ? _num : -_num, _den);
    _num /= p;
    _den /= p;
}

double Rationnel::operator()(int a, int b)
{
    return double(a)/(double)b;
}

Rationnel::operator double()
{
    return double(_num)/(double)_den;
}

Rationnel operator+(Rationnel & a, Rationnel & b)
{
    Rationnel somme;
    a.simplifier();
    b.simplifier();

    somme._num = a._num * b._den + a._den * b._num;
    somme._den =  a._den * b._den;
    somme.simplifier();

    return somme;
}

double operator*(Rationnel & a, double x)
{
     a.simplifier();
     return (a._num * x) / a._den;
}

Rationnel & operator+=(Rationnel & a, Rationnel & b)
{
    a = a + b;
    return a;
}

ostream & operator<< (ostream & os, const Rationnel & r)
{
    if (r._den == 1)
        os << r._num;
    else
        os << r._num << '/' << r._den;
    return os;
}
