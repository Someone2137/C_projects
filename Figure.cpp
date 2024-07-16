#include "Figure.h"

using namespace std;

int Figure::counter = 0;

Figure::Figure()
{
    counter++;
}

Figure::~Figure()
{
    counter--;
}

//double Figure::getArea() const
//{
//    return 0;
//}
