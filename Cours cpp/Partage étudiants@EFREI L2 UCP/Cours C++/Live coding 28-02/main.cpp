#include <iostream>
#include <string>
#include "Etudiant.h"
#include "Duree.h"
using namespace std;

Duree operator+(const Duree& a, const Duree& b)
{
    Duree resultat;
    resultat.s = a.s + b.s;
    resultat.m = a.m + b.m + (resultat.s)/60;
    resultat.s = resultat.s%60;
    resultat.h = a.h + b.h + (resultat.m)/60;

    resultat.m = resultat.m%60;

    return resultat;

}

int main()
{
    Etudiant Mike, Bob;
    Mike.initialiser("Mike");
    Mike.se_presenter();
    Bob.se_presenter();

    Duree duree1(1,59,59);
    Duree duree2(3,4,3);

    duree1.afficherDuree();
    duree2.afficherDuree();

    duree1 = duree1+duree2;

    duree1.afficherDuree();

    return 0;
}
