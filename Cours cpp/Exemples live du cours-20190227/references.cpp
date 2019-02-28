//
//  main.cpp
//  References
//
//  Created by Nicolas Sicard on 09/02/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#include <iostream>
using namespace std;

void affiche(const int &a)
{
    //a = 8534563;
    cout << "a = " << a << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    int c = 5;
                    int& r = c;
    
    cout << "c = " << c << endl;
    
    affiche(r);

    cout << "c = " << c << endl;

    return 0;
}
