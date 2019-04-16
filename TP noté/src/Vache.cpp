#include "Vache.h"

Vache::Vache(string name, double poids_,int tache):Animal(name, poids_),nbTache(tache)  // apelle le constructeur de la classe mere, list initialisation
{
    //ctor
}

Vache::~Vache()
{
    //dtor
}

Vache::Vache(const Vache& other)
{
    //copy ctor
}

void Vache::getTache()
{
    cout << "Le nombre de taches de la vache est : " << nbTache << endl;

}

void Vache::Crier()
{
    cout << "MEUUUUHHH !!!!" << endl;
}
