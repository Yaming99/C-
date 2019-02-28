#ifndef X_H_INCLUDED
#define X_H_INCLUDED
#include <iostream>

using namespace std;

class X
{
    private :
        long vals[10];
        long util;
    public :
        X();
        // CTOR COPY : A COMMENTER à des fins de comparaisons
        X(const X &);
        ~X();
        long & valAt(int indice);
        void initialise_tableau(int taille);

        friend ostream & operator<<(ostream &, const X &);
};

#endif // X_H_INCLUDED
