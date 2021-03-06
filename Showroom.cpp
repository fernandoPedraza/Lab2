#include <iostream>
#include <limits>
#include <memory>
using namespace std;
#include <cstring>
#include "Showroom.h"
#include "Vehicle.h"

Showroom::Showroom() {}
Showroom::Showroom(string name, int max){
    this->count=0;
    this->name=name;
    this->max=max;
    this->ve = new Vehicle[max];
    this->averager=0;
    this->counterAv=0;
};

string Showroom::getName() const{
    return this->name;

}
int Showroom::getMax()const{
    return this->max;
}

void Showroom::AddVehicle(const Vehicle *v){
    if(count>=max)
        return;

    ve[count]= *v;
    count++;
};

void Showroom::ShowInventory() const{
    for(int i=0; i<count; i++ ){
        ve[i].Display();
    };
};

const Vehicle* Showroom::GetVehicleList() const{
    return ve;
};

unsigned int Showroom::GetCapacity() const{
    return getMax();
};

unsigned int Showroom::GetCount() const{
    return count;
};
const char * Showroom::GetName() const {

   return Showroom::name.c_str();
}
void Showroom::getAvAlt(){
    for(int i=0; i<count; i++ ){
        averager=averager+ve[i].getPrice();
        counterAv=i;
    };
    cout<<"Average car price "<<averager/counterAv;
}
Showroom::~Showroom(){
    cout<< Showroom::getName()<<" destructor called"<<endl;
}