#include <iostream>
#include <Cassert>

using namespace std;

/**
 * déclarations prototypes des fonctions de l'exercice 3
 */
extern void func(double x);
extern void func(int x);
extern void func(int a, int b);
extern void func(double a, double b);

/**
 * déclarations prototypes des fonctions de l'exercice 4
 */
extern void echange(char & x, char & y);
extern void echange(long & x, long & y);
extern void echange(double & x, double & y);

/**
 * déclarations prototypes des fonctions de l'exercice 5
 */
extern long  & valAt(long * tab, int indice, int taille);
extern void initialise_tableau(long  * tab, int taille);
extern void affiche_tableau(long  * tab, int taille);

/**
 * déclaration prototype de la fonction de l'exercice 6
 */
extern double somme(double a = 0, double b = 0, double c = 0, double d = 0);

extern void exo3();
extern void exo4();
extern void exo5();
extern void exo6();

extern int main_exos_3_4_5_6(void);

void func(int x)
{
    cout << "func(int)" << endl;
    return;
}

void func(double x)
{
    cout << "func(double)" << endl;
    return;
}

void func(int a, int b)
{
    cout << "func(int, int)" << endl;
    return;
}

void func(double a, double b)
{
    cout << "func(double, double)" << endl;
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
    assert(0 <= indice);
    assert(indice <= taille);
    return tab[indice];
}

void initialise_tableau(long * tab, int taille)
{
    assert(0 < taille);
    for (int i = 0; i < taille; i++)
        valAt(tab, i, taille) = 2 * i + 3; // par exemple!
}

void affiche_tableau(long * tab, int taille)
{
     assert(0 < taille);
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
    cout << a << '\t' << b << endl;
    cout << c << '\t' << d << endl;
    cout << e << '\t' << f << endl;
}

void exo5()
{
    long tab[10];

    initialise_tableau(tab, 10);
    affiche_tableau(tab, 10);

    cout << valAt(tab, 3, 10) << endl;
    valAt(tab, 4, 10) = 2014;
    cout << valAt(tab, 4, 10) << endl;

    /**
     * sizeo(tab))/sizeof(tab[0] vaut 10 et donne donc le nombre d'éléments du tableau tab
     */
    affiche_tableau(tab, sizeof(tab)/sizeof(tab[0]));
}

void exo6()
{
    cout << somme() << endl;
    cout << somme(10) << endl;
    cout << somme(10, 20) << endl;
    cout << somme(10, 20, 30) << endl;
    cout << somme(10, 20, 30, 40) << endl;
}

int main_exos_3_4_5_6(void)
{
    exo3();
    exo4();
    exo5();
    exo6();
    return 0;
}
