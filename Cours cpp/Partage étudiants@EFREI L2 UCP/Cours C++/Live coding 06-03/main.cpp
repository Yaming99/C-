#include <iostream>
#include <string>
#include "Carre.h"

using namespace std;

void afficher(Forme const & forme)
{
    forme.afficher();
}

void detruire(Forme* forme)
{
    delete forme;
}


int main()
{
 //   Forme ma_forme;
   // Carre mon_carre;
    Carre* moncarre= new Carre();
    Forme * maformeobscure = moncarre;

    //afficher(ma_forme);
    //afficher(mon_carre);
    detruire(maformeobscure);




    return 0;
}


