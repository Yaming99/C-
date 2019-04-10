#include <iostream>
#include "Carrot.h"
#include "Potatoe.h"
#include "Vegetable.h"

using namespace std;

int main()
{
    /*
    Carrot c = Carrot(0.25, 30);
    Potatoe pdt = Potatoe(0.3, 10);
    Potatoe pdt1 = Potatoe(0.3, 10);
    Potatoe pdt2 = Potatoe(0.3);
    Potatoe pdt3 = Potatoe(0.75);
    cout << c << endl;
    cout << pdt << endl;
    cout << pdt1 << endl;
    cout << pdt2 << endl;
    cout << pdt3 << endl;

*/
    Vegetable pdt =  Potatoe(0.3, 10);
    Vegetable c =  Carrot(0.25, 30);
    cout << pdt << endl;
    cout << c << endl;

    return 0;
}
