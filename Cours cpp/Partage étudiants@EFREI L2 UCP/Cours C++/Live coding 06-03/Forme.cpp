#include "Forme.h"
#include <iostream>


using namespace std;


void    Forme::afficher(void) const
{
    cout << "Je suis une forme" << endl;

}

Forme::~Forme()
{
    cout << "Une forme a ete detruite" << endl;
}
