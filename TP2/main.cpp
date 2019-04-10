#include <iostream>
#include "point.h"
#include "rationnel.h"

using namespace std;

int main()
{
    /// Point

    cout << "Exo 1 et 2 :\n" << endl;

    Point a0;        // contructeur par défaut
    Point a(5);      // contructeur de conversion
    Point b(4,5);    // contructeur à 2 paramètres
    Point c(b);      // constructeur de copie

	cout << "a0 = " << a << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    Point d(10,12);  // contructeur à 2 paramètres
    cout << "d = " << d << endl;

    // opérateur d'affectation
    // Point & Point::operator=(const Point& rhs)
    d = b;

    cout << "b = " << b << endl;
    cout << "d = " << d << endl;

    Point e;
    cout << "e = " << e << endl;
    // Point Point::operator+ (const Point & p) const
    // PUIS
    // Point & Point::operator=(const Point& rhs)
    e = b + c;

    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

	// Point & Point::operator+= (const Point & p)
    b += e;

    cout << "e = " << e << endl;
    cout << "b = " << b << endl;

	// Point operator+ (const Point & p, int x)
	// PUIS
	// Point & Point::operator=(const Point& rhs)
    b = b + 7;

    cout << "b = " << b << endl;

    // Point operator+ (int x, const Point & p)
   	// PUIS
   	// Point & Point::operator=(const Point& rhs)
    b = 7 + b;


    cout << "b = " << b << endl;
	// 3 est converti en Point(3) <==> Point(3,0);
    b  +=  e + 3;

    cout << "e = " << e << endl;
    cout << "b = " << b << endl;


    // 3 est converti en Point(3) <==> Point(3,0);
    // PUIS
    // Point & Point::operator+= (const Point & p)
    b  += 3;


    Point p1;
    Point p2;
    // p2 = {4, 3}; // initialisation C++11

    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl << endl;


    cout << "FONCTION MEMBRE/METHODE distance" << endl;
    cout << "distance entre p1 et p1 = " << p1.distance(p1) << endl;
    cout << "distance entre p2 et p2 = " << p2.distance(p2) << endl;
    cout << "distance entre p1 et p2 = " << p1.distance(p2) << endl;
    cout << "distance entre p2 et p1 = " << p2.distance(p1) << endl << endl;

    cout << "FONCTION AMIE distance_bis" << endl;
    cout << "distance entre p1 et p1 = " << distance_bis(p1,p1) << endl;
    cout << "distance entre p2 et p2 = " << distance_bis(p2,p2) << endl;
    cout << "distance entre p1 et p2 = " << distance_bis(p1,p2) << endl;
    cout << "distance entre p2 et p1 = " << distance_bis(p2,p1) << endl << endl;

    /// Rationnel

    Rationnel r1;
    Rationnel r2(3);
    Rationnel r3(70,45);
    Rationnel r4 = 8;

    cout << "\nExo 3 :\n" << endl;

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

    r1.simplifier();
    r2.simplifier();
    r3.simplifier();
    r4.simplifier();
    cout << endl;

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;
    cout << endl;

    cout << "r1 * 4.8 = " << r1 * 4.8 << endl;
    cout << "r2 * 4.8 = " << r2 * 4.8 << endl;
    cout << "r3 * 4.8 = " << r3 * 4.8 << endl;
    cout << "r4 * 4.8 = " << r4 * 4.8 << endl;
    cout << endl;


    Rationnel r5(18,15);
    r3 += r5;
    cout << r5 << endl;
    cout << r3 << endl;
    cout << endl;

    Rationnel r6, r7;
    double x = r6(24,8);
    double y = r7(54,8);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    Rationnel r8(3,4);
    double z;
    z = r8;
    cout << "z = " << z << endl;

    return 0;
}
