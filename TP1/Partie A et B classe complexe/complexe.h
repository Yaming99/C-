#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class complexe
{
    private :
        double re, im;
    public :
        //complexe();
        complexe(double a=2, double b=3);
        ~complexe();
        complexe(const complexe& p);
        double get_re();
        double get_im();
        void set_re(double x);
        void set_im(double y);
        void print();
        void init(double a, double b);
        complexe addition(complexe a);
        complexe multiplication(complexe a);
        void conjugue(complexe a);
        double module();
        double argument();



};

#endif // COMPLEX_H_INCLUDED
