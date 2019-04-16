#ifndef CANNARD_H
#define CANNARD_H

#include "Animal.h"

class Cannard : public Animal
{
    public:
        Cannard(string, double,string); // pareil
        virtual ~Cannard();
        Cannard(const Cannard& other);
        void getcouleur(); // couleur de plume
        void Crier();
    protected:
    private:
        string couleur;
};

#endif // CANNARD_H
