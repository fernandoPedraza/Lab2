
using namespace std;
#ifndef LAB2_VEHICLE_H
#define LAB2_VEHICLE_H


#include <string>

class Vehicle {
private:
    string make, model ;
    int year ,price ,  miles ;

public:
    Vehicle(string make , string model , int year , int price , int miles);
    string getMake();
    string getModel();
    int getYear();
    int getPrice();
    int getMiles();

};


#endif //LAB2_VEHICLE_H
