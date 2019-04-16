#ifndef VACHE_H
#define VACHE_H

#include "Animal.h"

class Vache : public Animal
{
    public:
        Vache(string, double,int); // idem
        virtual ~Vache();
        Vache(const Vache& other);
        void getTache(); // nombre de tache de la vache
        void Crier();
    protected:
    private:
        int nbTache;
};

#endif // VACHE_H
