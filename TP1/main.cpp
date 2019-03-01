#include <iostream>
#include "aaaa.h"
#include "assert.h"
#include "complex.h"
#include "X.h"
#include "Y.h"
#include "D.h"
#include "T.h"
#include "Personne.h"

using namespace std;

// Déclaration du prototype de la fonction pour l'exercice 6
double somme(double a = 0, double b = 0, double c = 0, double d = 0);


// j est un paramètre "normal", il reçoit une copie de la valeur passée en argument
void fonc(long j)
{
    cout << "\nAdresse de j : " << &j;
    cout << "\nDans fonc(), valeur de j avant incr" << char(0x82) << "ment : " << j << endl;
    j++;
    cout << "Dans fonc(), valeur de j apr" << char(138) << "s incr" << char(0x82) << "ment : " << j << endl;
    return;
}

// j est une référence : il s'agit donc de la variable passée en argument
// Regarder les adresses affichées
void foncc(long &j)
{
    cout << "\nAdresse de j : " << &j;
    cout << "\nDans fonc(), valeur de j avant incr" << char(0x82) << "ment : " << j << endl;
    j++;
    cout << "Dans fonc(), valeur de j apr" << char(138) << "s incr" << char(0x82) << "ment : " << j << endl;
    return;
}

void fonc(ouch objet)
{
    cout << "D" << char(0x82) << "but fonc()" << endl;
    objet.print();
    objet.incr(2);
    objet.print();
    cout << "Fin fonc()" << endl;
}

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
    return (a + b + c + d);
}

