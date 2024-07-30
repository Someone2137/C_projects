#include "BubbleBox.h"

BubbleBox::BubbleBox(string label, int number, double radius):
    Box(label,number), radius(radius)
{
    //ctor
}

BubbleBox::~BubbleBox()
{
    //dtor
}

double BubbleBox::getCapacity()
{
    const double pi = 3.14;
    return (2.0/3.0) * pi * radius * radius * radius;
}
