//
//  main.cpp
//  Polymorphisme
//
//  Created by Nicolas Sicard on 23/03/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#include <iostream>
using namespace std;

class Voiture {
    string      _marque;
    unsigned    _puissance;
public:
    Voiture(const string& marque, const unsigned puissance);
    ~Voiture();
    
    virtual void afficher() const; // méthode virtuelle
};

Voiture::Voiture(const string& marque, const unsigned puissance) : _marque(marque), _puissance(puissance) {}
Voiture::~Voiture() { cout << "Voiture à la casse !" << endl; }

void Voiture::afficher() const {
    cout << "Voiture de marque " << _marque << " et de puissance " << _puissance << endl;
}

class VoitureDeLocation : public Voiture {
    float   _prix;
    bool    _nettoyee;
public:
    VoitureDeLocation(const string& marque, const unsigned puissance, float prix, bool nettoyee);
    ~VoitureDeLocation();
    
    void nettoyerVoiture();
    void afficher() const;
};

VoitureDeLocation::VoitureDeLocation(const string& marque,
                                     const unsigned puissance,
                                     float prix,
                                     bool nettoyee) : Voiture(marque, puissance), _prix(prix), _nettoyee(nettoyee) {}
VoitureDeLocation::~VoitureDeLocation() { cout << "Voiture de loc à la casse !" << endl; }

void VoitureDeLocation::nettoyerVoiture() { _nettoyee = true; }

void VoitureDeLocation::afficher() const {
    Voiture::afficher();
    cout << "Prix de location : " << _prix << "€ / jour." << endl;
    cout << "Voiture " << ((_nettoyee)? "propre." : "sale.") << endl;
}

void AfficherVoiture(const Voiture v)
{
    v.afficher();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Voiture p("Porsche", 450);
    //p.afficher();
    VoitureDeLocation vdl("Ferrari", 500, 500, false);
    //vdl.afficher();

    Voiture *pv = &vdl;
    AfficherVoiture(vdl);
    //pv->afficher(); // si Voiture::afficher est virtuelle, va chercher la méthode de la classe dérivée, sinon de la classe Voiture
    
    return 0;
}
