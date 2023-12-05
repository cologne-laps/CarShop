#include "Car.h"
#include <iostream>

Car::Car(const std::string& model, int year, double price)
    : model(model), year(year), price(price) {}

void Car::displayInfo() const {
    std::cout << "Model: " << model << ", Year: " << year << ", Price: $" << price << std::endl;
}
