#include <iostream>

using namespace std;

class D
{
private :
    int * x;
public :
    D();
    D(const D & other);
    ~D();
};

D::D()
{
    cout << "Constructeur par défaut" << endl;
    /** A ACTIVER POUR VOIR LE BUG
      * on demande à détruire une zone déjà détruite
    */
    // SANS new le delete du destructeur PLANTE
    x = new int [4];
}

D::D(const D & other)
{
    cout << "Constructeur de copie" << endl;
      x = new int [4];
      for (int i = 0; i < 4; i++)
        x[i] = other.x[i];
}

D::~D()
{
    cout << "Destructeur : " << this << endl;
    delete [] x;
}

int main()
{
    D a;
    D b(a);
    D * pa = 0; // pointeur nul
    // 4 adresses aléatoires
    D * pb;
    D * pc;
    D * pd;
    D * pe;
    D * pf;

    pc = &a;
    pd = pc;
    pe = &b;
    
    pf = new D(b);

    cout << "ADRESSES DES 7 VARIABLES " << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << pa << endl;
    cout << pb << endl;
    cout << pc << endl;
    cout << pd << endl;
    cout << pe << endl;

    cout << endl << "DESTRUCTIONS " << endl;
  /*
   * PAS DE NEW pour pa, pb ... pe DONC PAS delete
    delete pa; // pas d'appel car pointeur nul
    delete pb;
    delete pc;
    delete pd;
    delete pe;
 */

	delete pf;
    return 0;
}

