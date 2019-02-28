#ifndef FIGUREH
#define FIGUREH

#include "Point.hpp"

using namespace std;

// classe abstraite de base
class Figure {

public:
    virtual ~Figure() { };

	virtual void deplacer ( const Point & trans ) = 0;
	virtual void dessiner ( ) const = 0;

	bool operator== (const Figure & f) const
	{
	    return (this == &f);
    }
};

#endif
