#include <iostream>
#include <limits>
#include <memory>
using namespace std;
#include <cstring>
#include "Dealership.h"
#include "Vehicle.h"

Dealership::Dealership(string name, int ava) {
    this->count=0;
    this->name=name;
    this->ava=ava;
    this->sh = new Showroom[ava];
    this->pri;
}

 Showroom Dealership::AddShowroom(Showroom* name){
     //if(count>=ava)
       //  return;
Showroom v;
     sh[count]= *name;
     count++;
     return v;
}

Showroom Dealership::ShowInventory(){
    Showroom t;
    for(int i=0; i<count; i++ ) {
        sh[i].Showroom::ShowInventory();
    }
    return t;
}
void Dealership::GetAveragePrice (){

    //Vehicle::getAvAlt();
}

Dealership::~Dealership(){
    cout<< Dealership::name<<" destructor called"<<endl;
};