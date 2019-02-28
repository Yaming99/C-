#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class complex
{
    public:
        // complex(); devenu inutile car celui par défaut le comprend
        complex(double re = 0, double im = 0);
        ~complex();
        complex(const complex& other);
    private:
        double re;
        double im;
};

#endif // COMPLEX_H_INCLUDED
