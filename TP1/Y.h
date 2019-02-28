#ifndef Y_H_INCLUDED
#define Y_H_INCLUDED
#include <iostream>

using namespace std;

class Y
{
	private :
		double * vals;
		long tmax;
		long tutil;
	public :
		Y(long size = 10);
        // CTOR COPY : A COMMENTER à des fins de comparaisons
        Y(const Y &);
		~Y();
		double & valAt(int indice);
		void initialise_tableau(int taille);

    friend ostream & operator<<(ostream &, const Y &);
};

#endif // Y_H_INCLUDED
