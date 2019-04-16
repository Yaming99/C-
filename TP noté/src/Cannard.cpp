#include "Cannard.h"

Cannard::Cannard(string name, double poids_,string couleur_):Animal(name, poids_),couleur(couleur_)  // apelle le constructeur de la classe mere, list initialisation
{
    //ctor
}

Cannard::~Cannard()
{
    //dtor
}

Cannard::Cannard(const Cannard& other)
{
    //copy ctor
}

void Cannard::getcouleur()
{
    cout << "La couleur des plumes du canard est : " << couleur << endl;
}

void Cannard::Crier()
{
    cout << "COIN COIN COIN!!!!" << endl;
}
