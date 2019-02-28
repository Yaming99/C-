#include <iostream>
#include <string>
#include "Etudiant.h"
using namespace std;


int main()
{
    Etudiant Mike, Bob;
    Mike.initialiser("Mike");
    Mike.se_presenter();
    Bob.se_presenter();

    Mike.coworker(Bob);
    Mike.coworker(Bob);
    Mike.coworker(Bob);
    Mike.coworker(Bob);

    Etudiant Henry = Mike;

    Henry.se_presenter();

    return 0;
}
