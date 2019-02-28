#ifndef IMAGEH
#define IMAGEH

#include <iostream>
#include "figure0.hpp"

class Image {

public:
    enum {IMAGE_MAX = 50};

	Image (const Point & a = Point(0,0)) { }

    ~Image() {}

    // ajout d' une figure a une image
	void ajouter(const Figure & f);

	virtual void deplacer(const Point & trans);
    virtual void dessiner() const;

	friend ostream & operator<< (ostream & os, const Image & image);

private:
   	Point origine;
	Figure * tableau[IMAGE_MAX];
	// nombre de figures dans une image
	int nombre;
};

#endif
