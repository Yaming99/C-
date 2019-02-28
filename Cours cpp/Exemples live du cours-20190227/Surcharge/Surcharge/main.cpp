//
//  main.cpp
//  Surcharge
//
//  Created by Nicolas Sicard on 09/03/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#include <iostream>
using namespace std;

//#include "Point.h"
#include "PointColore.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Point!\n";
    
    //PointColore pc(2.0, -1.6);
    //pc.affiche();
    
    Point p(-4.0, 6.0), q(4.5, 9.2), r;
    cout << p << endl;
    cout << q << endl;
    cout << r << endl;
    
    (p += q) += r;
    p += 3.0;
    
    r = p + q;
    
    cout << p << endl;
    cout << r << endl;
    
    return 0;
}
