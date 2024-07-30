#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) // without explicitly calling the base class constructor, the default constructor will be called
{
    this->length = length;
    this->width = width;
}

Rectangle::~Rectangle()
{
    //dtor
}

double Rectangle::getArea() const
{
    return length * width;
}

double Rectangle::getPerimeter() const
{
    return 2 * (length + width);
}
