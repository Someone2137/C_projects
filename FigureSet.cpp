#include "FigureSet.h"

FigureSet::FigureSet()
{
    //ctor
}

FigureSet::~FigureSet()
{
    removeAllFigures();
}

void FigureSet::addAFigure(Figure* figure)
{
    setOfFigures.push_back(figure);
}

void FigureSet::removeAllFigures()
{
    for( Figure* figure: setOfFigures )
    {
        delete figure;
    }
    setOfFigures.clear();
}


double FigureSet::getSummaryArea() const
{
    double summaryArea = 0.0;

    for( Figure* figure: setOfFigures )
    {
        summaryArea += figure->getArea();
    }
    return summaryArea;
}

double FigureSet::getSummaryPerimeter() const
{
    double summaryPerimeter = 0.0;

    for( Figure* figure: setOfFigures )
    {
        summaryPerimeter += figure->getPerimeter();
    }
    return summaryPerimeter;
}

Figure& FigureSet::operator[](int index) const
{
    if( int index = 0 || index >= setOfFigures.size() )
    {
        throw out_of_range("Index out of range.");
    }
    return *setOfFigures[index];
}
