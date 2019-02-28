//
//  Point.h
//  Surcharge
//
//  Created by Nicolas Sicard on 09/03/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#ifndef Point_h
#define Point_h

#include <iostream>
using namespace std;

class Point {
    double _x, _y;
public:
    Point(const double x=0.0, const double y=0.0);
    
    Point& operator+=(const Point& p);
    Point& operator+=(const double s);
    //    Point operator+(const Point& p) const ;
    friend Point operator+(const Point& a, const Point& b);
    friend ostream& operator<<(ostream& os, const Point& p);
    
    void affiche() const;
};



#endif /* Point_h */
