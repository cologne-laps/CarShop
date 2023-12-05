#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    Car(const std::string& model, int year, double price);

    void displayInfo() const;

private:
    std::string model;
    int year;
    double price;
};

#endif // CAR_H
