#ifndef STORE_H
#define STORE_H

#include <string>
#include <vector>
#include <stdexcept>
#include <iomanip>
#include <sstream>

#include "Box.h"
#include "BrickBox.h"
#include "TubeBox.h"
#include "BubbleBox.h"

class Store
{
    public:
        Store(string description, double totalCapacity);
        virtual ~Store();

        string Getdescription() { return description; }
        void Setdescription(string val) { description = val; }
        double GettotalCapacity() { return totalCapacity; }
        void SettotalCapacity(double val) { totalCapacity = val; }
        void addFirst(Box* box);
        void addLast(Box* box);
        void removeFirst();
        void clear();
        double summaryVolume();
        friend ostream& operator<<(ostream& out, const Store& store);
        Box& operator[](int index);

        class CapacityError: public runtime_error
        {
            public:
                CapacityError(string message) : runtime_error(message)
                {

                }
        };

        class IndexError: public runtime_error
        {
            public:
                IndexError(string message) : runtime_error(message)
                {

                }
        };

    protected:

    private:
        string description;
        double totalCapacity;
        vector<Box*> listOfBoxes;
        double currentCapacity;
};

#endif // STORE_H
