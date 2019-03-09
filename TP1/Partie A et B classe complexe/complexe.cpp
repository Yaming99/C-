#include <iostream>
#include "complexe.h"
#include "math.h"
#include <complex>

using namespace std;


//complexe::complexe() {}
complexe::~complexe()
{
    cout<< "je suis dans le destructeur par defaut"<<endl;
}


complexe::complexe(double a, double b)
{
    cout<< "\nje suis dans le constructeur par defaut"<<endl;
    re = a;
    im = b;
    cout<< "\n Le reel de a est : "<<re<<endl;
    cout<< "\n Le img de a est : "<<im<<endl;
}

complexe::complexe(const complexe& p)
{
    cout<< "\n je suis dans la copie : "<<endl;
    re = p.re;
    im = p.im;
    cout<< "\n Le reel de a est : "<<re<<endl;
    cout<< "\n Le img de a est : "<<im<<endl;
}

double complexe::get_im()
{
    return im;
}

double complexe::get_re()
{
    return re;
}

void complexe::set_im(double x)
{
    im = x;
}

void complexe::set_re(double y)
{
    re = y;
}

void complexe::print()
{

        cout <<"La valeur est "<< re <<" +i "<< im<<endl;
}

void complexe::init(double a, double b)
{
    re = a;
    im = b;
}

complexe complexe::addition(complexe a)
{
    complexe c;
    c.re = a.re + re;
    c.im = a.im + im;
    cout << "ADDITION : "<< c.re << "+i" << c.im << endl;
    return c;
}

complexe complexe::multiplication(complexe a)
{
    complexe c;
    cout << "Complexe a : " << re << "+i" << im << endl;
    c.re = a.re * re - a.im * im;
    c.im = a.re * im + re * a.im;
    cout << "MULTIPLICATION : "<< c.re << "+i" << c.im << endl;
    return c;
}

void complexe::conjugue(complexe a)
{
    cout << "Complexe a : " << a.re << "+i" << a.im << endl;
    a.im *= -1;
    cout << "Conjugu" << char(0x82) << " : " << a.re << a.im << "i" << endl;
}

double complexe::module()
{
    cout << "Module de a : " << sqrt(re*re + im*im) << endl;
    return (sqrt(re*re+im*im));
}

double complexe::argument()
{
    return (atan(im/re));
}
