#include <iostream>
#include <string>
#include "Etudiant.h"
using namespace std;


void addition (int &i)
{
    i++;
}

void salut (int age=18, string nom="Gerard")
{
    cout << "Je m'appelle " << nom << " et j'ai " << age << " ans." << endl;
}

int main()
{
    Etudiant Florian;

    //Florian.se_presenter();
    Florian.initialiser();
    Florian.se_presenter();
    Florian.boire();
    Florian.parler();
    Florian.etudier();
    Florian.etudier();
    Florian.etudier();
    Florian.etudier();
    Florian.etudier();
    Florian.parler();

    return 0;
}
