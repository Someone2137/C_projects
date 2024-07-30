#include "Circle.h"

Circle::Circle(double radius, double pi)
{
    this->radius = radius;
    this->pi = pi;
}

Circle::~Circle()
{
    //dtor
}

double Circle::getArea() const
{
    return pi * radius * radius;
}

double Circle::getPerimeter() const
{
    return 2 * pi * radius;
}
