#include <iostream>
#include "complexe.h"

using namespace std;

int main()
{
    complexe p1;
    complexe p0(-2, 5);
    complexe p2(1, -3);
    complexe p3(p2);
    complexe p4 = p3;

    p3.print();
    cout<<p2.get_im()<<endl;
    cout<<p2.get_re()<<endl;
    p2.init(5,4);
    p2.addition(p2);
    p2.multiplication(p2);
    p2.conjugue(p0);
    p0.module();
    p0.argument();
    return 0;
}
