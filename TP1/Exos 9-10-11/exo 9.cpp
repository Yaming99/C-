#include <iostream>
#include "X.h"

using namespace std;

int main()
{
    X a = X();
    // cr�ation de b � partir de a : constructeur par recopie
    X b(a);

	a.print(); 
	b.print();
   
    a.valAt(2) = 2019;
    a.valAt(5) = 2030;
    
    a.print(); 

    /**
     * affichage identique avec le constructeur de copie g�n�r� automatiquement
     * et celui programm�
     * dans les 2 cas, b a son propre tableau, copie du tableau de a
     * une modification du tableau de a n'alt�re pas le tableau de b.
     */
     
	b.print();

    return 0;
}

