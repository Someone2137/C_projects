#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"


class Triangle : public Figure
{
    public:
        Triangle(double firstSide, double secondSide, double thirdSide);
        virtual ~Triangle();

        double GetFirstSide() { return firstSide; }
        void SetFirstSide(double val) { firstSide = val; }
        double GetSecondSide() { return secondSide; }
        void SetSecondSide(double val) { secondSide = val; }
        double GetThirdSide() { return thirdSide; }
        void SetThirdSide(double val) { thirdSide = val; }
        double getArea()const;
        double getPerimeter()const;

    protected:

    private:
        double firstSide;
        double secondSide;
        double thirdSide;
};

#endif // TRIANGLE_H
