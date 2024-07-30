#ifndef BUBBLEBOX_H
#define BUBBLEBOX_H

#include "Box.h"


class BubbleBox : public Box
{
    public:
        BubbleBox(string label, int number, double radius);
        virtual ~BubbleBox();

        double Getradius() { return radius; }
        void Setradius(double val) { radius = val; }
        double getCapacity() override;

    protected:

    private:
        double radius;
};

#endif // BUBBLEBOX_H
