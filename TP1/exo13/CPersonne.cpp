#include <iostream>
#include <cstring>
#include "CPersonne.h"

using namespace std;

CPersonne::CPersonne(const char * _name, int _jour, int _mois, int _annee)
    : name(0), dateNaissance(0)
{
    cout << "Appel : CPersonne(const char * _nom, int _jour, int _mois, int _annee)" << endl;
    name = new char [strlen(_name) + 1];
    strcpy(name, _name);
    dateNaissance = new CDate(_jour, _mois, _annee);
}

// on décide de copier une personne sans recopier le conjoint!
CPersonne::CPersonne(const CPersonne & personne)
    : name(0), dateNaissance(0)
{
    cout << "Appel : COPY CTOR CPersonne(const CPersonne& personne)" << endl;
    name = new char [strlen(personne.name) + 1];
    strcpy(name, personne.name);
    dateNaissance = new CDate(*(personne.dateNaissance));
}

// la date de naissance est détruite lors de la destruction d'une personne
CPersonne::~CPersonne()
{
    cout << "Appel : destructeur ~CPersonne()" << endl;
    // la date de naissance est détruite lors de la destruction d'une personne
    delete dateNaissance;
}

CPersonne& CPersonne::operator=(const CPersonne & personne)
{
    cout << "Appel : operator=(const CPersonne& personne)" << endl;
    // handle self assignment
    if (this == &personne)
        return *this;
    //assignment operator
    name = new char [strlen(personne.name) + 1];
    strcpy(name, personne.name);
    this->age = personne.age;
    this->dateNaissance = new CDate(*(personne.dateNaissance));
    return *this;
}

istream & operator>>(istream & is, CPersonne & personne)
{
    cout << "Nom : ";
    is >> personne.name;
    cout << char(131) << "ge : ";
    is >> personne.age;
    cout << "Date de naissance : " << endl;
    if (personne.dateNaissance == 0)
        personne.dateNaissance = new CDate();
    is >> *(personne.dateNaissance);
    return is;
}

ostream & operator<<(ostream & os, const CPersonne & personne)
{
    os << '(' << personne.name << ',' << personne.age;
    if (personne.dateNaissance == 0)
        os << "";
    else
        os << ',' << *(personne.dateNaissance);
    os << ')';
    return os;
}
