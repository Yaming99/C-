#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <string>
#include "Date.h"

using namespace std;

class Personne
{
public:
    // les constructeurs
    Personne();
    Personne(const string & _firstname, const string & _lastname, int _age = 18);
    Personne(const string & _firstname, const string & _lastname, int _age, int _jour, int _mois, int _annee);
    Personne(const Personne& personne);

    static int nombre_personnes;

    // le destructeur, virtuel pour être prêt pour le polymorphisme si besoin est
    virtual ~Personne();

    // les accesseurs en lecture et en écriture
    inline string getFirstname() const
    {
        return this->firstname;
    }

    inline string getLastname() const
    {
        return this->lastname;
    }

    inline int getAge() const
    {
        return ( (ddn == 0) ? age : (Date::today.getAnnee() - ddn->getAnnee()) );
    }

    inline Date * getDdn() const
    {
        return ddn;
    }

    inline Personne * getConjoint() const
    {
        return conjoint;
    }

    inline void setFirstname(const string & _firstname)
    {
        this->firstname = _firstname;
    }

    inline void setLastname(const string & _lastname)
    {
        this->lastname = _lastname;
    }

    inline void setAge(const int  _age)
    {
        this->age = _age;
    }

    inline void setDdn(int jour, int mois, int annee)
    {
        this->ddn->setJour(jour);
        this->ddn->setMois(mois);
        this->ddn->setAnnee(annee);
    }

    // surcharge de l'opérateur d'assignation
    Personne& operator=(const Personne & personne);

    // surcharge des opérateurs d'entrée-sortie
    friend istream & operator>>(istream & is, Personne & personne);
    friend ostream & operator<<(ostream & is, const Personne & personne);

    // le marriage
    friend void marier(Personne & a, Personne & b);

    // le divorce
    inline void divorce()
    {
        this->conjoint = 0;
    }

    // le decès d'une personne
    inline void deces()
    {
        if ( this->conjoint != 0)
            this->conjoint->setConjoint(*this);
    }

protected:

private:
    inline void setConjoint(const Personne &  _conjoint)
    {
        this->conjoint = (Personne *) &_conjoint;
    }

    string firstname;
    string lastname;
    int age;

    // relation de composition par un pointeur
    // la date de naissance est créee lors de la construction d'une personne
    // et détruite lors de la destruction d'une personne
    Date * ddn;
    // relation d'agrégation par un pointeur
    // le conjoint n'est pas crée lors de la construction d'une personne
    // et n'est pas détruit lors de la destruction d'une personne
    Personne * conjoint;
};

#endif // PERSONNE_H_INCLUDED
