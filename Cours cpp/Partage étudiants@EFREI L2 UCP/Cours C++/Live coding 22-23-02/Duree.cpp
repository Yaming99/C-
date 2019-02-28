#include "Duree.h"

Duree::Duree(int seconde, int minute, int heure) : m_seconde(seconde), m_minute(minute), m_heure(heure)
{

}

void Duree::afficher()
{
    std::cout << m_heure << ":" << m_minute << ":" << m_seconde << std::endl;
}
