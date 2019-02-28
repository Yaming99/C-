//
//  main.cpp
//  C++ Séance 1
//
//  Created by Nicolas Sicard on 17/10/2016.
//  Copyright © 2016 Efrei. All rights reserved.
//

#include <iostream>
using namespace std;

class Espece {
private:
    // attributs : ils ne sont pas accessibles en dehors de cette classe
    string  _nom;
    bool    _vertebre;
    
public:
    Espece(const string& nom, bool vertebre); // constructeur
    Espece(const Espece& e); // constructeur de copie
    ~Espece(); // destructeur
    
public:
    string  getNom() const;
    bool    getVertebre() const;
    
    void    setVertebre(bool vertebre); // mutateur
    
    // méthode de classe
    static  unsigned int getCompteur();
    
private:
    // attribut de classe
    static unsigned int _compteur;
};

// déclaration de l'attribut de classe (pour allocation mémoire et initialisation)
unsigned int Espece::_compteur = 0;

// définition des méthodes
unsigned int Espece::getCompteur() {
    return _compteur;
}

// définition des constructeurs et du destructeur
Espece::Espece(const string& nom, bool vertebre) : _nom(nom), _vertebre(vertebre) {
    Espece::_compteur += 1;
    cout << "Espece " << _nom << " créée." << endl;
}

Espece::Espece(const Espece& e) : _nom(e._nom), _vertebre(e._vertebre) {
    cout << "Espece " << _nom << " copiée." << endl;
}

Espece::~Espece() {
    Espece::_compteur -= 1;
    cout << "Espece " << _nom << " disparue." << endl;
}

// définition des accesseurs et mutateurs
void Espece::setVertebre(bool vertebre) {
    _vertebre = vertebre;
}

string Espece::getNom() const {
    return _nom;
}

bool Espece::getVertebre() const {
    return _vertebre;
}

// une fonction indépendante (non liée à une classe)
void afficherEspece(const Espece& e) {
    cout << "Espece : " << endl << "\tNom : " << e.getNom() << endl << "\tVertebre : " << ((e.getVertebre())? "OUI" : "NON") << endl;
}

// programme principal
int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << "Hello, World!\n";
    cout << "Il y a " << Espece::getCompteur() << " espèce(s) sur ma planète." << endl;

    Espece  esp("Chien", true);
    
    cout << "Il y a " << Espece::getCompteur() << " espèce(s) sur ma planète." << endl;
 
    return 0;
}
