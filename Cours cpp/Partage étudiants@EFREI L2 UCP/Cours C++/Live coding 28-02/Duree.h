#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

class Duree
{
private :
    int h;
    int m;
    int s;

public :
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    void afficherDuree();
    friend Duree operator+(const Duree& a, const Duree& b);
};


#endif // DUREE_H_INCLUDED
