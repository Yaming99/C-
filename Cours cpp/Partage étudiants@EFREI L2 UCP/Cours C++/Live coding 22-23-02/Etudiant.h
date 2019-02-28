#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED

#include <iostream>
#include <string>
#include "Smartphone.h"

class Etudiant
{
    static int attribut;

    private:
        std::string nom;
        float taux;
        Smartphone *tel;

    public:
        Etudiant();
        ~Etudiant();
        void se_presenter();


        void boire();
        void etudier();
        void initialiser(std::string _nom="Jean", float _taux=2);
        void tournee(Etudiant& bff);
        void co_worker(Etudiant& bff);
        void saluer(const Etudiant& bff) const;
        int nb_Etudiant() const;
};

#endif // ETUDIANT_H_INCLUDED
