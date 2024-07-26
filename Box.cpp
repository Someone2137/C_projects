#include "Box.h"

int Box::numberOfBoxes = 0;

Box::Box(string label, int number)
{
    this->label = label;
    this->number = number;
    numberOfBoxes++;
}

Box::~Box()
{
    numberOfBoxes--;
}

int Box::count()
{
    return numberOfBoxes;
}
