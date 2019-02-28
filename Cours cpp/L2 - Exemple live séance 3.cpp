//
//  main.cpp
//  L2-1
//
//  Created by Nicolas Sicard on 08/02/2017.
//  Copyright © 2017 Efrei. All rights reserved.
//

#include <iostream>
using namespace std;

class Montre {
    int heures, minutes, secondes;
    char *nom;
public:
    Montre(const int h=0, int m=0, int s=0); // paramètres à valeurs par défaut
    //Montre(); constructeur par défaut
    Montre(const Montre& m); // constructeur de copie
    ~Montre();
    
    void setHeures(int h); //setter - mutateur
    void setMinutes(int m);
    void setSecondes(int s);
    void setNom(const char* n);
    
    void afficher() const;
    void calibrer();
    
    static int heuresRef;
    static int minutesRef;
    static int secondesRef;
};

Montre::Montre(int h, int m, int s) {
    heures = h;
    minutes = m;
    secondes = s;
    nom = strdup("coucou");
}

Montre::Montre(const Montre& m) {
    heures = m.heures;
    minutes = m.minutes;
    secondes = m.secondes;
    nom = strdup(m.nom);
    cout << "je crée une montre par copie" << endl;
}

Montre::~Montre() {
    cout << "destruction de la montre " << nom << endl;
    free(nom);
}

/*Montre::Montre() {
    heures = 0;
    minutes = 0;
    secondes = 0;
}*/

void Montre::afficher() const {
    cout << nom << " : " << heures << "h " << minutes << "m " << secondes << "s" << endl;
}

void Montre::setHeures(int h) { heures = h; }
void Montre::setMinutes(int m) { minutes = m; }
void Montre::setSecondes(int s) { secondes = s; }

void Montre::calibrer() {
    heures = Montre::heuresRef;
    minutes = Montre::minutesRef;
    secondes = Montre::secondesRef;
}

void Montre::setNom(const char* n) { free(nom); nom = strdup(n); }


void afficherMontre(const Montre& m) {
    m.afficher();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Watch!\n";
    
    Montre::heuresRef = 12;
    Montre::minutesRef = 45;
    Montre::secondesRef = 00;
    
    Montre maMontre(13, 32, 3);
    maMontre.setHeures(6);
    maMontre.setMinutes(41);
    maMontre.setSecondes(12);
    
    maMontre.afficher();
    maMontre.setNom("montre");
    
    const Montre ma2emeMontre = maMontre;
    
    ma2emeMontre.afficher();
    //ma2emeMontre.setNom("montre2"); //impossible car m2ememontre n'est plus modifiable
    
    afficherMontre(ma2emeMontre);
    
    maMontre.calibrer();
    
    
    // free(maMontre.nom); // impossible
    
    cout << "FIN DU PROGRAMME" << endl;
    return 0;
}
