#include "Store.h"

Store::Store(string description, double totalCapacity)
{
    this->description = description;
    this->totalCapacity = totalCapacity;
    currentCapacity = 0.0;
}

Store::~Store()
{
    //dtor
}

void Store::addFirst(Box* box)
{
    double remainingCapacity = totalCapacity - currentCapacity;
    if( currentCapacity + box->getCapacity() > totalCapacity )
    {
        ostringstream out;
        out << fixed << setprecision(1) << remainingCapacity;
        string message = box->Getlabel() + " too large - only " + out.str() + " free space";
        delete box;
        throw CapacityError(message);
    }

    listOfBoxes.insert(listOfBoxes.begin(), box);
    currentCapacity += box->getCapacity();
}

void Store::addLast(Box* box)
{
    double remainingCapacity = totalCapacity - currentCapacity;
    if( currentCapacity + box->getCapacity() > totalCapacity )
    {
        ostringstream out;
        out << fixed << setprecision(1) << remainingCapacity;
        string message = box->Getlabel() + " too large - only " + out.str() + " free space";
        delete box;
        throw CapacityError(message);
    }

    listOfBoxes.push_back(box);
    currentCapacity += box->getCapacity();
    return;
}

void Store::removeFirst()
{
    currentCapacity -= listOfBoxes[0]->getCapacity();
    delete listOfBoxes[0];
    listOfBoxes.erase(listOfBoxes.begin());
}

void Store::clear()
{
    while( !listOfBoxes.empty() )
    {
        delete listOfBoxes[0];
        listOfBoxes.erase(listOfBoxes.begin());
    }
    currentCapacity = 0.0;
}

double Store::summaryVolume()
{
    return currentCapacity;
}

ostream& operator<<(ostream& out, const Store& store)
{
    out << store.description << ", total capacity: " << store.totalCapacity << ", free space: " << setprecision(1) << fixed << store.totalCapacity - store.currentCapacity << ":\n";

    for (auto index = 0; index < store.listOfBoxes.size(); ++index)
    {
        out << index + 1 << ". " << store.listOfBoxes[index]->Getlabel() << ", " << store.listOfBoxes[index]->Getnumber() << ", volume: " << store.listOfBoxes[index]->getCapacity() << "\n";
    }
    return out;
}

Box& Store::operator[](int index)
{
    if (index == 0 || index > listOfBoxes.size())
    {
        throw IndexError("Item number " + to_string(index) + " not found.");
    }
    return *listOfBoxes[index - 1];
}


