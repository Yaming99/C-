#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

#include <iostream>

class Duree
{
public:
    Duree(int seconde = 0, int minute = 0, int heure = 0);
    void afficher();
    friend Duree operator+(const Duree& Duree1, const Duree& Duree2);
private:
    int m_heure;
    int m_minute;
    int m_seconde;
};


#endif // DUREE_H_INCLUDED
