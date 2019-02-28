#include <iostream>
#include "aaaa.h"
#include "assert.h"
#include "complex.h"
#include "X.h"
#include "Y.h"

using namespace std;

// j est un paramètre "normal", il reçoit une copie de la valeur passée en argument
void fonc(long j)
{
    cout << "\nadresse de j : " << &j;
    cout << "\ndans fonc(), valeur de j avant increment : " << j << endl;
    j++;
    cout << "dans fonc(), valeur de j apres increment : " << j << endl;
    return;
}

// j est une référence : il s'agit donc de la variable passée en argument
// Regarder les adresses affichées
void foncc(long &j)
{
    cout << "\nadresse de j : " << &j;
    cout << "\ndans fonc(), valeur de j avant increment : " << j << endl;
    j++;
    cout << "dans fonc(), valeur de j apres increment : " << j << endl;
    return;
}



void fonc(ouch objet)
{
    cout << "debut fonc()" << endl;
    objet.print();
    objet.incr(2);
    objet.print();
    cout << "fin fonc()" << endl;
}




// déclarations des prototypes des fonctions pour l'exercice 3

void func(double x);
void func(int x);
void func(int a, int b);
void func(double a, double b);

// déclarations des prototypes des fonctions pour l'exercice 4

void echange(char & x, char & y);
void echange(long & x, long & y);
void echange(double & x, double & y);

// déclarations des prototypes des fonctions pour l'exercice 5

long  & valAt(long * tab, int indice, int taille);
void initialise_tableau(long  * tab, int taille);
void affiche_tableau(long  * tab, int taille);

// déclarations des prototypes de la fonction pour l'exercice 6

double somme(double a = 0, double b = 0, double c = 0, double d = 0);

void exo3();
void exo4();
void exo5();
void exo6();


void func(int x) // j'aime pas les warnings
{
    cout << "func(int) : " << x << endl;
    return;
}

void func(double x)
{
    cout << "func(double) : " << x << endl;
    return;
}

void func(int a, int b)
{
    cout << "func(int, int) : " << a << "\t" << b << endl;
    return;
}

void func(double a, double b)
{
    cout << "func(double, double) : " << a << "\t" << b << endl;
    return;
}

void echange(char & x, char & y)
{
    char tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void echange(long & x, long & y)
{
    long tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void echange(double & x, double & y)
{
    double tmp;
    tmp = x;
    x = y;
    y = tmp;
}

long & valAt(long * tab, int indice, int taille)
{
    assert(0 <= indice && indice <= taille);
    return tab[indice];
}

void initialise_tableau(long * tab, int taille)
{
    for (int i = 0; i < taille; i++)
        valAt(tab, i, taille) = 2 * i + 3; // c'est un exemple
}

void affiche_tableau(long * tab, int taille)
{
    for (int i = 0; i < taille; i++)
        cout << valAt(tab, i, taille) << '\t';
    cout << endl;
}

double somme(double a, double b, double c, double d)
{
    return a + b + c + d;
}

void exo3()
{
    cout << "\nExo 3:\n" << endl;
    func(5);
    func(5.23);
    func(5, 8);
    func(5.23, 8.87);
}

void exo4()
{
    char a = 'a';
    char b = 'b';
    long c = 1232;
    long d = 2321;
    double e = 32.21;
    double f = 12.33;
    echange(a, b);
    echange(c, d);
    echange(e, f);
    cout << "\nExo 4 : " << char(0x82) << "change\n\n" << a << '\t' << b << endl;
    cout << c << '\t' << d << endl;
    cout << e << '\t' << f << endl;
}

void exo5()
{
    long tab[10];

    initialise_tableau(tab, 10);
    cout << "\nExo 5 : tableau\n"<< endl;
    affiche_tableau(tab, 10);

    cout << valAt(tab, 3, 10) << endl;
    valAt(tab, 4, 10) = 2014;
    cout << valAt(tab, 4, 10) << endl;

    //sizeof(tab)/sizeof(tab[0]) vaut 10 et donne donc le nombre d'éléments de tab

    affiche_tableau(tab, sizeof(tab)/sizeof(tab[0]));
}

void exo6()
{
    cout << "\nExo 6 : somme\n\n" << somme() << endl;
    cout << somme(10) << endl;
    cout << somme(10, 20) << endl;
    cout << somme(10, 20, 30) << endl;
    cout << somme(10, 20, 30, 40) << endl;
}

void exos_1_2()
{
    cout << "Exo 1 :" << endl;
    long a = 2;
    fonc(a);
    foncc(a);
    cout << "\nExo 2 :\n" << endl;
    ouch o;
    o.print();
    o.incr(4);
    o.print();
    fonc(o);
    o.print();
}

void exos_7_8()
{
    cout << "\nExo 7 et 8 :\n" << endl;
    complex a;
    complex b(6);
    complex c(7, 12);
    complex d(c);
}

void exo9()
{
    X a;
    // on crée b à partir de a : constructeur par recopie
    X b(a);

    cout << "\nExo 9 :\n\n" << a << endl;
    cout << b << endl;

    a.valAt(2) = 2014;
    cout << a << endl;

    // affichage identique avec le constructeur de copie généré automatiquement et celui programmé
    // dans les 2 cas, b a son propre tableau, copie du tableau de une modification du tableau de a n'altère pas le tableau de b.

    cout << b << endl;
}

void exo10()
{
    Y e;
    // création de b à partir de a : constructeur par recopie
    Y f(e);

    cout << "\nExo 10 :\n\n" << e << endl;
    cout << f << endl;

    e.valAt(2) = 2014;
    cout << e << endl;
    cout << f << endl;
}




int main()
{
    exos_1_2();
    exo3();
    exo4();
    exo5();
    exo6();
    exos_7_8();
    exo9();
    exo10();
    return 0;
}
