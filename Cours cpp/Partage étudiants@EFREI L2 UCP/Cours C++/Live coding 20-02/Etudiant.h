#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED

#include <iostream>
#include <string>

class Etudiant
{

    private:
        std::string nom;
        float taux;
        Smartphone *telephone;

    public:

        Etudiant(std::string _nom="Jean", float _taux=2);
        ~Etudiant();
        void se_presenter();

        void initialiser(std::string _nom="Jean", float _taux=2);

        void coworker (Etudiant &billy);
        void saluer (Etudiant &billy);

};

#endif // ETUDIANT_H_INCLUDED
