//
//  Point.cpp
//  Surcharge
//
//  Created by Nicolas Sicard on 09/03/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//


#include "Point.h" 

Point::Point(const double x, const double y) {
    _x = x;
    _y = y;
}

Point& Point::operator+=(const Point& p) {
    this->_x += p._x;
    this->_y += p._y;
    return *this;
}

Point& Point::operator+=(const double s) {
    this->_x += s;
    this->_y += s;
    return *this;
}

/*Point Point::operator+(const Point& p) const {
 //    Point somme(this->_x+p._x, this->_y+p._y);
 //    return somme;
 cout << "somme de deux points" << endl;
 return Point(this->_x+p._x, this->_y+p._y);
 }*/

Point operator+(const Point& a, const Point& b)
{
    return Point(a._x+b._x, a._y+b._y);
}

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p._x << "," << p._y << ")";
    return os;
}

void Point::affiche() const {
    cout << "(" << _x << "," << _y << ")" << endl;
}
