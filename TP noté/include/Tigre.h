#ifndef TIGRE_H
#define TIGRE_H

#include "Animal.h"

class Tigre : public Animal
{
    public:
        Tigre(string, double, int);
        virtual ~Tigre(); //destructeur
        Tigre(const Tigre& other); // constructeur copie
        void getnbRayures(); // obtient le nombre de rayures
        void Crier();
    protected:
    private:
        int nbRayures;
};

#endif // TIGRE_H
