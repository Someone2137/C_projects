#include "TubeBox.h"

TubeBox::TubeBox(string label, int number, double radius, double height):
    Box(label,number), radius(radius), height(height)
{
    //ctor
}

TubeBox::~TubeBox()
{
    //dtor
}

double TubeBox::getCapacity()
{
        const double pi = 3.14;
        return pi * radius * radius * height;
}
