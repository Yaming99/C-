#ifndef X_H
#define X_H
#include <iostream>

using namespace std;

class X
{
	private :
		long vals[10]; // pas de partage => copie superficielle convient
		long util;
	public :
		X();
        // CTOR COPY : A COMMENTER à des fins de comparaisons
		// X(const X &); INUTILE car il est généré automatiquement 
		// avec une copie SUPERFICIELLE
		~X();
		
		long & valAt(int indice);
		
		void print() const;
};



#endif // X_H
