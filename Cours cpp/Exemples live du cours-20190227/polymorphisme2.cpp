//
//  main.cpp
//  Polymorphisme 2
//
//  Created by Nicolas Sicard on 06/04/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;


class Forme {
    double  _x, _y;
    string  _nom;
public:
    Forme(const double x, const double y, const string& nom) : _x(x), _y(y), _nom(nom) {}

    virtual double  perimetre() const = 0;
    virtual double  surface() const = 0;
    
    virtual void    afficher() const {
        cout << "Forme : " << endl;
        cout << "\t origine : (" << _x << "," << _y << ")" << endl;
        cout << "\t nom : " << _nom << endl;
    }
};

class Cercle : public Forme {
    double  _r;
public:
    Cercle(const double x, const double y, const string& nom, const double r) : Forme(x, y, nom), _r(r) {}

    double  perimetre() const { return 2.0 * M_PI * _r; }
    double  surface() const { return M_PI * _r * _r; }

    void    afficher() const {
        Forme::afficher();
        cout << "\t rayon : " << _r << endl;
    }
};

class Carre : public Forme {
    double  _c;
public:
    Carre(const double x, const double y, const string& nom, const double c) : Forme(x, y, nom), _c(c) {}
    
    double  perimetre() const { return 4.0 * _c; }
    double  surface() const { return _c * _c; }
    
    void    afficher() const {
        Forme::afficher();
        cout << "\t côté : " << _c << endl;
    }
};

void AfficherForme(const Forme& f)
{
    f.afficher();
}

double SurfaceTotale(Forme *formes[])
{
    double surface = 0.0;
    for (unsigned int i = 0; i < 4; i++)
        surface += formes[i]->surface();
    return surface;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    //Forme f(2.0, 3.0, "Forme indéterminée");
    Cercle c(0.0, -1.0, "Cercle 1", 3.5);

    Forme *tab[4] = {NULL, NULL, NULL, NULL};
    tab[0] = new Carre(2.0, 4.7, "Carre 1", 125.0);
    tab[1] = new Cercle(-4.0, 3.1, "Cercle 2", 1.0);
    tab[2] = new Cercle(4.0, 13.1, "Cercle 3", 5.0);
    tab[3] = new Carre(-12.0, 5.1, "Carre 2", 15.0);

    cout << "Surface totale = " << SurfaceTotale(tab) << endl;
    
    return 0;
}
