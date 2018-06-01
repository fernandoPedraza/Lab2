#include <iostream>
#include <limits>
#include <memory>
using namespace std;
#include <cstring>
//#include "Showroom.h"
#include "Dealership.h"

Dealership::Dealership(string name, int ava) {
    this->count=0;
    this->name=name;
    this->ava=ava;
    this->sh = new Showroom[ava];
}

 Showroom Dealership::AddShowroom(Showroom* name){
     //if(count>=ava)
       //  return;

     sh[count]= *name;
     count++;
};

Showroom Dealership::ShowInventory(){
    for(int i=0; i<count; i++ ) {
        sh[i].Showroom::ShowInventory();
    }
}

Dealership::~Dealership(){};