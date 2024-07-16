#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"


class Circle : public Figure
{
    public:
        Circle(double radius, double pi = 3.14);
        virtual ~Circle();

        double Getradius() { return radius; }
        void Setradius(double val) { radius = val; }
        double Getpi() { return pi; }
        void Setpi(double val) { pi = val; }
        double getArea()const;
        double getPerimeter()const;

    protected:

    private:
        double radius;
        double pi;
};

#endif // CIRCLE_H