void exo3()
{
    cout << "\nExo 3 :\n" << endl;
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

void exo11()
{
    D a;
    D b(a);
    D * pa = 0; // pointeur nul
    // 4 adresses aléatoires
    D * pb;
    D * pc;
    D * pd;
    D * pe;

    pc = &a;
    pd = pc;
    pe = &b;
    pb = pd;

    cout << "\nADRESSES DES 7 VARIABLES :\n" << endl;
    cout << "Addresse de a : " << &a << endl;
    cout << "Addresse de b : " << &b << endl;
    cout << "Addresse de pa : " << pa << endl;
    cout << "Addresse de pb : " << pb << endl;
    cout << "Addresse de pc : " << pc << endl;
    cout << "Addresse de pd : " << pd << endl;
    cout << "Addresse de pe : " << pe << endl;

    cout << endl << "DESTRUCTIONS :\n" << endl;
    delete pa; // pas d'appel car pointeur nul
    delete pb;
    delete pc;
    delete pd;
    delete pe;
}

void exo12()
{
    cout << "\nExo 12 :" << endl;
    T a(2,3);
    T b(a);
    /* PLANTE car t1 et a ne sont pas de même dimension
        T t1;
        t1 = a; */
    T t2(2,3);
    t2 = a;

    T * c = new T(2,2);
    T * d;
    d = c; // pointeurs sur la même instance de T

    cout << "DESTRUCTEUR APPEL" << char(144) << " EXPLICITEMENT pour le pointeur c" << endl;
    delete c;
    // DESTRUCTEUR À NE PAS APPELER pour le pointeur d car l'instance sur lequel il pointe est déjà détruite par delete d;

    // DESTRUCTEUR APPELE IMPLICITEMENT pour a et b
    cout << "DESTRUCTEUR APPEL" << char(144) << " IMPLICITEMENT pour a et b " << endl;
}

void exo13()
{
    cout << "Exo 13 :\n\nMON NOM EST PERSONNE" << endl;

    // 2 syntaxes équivalentes
    Personne fantome1 = Personne();
    Personne fantome2;
    cout << "Fant" << char(147) << "me1 = " << fantome1 << endl;
    cout << "Fant" << char(147) << "me2 = " << fantome2 << endl;


    Personne personnes1 [3] = { {"Alfred", "Jarry", 60}, {"Charles", "Peguy", 20}, {"Rene", "De Chateaubriand", 56} };

    cout << endl << "AFFICHAGE DU PREMIER TABLEAU DE PERSONNES" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << personnes1[i] << endl;
    }

    Personne x("Georges", "Clemenceau", 80);
    Personne y("Antoine", "Blondin");
    Personne z("Paul", "Klee", 76);

    // TEST DE L'ÂGE SANS DATE DE NAISSANCE CRÉÉE
    cout << x.getLastname() << " a " << x.getAge() << " ans" << endl;

    Personne  personnes2 [3] = {x, y, z};
    cout << endl << "AFFICHAGE DU SECOND TABLEAU DE PERSONNES" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << personnes2[i] << endl;
    }

    cout << endl << "TEST CONSTRUCTEUR DE COPIE" << endl;
    // 3 syntaxes équivalentes
    // Personne u = Personne(x);
    // Personne u = x;
    Personne u(x);
    cout << "original x = " << x << endl;
    cout << "u copie de x = " << u << endl;
    cout << "Mise " << char(133) << " jour age de u" << endl;
    u.setAge(40);
    cout << "u modification " << char(131) << "ge = " << x << endl;
    cout << "x original de u pas de modification = " << u << endl;


    cout << endl << "TEST LA VARIABLE DE CLASSE today >>" << endl;
    cout << "Nous sommes le " << Date::today << endl;
    cout << "Nous sommes en l'an " << Date::today.getAnnee()<< endl;

    cout << endl << "TEST DE L'" << char(182) << "GE AVEC LA DATE DE NAISSANCE CR" << char(144) << char(144) << "E" << endl;
    cout << x.getLastname() << " a " << x.getAge() << " ans" << endl;
    Personne duval("Jeanne", "Duval", 100, 3, 12, 1912);
    cout << "Madame " << duval.getFirstname() << ' ' << duval.getLastname()
         << " a "<< duval.getAge() << " ans" << endl;

    cout << endl << "TEST SURCHARGE DE L'OP" << char(144) << "RATEUR >>" << endl;
    Personne w;
    cin >> w;
    cout << "w = " << w << endl;
    cout << "Monsieur " << w.getFirstname() << ' ' << w.getLastname()
         << ", vous avez " << w.getAge() << " ans" << endl;

    cout << endl << "TEST SUR LE MARIAGE >>" << endl;
    cout << y << " et " << z << " se marient" << endl;
    cout << x << " et " << w << " se marient" << endl;
    marier(y, z);
    marier(x, w);
    cout << y << " a pour conjoint : " << *(y.getConjoint()) << endl;
    cout << z << " a pour conjoint : " << *(z.getConjoint()) << endl;
    cout << x << " a pour conjoint : " << *(x.getConjoint()) << endl;
    cout << w << " a pour conjoint : " << *(w.getConjoint()) << endl;

    cout << endl << "TEST SURCHARGE DE L'OP" << char(144) << "RATEUR = : LA R" << char(144) << "INCARNATION!" << endl;
    Personne v;
    v = x;
    cout << "v assignation de x = " << x << endl;
    if (x.getConjoint() != 0)
        cout << x << " a toujours pour conjoint : " << *(x.getConjoint()) << endl;
    if (v.getConjoint() != 0)
        cout << v << " a pour conjoint : " << *(v.getConjoint()) << endl;
    else
        cout << v << " n'a pas de conjoint." << endl;

    y = x;
    cout << "y assignation de x = " << x << endl;
    if (x.getConjoint() != 0)
        cout << x << " a toujours pour conjoint : " << *(x.getConjoint()) << endl;
    if (y.getConjoint() != 0)
        cout << y << " a pour conjoint " << *(y.getConjoint()) << endl;
    else
        cout << y << " n'a pas de conjoint." << endl;

    cout << "Nombre de personnes instanci" << char(0x82) << "es = " <<  Personne::nombre_personnes << endl;
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
    exo11();
    exo12();
    exo13();
    return 0;
}
