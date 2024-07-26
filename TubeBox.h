#ifndef TUBEBOX_H
#define TUBEBOX_H

#include "Box.h"


class TubeBox : public Box
{
    public:
        TubeBox(string label, int number, double radius, double height);
        virtual ~TubeBox();

        double Getradius() { return radius; }
        void Setradius(double val) { radius = val; }
        double Getheight() { return height; }
        void Setheight(double val) { height = val; }
        double getCapacity() override;

    protected:

    private:
        double radius;
        double height;
};

#endif // TUBEBOX_H
