#include <iostream>
#include <vector>

#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "FigureSet.h"

using namespace std;

int main()
{
    FigureSet setOfFigures;

    Circle* circle = new Circle(5.0);
    Rectangle* rectangle = new Rectangle(4.0,6.0);
    Triangle* triangle = new Triangle(3.0,4.0,5.0);

    setOfFigures.addAFigure(circle);
    setOfFigures.addAFigure(rectangle);
    setOfFigures.addAFigure(triangle);

    cout << "Circle Area: " << circle->getArea() << ", Perimeter: " << circle->getPerimeter() << endl;
    cout << "Rectangle Area: " << rectangle->getArea() << ", Perimeter: " << rectangle->getPerimeter() << endl;
    cout << "Triangle Area: " << triangle->getArea() << ", Perimeter: " << triangle->getPerimeter() << endl;

    cout << "Summary area: " << setOfFigures.getSummaryArea() << endl;
    cout << "Summary perimeter: " << setOfFigures.getSummaryPerimeter() << endl;

    setOfFigures.removeAllFigures();

    cout << "Summary area: " << setOfFigures.getSummaryArea() << endl;
    cout << "Summary perimeter: " << setOfFigures.getSummaryPerimeter() << endl;

    return 0;
}
