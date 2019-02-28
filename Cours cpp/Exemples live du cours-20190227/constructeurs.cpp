//
//  main.cpp
//  Constructeurs
//
//  Created by Nicolas Sicard on 24/02/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#include <iostream>

using namespace std;

class Amphi {
    string  _nom;
    int     _nb_places;
public:
    Amphi(const string& nom, const int nb_places);
    ~Amphi();
    
    Amphi operator+(const Amphi& a);
    
    static unsigned int getCount() { return _count; }
    
private:
    static unsigned int _count;
};

Amphi::Amphi(const string& nom, const int nb_places)
{
    _nom = nom;
    _nb_places = nb_places;
    cout << "Nouvel Amphi " << _nom << " créé et initialisé " << endl;
    _count++;
}

Amphi Amphi::operator+(const Amphi& a)
{
    Amphi r(_nom + "-" + a._nom, _nb_places + a._nb_places);
    
    return r;
}

Amphi::~Amphi()
{
    cout << "Amphi " << _nom << " supprimé " << endl;
    _count--;
}

unsigned int Amphi::_count = 0;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Amphi!\n";
    Amphi a("Orange", 100);
    Amphi b("Grand amphi", 300);
    
    cout << Amphi::getCount() << " amphis dans le programme" << endl;
    
    Amphi *c = new Amphi("Jaune", 150);

    cout << Amphi::getCount() << " amphis dans le programme" << endl;
    
    Amphi s = a + b;

    delete c;
    cout << Amphi::getCount() << " amphis dans le programme" << endl;
    
    return 0;
}
