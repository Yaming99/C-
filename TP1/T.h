#ifndef T_H_INCLUDED
#define T_H_INCLUDED
#include <iostream>
#include <Cassert>

using namespace std;

class O
{
    private :
        char _dummy;
    public :
        O()
        {
            cout << "O::O()  \t" << this << endl;
        }
        ~O()
        {
            cout << "O::~O() \t" << this << endl;
        }
        O(const O &)
        {
            cout << "O(const O&) \t" << this << endl;
        }
        // pas de pointeur ==> pas de surcharge de O & operator=(const 0 & rhs);
        // code de cet opérateur généré automatiquement par le compilateur C++
};

class T
{
    private:
        long p, q;
        O ** tab2d;
        // p lignes, q colonnes
    public :
        T(long l = 5, long c = 5);
        ~T();
        T(const T &);
        T & operator=(const T & rhs);
};

T::T(long l, long c)
    : p(l), q(c), tab2d(0)
{
    cout << "\nT::T(long l, long c) \t" << this << endl;
    tab2d = new O * [p];
    cout << "new tab2d = \t" << tab2d << endl;
    assert(tab2d);

    for (long i = 0; i < p;  i++)
    {
        tab2d[i] = new O [q];
        assert(tab2d[i]);
    }
}

T::T(const T & t)
    : p(t.p), q(t.q), tab2d(0)
{
    cout << "\nT::T(const T &) \t" << this << endl;
    tab2d = new O * [p];
    cout << "new tab2d = \t" << tab2d << endl;
    assert(tab2d);

    for (long i = 0; i < p;  i++)
    {
        tab2d[i] = new O [q];
    }

    for (long i = 0; i < p; i++)
    {
        for (long j = 0; j < q; j++)
        {
            // appel de O & operator=(const 0 & rhs);
            tab2d[i][j] = t.tab2d[i][j];
        }
    }
}

T::~T()
{
    cout << "T::~T() \t" << this << endl;

    if(tab2d == 0)
        return;

    for (long i = 0; i < p;  i++)
    {
        if (tab2d[i] != 0)
        {
            delete [] tab2d[i];
        }
    }
    cout << "delete tab2d = \t" << tab2d << endl << endl;
    delete [] tab2d;
}

T & T::operator=(const T & rhs)
{
    cout << "T & T::operator = (const T & rhs) " << this <<" = " << &rhs << endl;
    // VERIFICATION si les objets sont de même dimension
    assert((p == rhs.p) && (q == rhs.q));
    // INUTILE DE LIBERER LA MEMOIRE DE L'INSTANCE COURANTE
    // MEMES ZONES REUTILISEES CAR LES ANCIENNES VALEURS SONT REMPLACEES
    if (this == &rhs)
       return *this;

    for (long i = 0; i < p; i++)
    {
        for (long j = 0; j < q; j++)
        {
             // appel de O & operator=(const 0 & rhs);
             tab2d[i][j] = rhs.tab2d[i][j];
        }
    }
    return *this;
}

#endif // T_H_INCLUDED
