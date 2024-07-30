#include "BrickBox.h"

BrickBox::BrickBox(string label, int number, double length, double width, double height):
    Box(label,number), length(length), width(width), height(height)
{
    //ctor
}

BrickBox::~BrickBox()
{
    //dtor
}

double BrickBox::getCapacity()
{
    return length * width * height;
}
