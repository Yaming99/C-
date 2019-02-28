#ifndef CARRE_H_INCLUDED
#define CARRE_H_INCLUDED
#include "Forme.h"

class Carre : public Forme
{
public :
    virtual void    afficher(void) const;
    virtual ~Carre();
};

#endif // CARRE_H_INCLUDED
