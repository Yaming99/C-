#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <iostream>

using namespace std;

class Point
{
    public:
        Point(int a = 0, int b = 0);

        virtual ~Point();

        Point(const Point& other);

        Point& operator=(const Point& other);

        inline int Getx()const
        {
            return x;    // x = p.Getx()
        }

        void Setx(int val)
        {
            x = val;    // p.Setx(4)
        }

        int Gety() const
        {
            return y;
        }

        void Sety(int val)
        {
            y = val;
        }

        Point operator+ (const Point & p) const;
        Point & operator+= (const Point & p);

        friend Point operator+ (int x, const Point & p);
        friend Point operator+ (const Point & p, int x);

        double distance(const Point & p) const;
        friend double distance_bis(const Point & p1, const Point & p2);

        // friend std::ostream & graphics::operator<<(std::ostream & os, const Point & p);
    private:
        int x;
        int y;
};

extern ostream & operator<< (ostream & os, const Point & p);



#endif // POINT_H_INCLUDED
