#include <iostream>

#include "Box.h"
#include "BrickBox.h"
#include "TubeBox.h"
#include "BubbleBox.h"
#include "Store.h"

using namespace std;

int main()
{
    Store store("My home store", 100);
    cout << "Number of boxes: " << Box::count() << endl; //0
    try
    {
        store.addFirst(new BrickBox("books", 1234, 5, 3.5, 4)); //5 x 3.5 x 4
        store.addFirst(new TubeBox("posters", 2234, 1, 3)); //radius=1, height=3
        store.addLast(new BubbleBox("sweets", 5413, 1)); //radius=1
        store.addLast(new BrickBox("jewels", 2114, 2, 2, 2)); //2 x 2 x 2
        store.addFirst(new BrickBox("trinkets", 3456, 3, 4, 1)); //3 x 4 x 1
    }
    catch(Store::CapacityError &e)
    {
        cout << e.what() << endl; //trinkets too large - only 10.5 free space
    }
        cout << store;
        //My home store, total capacity: 100.0, free space: 10.5:
        //1. posters, 2234, volume: 9.4
        //2. books, 1234, volume: 70.0
        //3. sweets, 5413, volume: 2.1
        //4. jewels, 2114, volume: 8.0
        cout << "Number of boxes: "  << Box::count() << endl; //4
        cout << "Summary volume: " << store.summaryVolume() << endl; //89.5
        store.removeFirst();
        cout << "Number of boxes: "  << Box::count() << endl; //3
        cout << "Summary volume: " << store.summaryVolume() << endl; //80.1
    try
    {
        cout << store[1].getCapacity() << endl; //70.0
        cout << store[5].getCapacity() << endl; //IndexError exception
    }
    catch(Store::IndexError &e)
    {
        cout << e.what(); //item no. 5 not found
    }
    store.clear();
    cout << "Number of boxes: "  << Box::count(); //0

    return 0;
}
