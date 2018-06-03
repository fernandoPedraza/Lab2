#include <iostream>
#include <limits>
#include <memory>
using namespace std;
#include <cstring>
#include "Showroom.h"
#include "Vehicle.h"

#ifndef LAB2_DEALERSHIP_H
#define LAB2_DEALERSHIP_H


class Dealership {
private:
    string name;
    int ava , count;
    Showroom* sh;
    int pri;

public:
    Dealership(){};
    Dealership(string name , int ava );
    ~Dealership();

    void GetAveragePrice ();

    Showroom AddShowroom(Showroom* name);
    Showroom ShowInventory();

};
#endif //LAB2_DEALERSHIP_H
