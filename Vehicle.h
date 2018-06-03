
using namespace std;
#ifndef LAB2_VEHICLE_H
#define LAB2_VEHICLE_H


#include <string>

class Vehicle {
private:
    string make, model ;
    int year ,  miles , avPri;
    float price;
    int count;

public:
    Vehicle();
    Vehicle(string make , string model , int year , int price , int miles);
    ~Vehicle();

    string getMake() const;
    string getModel()const;
    int getYear()const;
    int getPrice()const;
    int getMiles()const;

    void Display() const;
    string GetYearMakeModel() const;
    float GetPrice() /*const*/;
    //void getAvAlt();
};


#endif //LAB2_VEHICLE_H
