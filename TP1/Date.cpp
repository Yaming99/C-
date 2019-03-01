#include <iostream>
#include <ctime>
#include "Date.h"

using namespace std;

// initialisation de la date du jour
Date Date::today = Date();

// constructeur pour la date du jour
Date::Date()
    : jour(0), mois(0), annee(0)
{
    cout << "Appel pour la date du jour : Date()" << endl;
    struct tm * ptr;
    time_t sec;
    time(&sec);
    ptr = localtime(&sec);

    jour = ptr->tm_mday;
    mois = ptr->tm_mon + 1;
    annee = ptr->tm_year + 1900;
}

Date::Date(int _jour, int _mois, int _annee)
    : jour(_jour), mois(_mois), annee(_annee)
{
    cout << "Appel : Date(int _jour, int _mois, int _annee)" << endl;
}

Date::Date(const Date& date)
    : jour(date.jour), mois(date.mois), annee(date.annee)
{
    cout << "Appel : COPY CTOR Date(const Date& date)" << endl;
}

Date::~Date()
{
    cout << "Appel : destructeur ~Date()" << endl;
}

Date& Date::operator=(const Date& date)
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

istream & operator>>(istream & is, Date & date)
{
    cout << "jour: ";
    is >> date.jour;
    cout << "mois : ";
    is >> date.mois;
    cout << "ann" << char(0x82) << "e : ";
    is >> date.annee;

    return is;
}

ostream & operator<<(ostream & os, const Date & date)
{
    os << '(' << date.jour << ',' << date.mois << ',' << date.annee << ')';
    return os;
}
