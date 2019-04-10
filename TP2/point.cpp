#include "point.h"
#include <cmath>

Point::Point(int a, int b)
    : x(a), y(b)
{
	if (a == 0 && b == 0)
		cout << "constructeur par d"<< char(0x82)<<"faut" << endl;
    if (b == 0)
        cout << "constructeur de conversion" << endl;
}

Point::~Point()
{

}

Point::Point(const Point& other)
    : x(other.x), y(other.y)
{

}

Point & Point::operator=(const Point& rhs)
{
    if (this == &rhs)
        return *this; // handle self assignment p.operator(p)

    //assignment operator p2.operator(p1)
    this->x = rhs.x;
    this->y = rhs.y;

    return *this; // p2
}


Point Point::operator+ (const Point & p) const
{
    /*
    Point somme;

    somme.x = this->x + p.x;
    somme.y = this->y + p.y;

    return somme;
    */

    return Point(this->x + p.x, this->y + p.y );
}

Point operator+ (int x, const Point & p)
{
    return Point(x + p.x, p.y );
}

Point operator+ (const Point & p, int x)
{
    return Point(p.x + x, p.y );
}

Point & Point::operator+= (const Point & p)
{
/*
    Point somme;
    somme = *this + p;

    *this = somme;
    return *this;
*/
/*
     *this = *this + p;
      return *this;
*/
/*
    return (*this = *this + p);
*/
    this->x += p.x;
    this->y += p.y;
    return *this;
}

/*
SI FRIEND
ostream & operator<< (ostream & os, const Point & p)
{
    os << "(" << p.x << "," << p.y <<")";
    return os;
}
*/

// FONCTION EXTERNE

ostream & operator<< (ostream & os, const Point & p)
{
    os << "[" << p.Getx() << "," << p.Gety() <<"]";
    return os;
}




double Point::distance(const Point & p) const {
    return sqrt((p.x - x) * (p.x - x) + (p.y - y) * (p.y - y));
}


double distance_bis(const Point & p1, const Point & p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
