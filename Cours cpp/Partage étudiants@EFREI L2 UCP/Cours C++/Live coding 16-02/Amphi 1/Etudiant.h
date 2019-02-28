#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED

#include <iostream>
#include <string>

class Etudiant
{

    private:
        std::string nom;
        float taux;

    public:
        Etudiant();
        ~Etudiant();
        void se_presenter();
        void initialiser(std::string _nom="Daski", float _taux=2.3);
        void boire();
        void etudier();
        void parler();
};

#endif // ETUDIANT_H_INCLUDED
