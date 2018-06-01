
using namespace std;
#ifndef LAB2_VEHICLE_H
#define LAB2_VEHICLE_H


#include <string>

class Vehicle {
private:
    string make, model ;
    int year ,  miles ;
    float price;

public:
    Vehicle();
    Vehicle(string make , string model , int year , float price , int miles);
    ~Vehicle();

    string getMake() const;
    string getModel()const;
    int getYear()const;
    float getPrice()const;
    int getMiles()const;

    void Display() const;
    string GetYearMakeModel() const;
    float GetPrice() const;

};


#endif //LAB2_VEHICLE_H
