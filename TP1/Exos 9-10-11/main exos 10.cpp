#include <iostream>
#include "Y.h"

using namespace std;

int main()
{
    Y e;
    // cr�ation de b � partir de a : constructeur par recopie
    Y f(e);

    e.print();
	f.print();
	
    e.valAt(2) = 2019;
    e.valAt(5) = 2030;
    
    e.print();

    /**
     * affichage diff�rent avec le constructeur de copie g�n�r� automatiquement
     * et celui programm�
     *
     * dans le premier cas, e et f partagent le m�me tableau car le constructeur de copie
     * g�n�r� automatiquement fait de la copie superficielle membre � membre (valeur du
     * pointeur recopi�e)
     * une modification du tableau de e alt�re le tableau de f puisque c'est le m�me tableau
     *
     * dans le second cas, f a son propre tableau, copie du tableau de e
     * une modification du tableau de e n'alt�re pas le tableau de f.
     */
	f.print();

    return 0;
}

