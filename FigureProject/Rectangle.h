#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"


class Rectangle : public Figure
{
    public:
        Rectangle(double length, double width);
        virtual ~Rectangle();

        double Getlength() { return length; }
        void Setlength(double val) { length = val; }
        double Getwidth() { return width; }
        void Setwidth(double val) { width = val; }
        double getArea()const override;
        double getPerimeter()const;

    protected:

    private:
        double length;
        double width;
};

#endif // RECTANGLE_H
