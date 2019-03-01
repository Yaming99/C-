#ifndef CPERSONNE_H_INCLUDED
#define CPERSONNE_H_INCLUDED
#include <string>
#include "CDate.h"

using namespace std;

class CPersonne
{
    public:
        // les constructeurs
        CPersonne(const char * _name, int _jour, int _mois, int _annee);
        CPersonne(const CPersonne& personne);

        // le destructeur, virtuel pour être prêt pour le polymorphisme si besoin est
        virtual ~CPersonne();

        char * getName() const { return name; }
        int getAge() const { return age; }
        CDate & getDate() const  { return *dateNaissance; }

        // surcharge de l'opérateur d'assignation
        CPersonne& operator=(const CPersonne& personne);

        // surcharge des opérateurs d'entrée-sortie
        friend istream & operator>>(istream & is, CPersonne & personne);
        friend ostream & operator<<(ostream & is, const CPersonne & personne);

    private:
        char * name ;
        int age ;
        // relation de composition par un pointeur
        // la date de naissance est créee lors de la construction d'une personne
        // et détruite lors de la destruction d'une personne
        CDate * dateNaissance ;
};

#endif // CPERSONNE_H_INCLUDED
