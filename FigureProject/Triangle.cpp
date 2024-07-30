#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double firstSide, double secondSide, double thirdSide)
{
    this->firstSide = firstSide;
    this->secondSide = secondSide;
    this->thirdSide = thirdSide;
}

Triangle::~Triangle()
{
    //dtor
}

double Triangle::getPerimeter() const
{
    return firstSide + secondSide + thirdSide;
}

double Triangle::getArea() const
{
    double s = getPerimeter() / 2;
    return sqrt(s * (s - firstSide) * (s - secondSide) * (s - thirdSide));
}
