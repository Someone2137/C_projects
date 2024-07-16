#ifndef FIGURESET_H
#define FIGURESET_H

#include<vector>
#include <stdexcept>

#include "Figure.h"

using namespace std;

class FigureSet
{
    public:
        FigureSet();
        virtual ~FigureSet();
        void addAFigure(Figure* figure);
        void removeAllFigures();
        double getSummaryArea()const;
        double getSummaryPerimeter()const;
        Figure& operator[](int index)const;

    protected:

    private:
        vector<Figure*> setOfFigures;
};

#endif // FIGURESET_H
