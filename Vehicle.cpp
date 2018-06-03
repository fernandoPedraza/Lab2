#include <string>
using namespace std;
#include "Vehicle.h"
#include <iostream>


// Created by PEDRAZA'S PC on 5/29/2018.
//
Vehicle::Vehicle() {}
Vehicle::Vehicle(string make, string model, int year, int price, int miles) {

    this->make=make;
    this->model=model;
    this->year=year;
    this->price=price;
    this->miles=miles;
    this->avPri;
    this->count=0;
}

string Vehicle::getMake() const{
    return this->make;
}
string Vehicle::getModel()const{
    return this->model;
}
int Vehicle::getYear() const{
    return this->year;
}
int Vehicle::getPrice() const{
    return this->price;
}
int Vehicle::getMiles() const{
    return this->miles;
}


void Vehicle::Display() const{
    string st = GetYearMakeModel()+"  "+to_string(getPrice())+"  "+ to_string(getMiles())+"  ";
    cout<<st<<endl;
}

string Vehicle::GetYearMakeModel() const{
    string st = getYear()+"  "+getMake()+"  "+getModel();
    return st;
}

float Vehicle::GetPrice() /*const*/{

    return getPrice();

}
 /*   void Vehicle::getAvAlt(){
        for(int i=0; i<count; i++ ){
            ve[i].getAvAlt();
        };
   cout<<"Average car price "<<av;
    }*/
Vehicle::~Vehicle(){};