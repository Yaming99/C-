#include <iostream>
#include "Personne.h"

using namespace std;

int Personne::nombre_personnes = 0;

// CONSTRUCTEUR PAR DEFAUT
// prenom et nom vides et age nul
// relation de composition par pointeur:
// la date de naissance est créee lors de la construction d'une personne
// MAIS ici on ne l'alloue pas
// le conjoint n'est pas crée lors de la construction d'une personne
// le nombre d'instances est incrémenté
Personne::Personne()
    : firstname(""), lastname(""), age(0), ddn(0), conjoint(0)
{
    cout << "Appel : Personne()" << endl;
    Personne::nombre_personnes++;
}

// CONSTRUCTEUR AVEC PARAMETRES SANS CEUX POUR LA DATE DE NAISSANCE
// la date de naissance est créee lors de la construction d'une personne
// MAIS ici on le crée pas
// le conjoint n'est pas crée lors de la construction d'une personne
// le nombre d'instances est incrémenté
Personne::Personne(const string & _firstname, const string & _lastname, int _age)
    : firstname(_firstname), lastname(_lastname), age(_age), ddn(0), conjoint(0)
{
    cout << "Appel : Personne(const string & firstname, const string & lastname, int age)" << endl;
    Personne::nombre_personnes++;
}

// CONSTRUCTEUR AVEC PARAMETRES DONT CEUX POUR LA DATE DE NAISSANCE
// la date de naissance est créee lors de la construction d'une personne
// le conjoint n'est pas crée lors de la construction d'une personne
// le nombre d'instances est incrémenté
Personne::Personne(const string & _firstname, const string & _lastname, int _age, int _jour, int _mois, int _annee)
    : firstname(_firstname), lastname(_lastname), age(_age), ddn(0), conjoint(0)
{
    cout << "Appel : Personne(const string & firstname, const string & lastname, int page)" << endl;
    ddn = new Date(_jour, _mois, _annee);
    Personne::nombre_personnes++;
}

// on décide de copier une personne sans recopier le conjoint!
Personne::Personne(const Personne & personne)
    : firstname(personne.firstname), lastname(personne.lastname), age(personne.age),
    ddn(personne.ddn), conjoint(0)
{
    cout << "Appel : COPY CTOR Personne(const Personne& personne)" << endl;
    Personne::nombre_personnes++;
}

// la date de naissance est détruite lors de la destruction d'une personne
// le conjoint n'est pas détruit lors de la destruction d'une personne
// le nombre d'instances est décrémenté
Personne::~Personne()
{
    cout << "Appel : destructeur ~Personne()" << endl;
    // la date de naissance est détruite lors de la destruction d'une personne
    delete ddn;
    // le conjoint n'est pas détruit lors de la destruction d'une personne
    // le nombres d'instances est décrémentée
    Personne::nombre_personnes--;
}

Personne& Personne::operator=(const Personne & personne)
{
    cout << "Appel : operator=(const Personne& personne)" << endl;

    // handle self assignment
    if (this == &personne)
        return *this;

    //assignment operator
    this->firstname = personne.firstname;
    this->lastname = personne.lastname;
    this->age = personne.age;
    this->ddn = personne.ddn;

    if (personne.conjoint != 0)
    {
        if (this->conjoint != 0)
            delete this->conjoint;
    }
    this->conjoint = 0;

    return *this;
}

istream & operator>>(istream & is, Personne & personne)
{
    cout << "firstname: ";
    is >> personne.firstname;
    cout << "lastname : ";
    is >> personne.lastname;
    cout << char(131) << "ge : ";
    is >> personne.age;
    cout << "Date de naissance : " << endl;
    if (personne.ddn == 0)
        personne.ddn = new Date();
    is >> *(personne.ddn);

    return is;
}

ostream & operator<<(ostream & os, const Personne & personne)
{
    os << '(' << personne.firstname << ',' << personne.lastname << ',' << personne.age;

    if (personne.ddn == 0)
        os << "";
    else
        os << ',' << *(personne.ddn);
    os << ')';
    return os;
}


void marier (Personne & a, Personne & b)
{
    a.setConjoint(b);
    b.setConjoint(a);
}
