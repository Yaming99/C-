#include <iostream>
#include <ctime>
#include "CDate.h"

using namespace std;

// initialisation de la date du jour
CDate CDate::today = CDate();

// constructeur pour la date du jour
CDate::CDate()
    : jour(0), mois(0), annee(0)
{
    cout << "Exo 13 et 14 :\n\nAppel pour la date du jour : Date()" << endl;
    struct tm * ptr;
    time_t sec;
    time(&sec);
    ptr = localtime(&sec);
    jour = ptr->tm_mday;
    mois = ptr->tm_mon + 1;
    annee = ptr->tm_year + 1900;
}

CDate::CDate(int _jour, int _mois, int _annee)
    : jour(_jour), mois(_mois), annee(_annee)
{
    cout << "Appel : Date(int _jour, int _mois, int _annee)" << endl;
}

CDate::CDate(const CDate& date)
    : jour(date.jour), mois(date.mois), annee(date.annee)
{
    cout << "Appel : COPY CTOR Date(const Date& date)" << endl;
}

CDate::~CDate()
{
    cout << "Appel : destructeur ~Date()" << endl;
}

CDate & CDate::operator=(const CDate & date)
{
    cout << "Appel : operator = (const Date& date)" << endl;
    // handle self assignment
    if (this == &date)
        return *this;
    //assignment operator
    this->jour = date.jour;
    this->mois = date.mois;
    this->annee = date.annee;
    return *this;
}

istream & operator>>(istream & is, CDate & date)
{
    cout << "Jour: ";
    is >> date.jour;
    cout << "Mois : ";
    is >> date.mois;
    cout << "Ann" << char(0x82) << "e : ";
    is >> date.annee;
    return is;
}

ostream & operator<<(ostream & os, const CDate & date)
{
    os << '(' << date.jour << ',' << date.mois << ',' << date.annee << ')';
    return os;
}
