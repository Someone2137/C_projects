#ifndef BRICKBOX_H
#define BRICKBOX_H

#include "Box.h"


class BrickBox : public Box
{
    public:
        BrickBox(string label, int number, double length, double width, double height);
        virtual ~BrickBox();

        double Getlength() { return length; }
        void Setlength(double val) { length = val; }
        double Getwidth() { return width; }
        void Setwidth(double val) { width = val; }
        double Getheight() { return height; }
        void Setheight(double val) { height = val; }
        double getCapacity() override;

    protected:

    private:
        double length;
        double width;
        double height;
};

#endif // BRICKBOX_H
