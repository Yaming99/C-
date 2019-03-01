#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <string>

using namespace std;

class Date
{
public:
    // les constructeurs
    Date();
    Date(int jour, int mois, int annee);
    Date(const Date& date);

    // la date du jour en tant que variable de classe
    static Date today;

    // le destructeur, virtuel pour être prêt pour le polymorphisme si besoin est
    virtual ~Date();

    // les accesseurs en lecture et en écriture
    inline int getJour() const
    {
        return this->jour;
    }

    inline int getMois() const
    {
        return this->mois;
    }

    inline int getAnnee() const
    {
        return annee;
    }

    inline void setJour(const int _jour)
    {
        this->jour = _jour;
    }

    inline void setMois(const int _mois)
    {
        this->mois = _mois ;
    }

    inline void setAnnee(const int _annee)
    {
        this->annee = _annee;
    }

    // surcharge de l'opérateur d'assignation
    Date & operator=(const Date &  date);

    // surcharge des opérateurs d'entrée-sortie
    friend istream & operator>>(istream & is,  Date &  date);
    friend ostream & operator<<(ostream & is, const  Date & date);

protected:

private:
    int jour;
    int mois;
    int annee;
};

#endif // DATE_H_INCLUDED
