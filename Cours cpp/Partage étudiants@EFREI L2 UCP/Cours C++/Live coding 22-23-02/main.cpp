#include <iostream>
#include <string>
#include "Etudiant.h"
#include "Duree.h"
using namespace std;

Duree operator+(const Duree& Duree1, const Duree& Duree2);

int main()
{

    Duree test1(1,2,3) , test2(0,59,2);

    test1.afficher();
    test2.afficher();

    test1 = test1 + test2;
    test1.afficher();

    return 0;
}

Duree operator+(const Duree& Duree1, const Duree& Duree2)
{
    Duree DureeReturn;
    DureeReturn.m_seconde = (Duree1.m_seconde + Duree2.m_seconde);
    DureeReturn.m_minute = Duree1.m_minute + Duree2.m_minute + (DureeReturn.m_seconde / 60);
    DureeReturn.m_heure = Duree1.m_heure + Duree2.m_heure + (DureeReturn.m_minute / 60);

    DureeReturn.m_seconde %= 60;
    DureeReturn.m_minute %= 60;

    return DureeReturn;
}
