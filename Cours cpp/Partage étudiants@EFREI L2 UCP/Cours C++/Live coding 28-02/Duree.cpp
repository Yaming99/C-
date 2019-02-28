#include "Duree.h"
#include <string>
#include <iostream>

Duree::Duree(int heures, int minutes, int secondes)
{
    h = heures;
    m = minutes;
    s = secondes;
}
void Duree::afficherDuree()
{
    std::cout << h << ":" << m << ":" << s << std::endl;
}

