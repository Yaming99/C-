#include "Etudiant.h"
#include <string>



int Etudiant::attribut = 0;

Etudiant::Etudiant()
{
    tel = new Smartphone();
    std::cout <<" Un etudiant est cree" <<std::endl;
    attribut++;
}

Etudiant::~Etudiant()
{
    delete tel;
    std::cout <<" Un etudiant est detruit" <<std::endl;
    attribut--;
}

void Etudiant::se_presenter()
{
    std::cout << "Je m'appelle " << nom << " et j'ai " << taux << " g.L" << std::endl;
}



void Etudiant::initialiser(std::string _nom, float _taux){
    nom=_nom;
    taux=_taux;

}
void Etudiant::boire(){
    taux+=0.2;
}

void Etudiant::etudier(){
    taux-=0.2;
}

void Etudiant::tournee(Etudiant& bff){
    boire();
    bff.boire();
    boire();
    bff.boire();
}

void Etudiant::co_worker(Etudiant& bff){
    etudier();
    bff.etudier();
    etudier();
    bff.etudier();
}

void Etudiant::saluer(const Etudiant& bff) const
{
    std::cout << nom << "dit : "<< "Hey " << bff.nom << std::endl;

}

int Etudiant::nb_Etudiant() const{
    return attribut;
}
