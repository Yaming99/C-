//
//  main.cpp
//  L2-1
//
//  Created by Nicolas Sicard on 08/02/2017.
//  Copyright © 2017 Efrei. All rights reserved.
//

#include <iostream>
using namespace std;

class Montre {
    int heures, minutes, secondes;
public:
    Montre(int h, int m, int s);
    
    void setHeures(int h); //setter - mutateur
    void setMinutes(int m);
    void setSecondes(int s);
    void afficher() const;
};

Montre::Montre(int h, int m, int s) {
    heures = h;
    minutes = m;
    secondes = s;
}

void Montre::afficher() const {
    cout << heures << "h " << minutes << "m " << secondes << "s" << endl;
}

void Montre::setHeures(int h) { heures = h; }
void Montre::setMinutes(int m) { minutes = m; }
void Montre::setSecondes(int s) { secondes = s; }

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Watch!\n";
    
    Montre maMontre(13, 32, 3);
//    maMontre.setHeures(13);
//    maMontre.setMinutes(32);
//    maMontre.setSecondes(3);
    
    maMontre.afficher();
    
    const Montre ma2emeMontre(18, 7, 45);
    
    ma2emeMontre.afficher();
    
    return 0;
}
