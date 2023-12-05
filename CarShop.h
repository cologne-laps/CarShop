#ifndef CARSHOP_H
#define CARSHOP_H

#include "Car.h"
#include <vector>

class CarShop {
public:
    CarShop();

    void addCar(const Car& car);
    void displayInventory() const;
    void run();

private:
    std::vector<Car> inventory;
};

#endif // CARSHOP_H
