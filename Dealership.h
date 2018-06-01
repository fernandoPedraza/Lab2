#include <iostream>
#include <limits>
#include <memory>
using namespace std;
#include <cstring>
#include "Showroom.h"
#ifndef LAB2_DEALERSHIP_H
#define LAB2_DEALERSHIP_H


class Dealership {
private:
    string name;
    int ava , count;
    Showroom* sh;

public:
    Dealership(){};
    Dealership(string name , int ava );
    ~Dealership();


    Showroom AddShowroom(Showroom* name);
    Showroom ShowInventory();

};


#endif //LAB2_DEALERSHIP_H
