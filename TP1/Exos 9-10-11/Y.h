#ifndef Y_H
#define Y_H
#include <iostream>

using namespace std;

class Y
{
	private :
		double * vals; // avec partage => copie superficielle ne convient pas
		// ==> il faut de la copie PROFONDE (recopie du tableau POINTE)
		// ==> allocation dynamique du tableau
		long tmax;
		long tutil;
	public :
		Y(long size = 10);
        // CTOR COPY : A COMMENTER à des fins de comparaisons
        Y(const Y &); // A PROGRAMMER en copie PROFONDE
		~Y();
		double & valAt(int indice);
		
		void print() const;
};

#endif // Y_H
