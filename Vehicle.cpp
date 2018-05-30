#include <string>
using namespace std;
#include "Vehicle.h"
#include <iostream>


// Created by PEDRAZA'S PC on 5/29/2018.
//

Vehicle::Vehicle(string make, string model, int year, float price, int miles) {

    this->make=make;
    this->model=model;
    this->year=year;
    this->price=price;
    this->miles=miles;
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
float Vehicle::getPrice() const{
    return this->price;
}
int Vehicle::getMiles() const{
    return this->miles;
}


void Vehicle::Display() const{
    string st = GetYearMakeModel()+" "+to_string(getPrice())+" "+ to_string(getMiles())+" ";
    cout<<st<<endl;
};

string Vehicle::GetYearMakeModel() const{
    string st = getYear()+" "+getMake()+" "+getModel()+" ";
    return st;
};

float Vehicle::GetPrice() const{
    return getPrice();

};
~Vehicle(){

}