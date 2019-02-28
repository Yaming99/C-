#ifndef LIGNEH
#define LIGNEH

#include <iostream>
#include "figure0.hpp"

class Ligne {

public:
	Ligne(const Point & a, const Point & b)
    { }

    ~Ligne() {}

    // deplacement-translation de valeur le point trans
	virtual void deplacer(const Point & trans);
	virtual void dessiner() const;

    friend ostream & operator<< (ostream & os, const Ligne & ligne);

private:
	Point origine;
	Point extremite;
};

#endif

