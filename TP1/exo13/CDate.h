#ifndef CDATE_H_INCLUDED
#define CDATE_H_INCLUDED
#include <string>

using namespace std;

class CDate
{
    public:
        // les constructeurs
        CDate();
        CDate(int jour, int mois, int annee);
        CDate(const CDate& date);

        // la date du jour en tant que variable de classe
        static CDate today;

        // le destructeur, virtuel pour être prêt pour le polymorphisme si besoin est
        virtual ~CDate();

        // les accesseurs en lecture et en écriture
        inline int getDay() const
        {
            return this->jour;
        }

        inline int getMonth() const
        {
            return this->mois;
        }

        inline int getYear() const
        {
            return annee;
        }

        inline void setDay(const int _jour)
        {
            this->jour = _jour;
        }

        inline void setMonth(const int _mois)
        {
            this->mois = _mois ;
        }

        inline void setYear(const int _annee)
        {
            this->annee = _annee;
        }

        // surcharge de l'opérateur d'assignation
        CDate & operator=(const CDate &  date);

        // surcharge des opérateurs d'entrée-sortie
        friend istream & operator>>(istream & is,  CDate &  date);
        friend ostream & operator<<(ostream & is, const  CDate & date);

    protected:

    private:
        int jour;
        int mois;
        int annee;
};

#endif // CDATE_H_INCLUDED
