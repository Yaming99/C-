#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion : public Animal
{
    public:
        Lion(string, double); //idem
        virtual ~Lion();
        Lion(const Lion& other);
        void Crier();
    protected:
    private:
};

#endif // LION_H
