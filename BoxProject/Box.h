#ifndef BOX_H
#define BOX_H

#include <string>

using namespace std;

class Box
{
    public:
        Box(string label, int number);
        virtual ~Box();

        string Getlabel() { return label; }
        void Setlabel(string val) { label = val; }
        int Getnumber() { return number; }
        void Setnumber(int val) { number = val; }
        static int count();
        virtual double getCapacity()=0;

    protected:

    private:
        string label;
        int number;
        static int numberOfBoxes;
};

#endif // BOX_H
