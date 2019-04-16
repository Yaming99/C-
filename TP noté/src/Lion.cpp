#include "Lion.h"

Lion::Lion(string name, double poids_):Animal(name, poids_)  // apelle le constructeur de la classe mere, list initialisation
{
    //ctor
}

Lion::~Lion()
{
    //dtor
}

Lion::Lion(const Lion& other)
{
    //copy ctor
}

void Lion::Crier()
{
    cout << "Je suis un lion et j'ai faim !!!!" << endl;
}

