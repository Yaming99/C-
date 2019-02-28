#ifndef CERCLEH
#define CERCLEH

#include <iostream>
#include "figure0.hpp"

class Cercle {

public:
	Cercle(const Point & a, int r)
    { }

    ~Cercle() {}

    // deplacement-translation de valeur le point trans
	virtual void deplacer(const Point & trans);
	virtual void dessiner() const;
    virtual string type_of() const { return "Cercle"; }

	friend ostream & operator<< (ostream & os, const Cercle & cercle);

private:
	Point centre;
	int rayon;
};

#endif
