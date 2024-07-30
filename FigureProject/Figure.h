#ifndef FIGURE_H
#define FIGURE_H


class Figure
{
    public:
        Figure();
        virtual ~Figure();
        virtual double getArea()const=0;
        virtual double getPerimeter()const=0;

    protected:

    private:
        static int counter;
};

#endif // FIGURE_H
