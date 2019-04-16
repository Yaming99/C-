#include "Animal.h"


using namespace std;

int Animal::nbInst = 0; // initialiser le nombre d'animaux � z�ro, la premi�re fois qu'on execute le code

Animal::Animal() // incr�mente le nombre d'objets pr�sents dans la m�moire
{
    Animal::nbInst++;
}

Animal::Animal(string nouveau_nom, double nouveau_poids):nom(nouveau_nom),poids(nouveau_poids)
{
    Animal::nbInst++;
    //ctor
}

void Animal::getnbInst()
{
    cout << "Le nombre d'objets dans la classe Animal est : " << Animal::nbInst << endl;
}

Animal::~Animal()
{
    //dtor
}

Animal::Animal(const Animal& other)
{
    //copy ctor
}

double Animal::getpoids()
{
    return poids;
}

string Animal::getnom()
{
    return nom;
}

void Animal::setpoids(double val)
{
    poids = val;
}

void Animal::setnom(string nouveau_nom)
{
    nom = nouveau_nom;
}

ostream & operator<< (ostream & os, const Animal & c) // permet d'afficher nom et poids de l'animal
{
    os << "Nom de l'animal : " << c.nom << endl;
    os << "Poids de l'animal : " << c.poids << " kg " << endl;
    return os;
}

istream & operator>> (istream & in, Animal & c) // l'utilisateur �crit depuis la console
{
    cout << "Veuillez entrer le nom : ";
    in >> c.nom;
    return in;
}

void Animal::Crier()
{
    cout << "Grrr.." << endl;
}
