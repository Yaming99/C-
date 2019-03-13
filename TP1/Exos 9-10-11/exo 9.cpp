#include <iostream>
#include "X.h"

using namespace std;

int main()
{
    X a = X();
    // création de b à partir de a : constructeur par recopie
    X b(a);

	a.print(); 
	b.print();
   
    a.valAt(2) = 2019;
    a.valAt(5) = 2030;
    
    a.print(); 

    /**
     * affichage identique avec le constructeur de copie généré automatiquement
     * et celui programmé
     * dans les 2 cas, b a son propre tableau, copie du tableau de a
     * une modification du tableau de a n'altère pas le tableau de b.
     */
     
	b.print();

    return 0;
}

