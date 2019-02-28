//
//  PointColore.hpp
//  Surcharge
//
//  Created by Nicolas Sicard on 09/03/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#ifndef PointColore_hpp
#define PointColore_hpp

#include <stdio.h>
#include "Point.h"

class PointColore : public Point {
    string _color;
public:
    PointColore(const string& color="blanc", const double x=0.0, const double y=0.0);
};

#endif /* PointColore_hpp */
