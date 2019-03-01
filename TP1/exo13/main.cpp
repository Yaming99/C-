#include <iostream>
#include "CPersonne.h"

using namespace std;

// fonction externe
void appelParValeur(CPersonne p)
{
  cout << "Appel par valeur" << endl;
}

// fonction externe
void appelParReference(const CPersonne & p)
{
    cout << "Appel par reference" << endl;
}

int main()
{
    // Philippe Durant est né le 10/01/1979
    CPersonne phil("Philippe Durant", 10, 1, 1979 );
    // récupère le nom de M. Durant
    const char * nom = phil.getName();
    cout << "Nom = " << nom << endl;
    // récupère la date de naissance
    const CDate & date = phil.getDate();
    cout << "Date = " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;
    appelParValeur(phil);
    appelParReference(phil);
    return 0;
}

