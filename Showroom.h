#include <iostream>
using namespace std;
#include "Vehicle.h"
#ifndef LAB2_SHOWROOM_H
#define LAB2_SHOWROOM_H


class Showroom {
private:
    string name ;
    Vehicle* ve;
    int max;
    int count=0;
    int averager;
    int counterAv;

public:
    Showroom();
    Showroom(string name, int max);
    ~Showroom();
    string getName() const;
    int getMax() const;

    void getAvAlt();

    void AddVehicle(const Vehicle *v);
    void ShowInventory() const;

    const Vehicle* GetVehicleList() const;
    unsigned int GetCapacity() const;
    unsigned int GetCount() const;
    const char * GetName() const ;
};


#endif //LAB2_SHOWROOM_H
