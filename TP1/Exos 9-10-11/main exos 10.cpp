#include <iostream>
#include "Y.h"

using namespace std;

int main()
{
    Y e;
    // création de b à partir de a : constructeur par recopie
    Y f(e);

    e.print();
	f.print();
	
    e.valAt(2) = 2019;
    e.valAt(5) = 2030;
    
    e.print();

    /**
     * affichage différent avec le constructeur de copie généré automatiquement
     * et celui programmé
     *
     * dans le premier cas, e et f partagent le même tableau car le constructeur de copie
     * généré automatiquement fait de la copie superficielle membre à membre (valeur du
     * pointeur recopiée)
     * une modification du tableau de e altère le tableau de f puisque c'est le même tableau
     *
     * dans le second cas, f a son propre tableau, copie du tableau de e
     * une modification du tableau de e n'altère pas le tableau de f.
     */
	f.print();

    return 0;
}

