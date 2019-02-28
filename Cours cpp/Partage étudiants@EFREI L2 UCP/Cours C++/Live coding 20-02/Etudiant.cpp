#include "Etudiant.h"
#include <string>


Etudiant::Etudiant(std::string _nom, float _taux){
    nom=_nom;
    taux=_taux;
    telephone = new Smartphone();
    std::cout <<" Un etudiant est cree" <<std::endl;
}

Etudiant::~Etudiant()
{
    delete telephone;
    std::cout <<" Un etudiant est detruit" <<std::endl;
}

void Etudiant::se_presenter()
{
    std::cout << "Je m'appelle " << nom << " et j'ai " << taux << " g.L" << std::endl;
}

void Etudiant::initialiser(std::string _nom, float _taux){
    nom=_nom;
    taux=_taux;

}

void Etudiant::coworker(Etudiant &billy)
{
    taux-=0.2;
    billy.taux=billy.taux-0.2;
}

void Etudiant::saluer(Etudiant &billy)
{
    std::cout<<"Hi,"<<billy.nom<<"."<<std::endl;


}
