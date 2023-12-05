#include "CarShop.h"
#include "Utils.h"
#include <iostream>

CarShop::CarShop() {}

void CarShop::addCar(const Car& car) {
    inventory.push_back(car);
}

void CarShop::displayInventory() const {
    for (const auto& car : inventory) {
        car.displayInfo();
    }
}

void CarShop::run() {
    addCar(Car("Toyota Camry", 2022, 25000.0));
    addCar(Car("Honda Accord", 2023, 27000.0));
    addCar(Car("Ford Mustang", 2022, 35000.0));

    displayInventory();
}
