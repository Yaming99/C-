#include "Tigre.h"

Tigre::Tigre(string name, double poids_,int b ):Animal(name, poids_),nbRayures(b)  // apelle le constructeur de la classe mere, list initialisation
{

}


Tigre::~Tigre()
{
    //dtor
}

Tigre::Tigre(const Tigre& other)
{
    //copy ctor
}

void Tigre::getnbRayures()
{
    cout << "Le nombre de rayures : " << nbRayures << endl;
}

void Tigre::Crier()
{
    cout << "Grr.. je suis un mechant tigre !!!"<< endl;
}
