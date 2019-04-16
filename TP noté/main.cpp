// Anthony Quach, Franck Di L2-R 2022

#include <iostream>
#include "Animal.h"
#include "Lion.h"
#include "Tigre.h"
#include "Vache.h"
#include "Cannard.h"

using namespace std;

int main()
{
    Animal a = Animal("Cloud",15.1);
    Animal b("Seb", 10.32);
    cout << a << endl;
    cout << b << endl;
    a.Crier();

    Tigre c("Tigre Bertrand", 320.5, 58);
    cout << c << endl;
    c.getnbRayures();
    c.Crier();

    Lion d("Lion Paul", 25);
    cout << d << endl;
    d.Crier();

    Cannard e("Canard Paulette", 5, "bleue");
    cout << e << endl;
    e.getcouleur();
    e.Crier();

    Vache f("Vache Michel", 53, 21);
    cout << f << endl;
    f.getTache();
    f.Crier();
    /*
    Animal zoo_generique[6];
    zoo_generique[0] = a;
    zoo_generique[1] = b;
    zoo_generique[2] = c;
    zoo_generique[3] = d;
    zoo_generique[4] = e;
    zoo_generique[5] = f;

    for (int i = 0; i <= 5; i++)
    {
        zoo_generique[i].Crier();
    }
    n'affiche pas le bon cri, mais on a essayé !*/

    a.getnbInst(); // nombre d'objets dans la classe Animal
    return 0;
}
