#include "Etudiant.h"
#include <string>

Etudiant::Etudiant()
{
    std::cout << "Creation d'un etudiant" << std::endl;
}
Etudiant::~Etudiant()
{
    std::cout << "Destruction de l'etudiant" << std::endl;
}
void Etudiant::se_presenter()
{
    std::cout << "Je m'appelle " << nom << " et j'ai " << taux << " g.L" << std::endl;
}

void Etudiant::initialiser(std::string _nom, float _taux)
{
    nom = _nom;
    taux = _taux;
}

void Etudiant::boire()
{
    taux += 0.2;
}

void Etudiant::etudier()
{
    taux -= 0.2;
}

void Etudiant::parler()
{
    if (taux < 2.0) {
        std::cout << "Je m'appelle " << nom << std::endl;
    }
    else {
        std::cout << "Tinquiiieeete je sui aa peine bouuré" << std::endl;
    }
}
