#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>


using namespace std;

class Animal
{
    public:
        Animal(string, double); //nom poids
        virtual ~Animal(); // destructeur
        Animal(const Animal& other); // constructeur de copie
        Animal();
        double getpoids();
        string getnom();
        void getnbInst(); // obtient le nombre d'objet
        void setnom(string); // mutateurs
        void setpoids(double);
        void Crier(); // affiche grr
        friend ostream & operator<< (ostream & os, const Animal & c); // affiche l'objet
        friend istream & operator>> (istream & in, Animal & c); // demande à l'utilisateur de donner un nom
        static int nbInst;
    protected:
    private:
         string nom;
         double poids;

};

#endif // ANIMAL_H
