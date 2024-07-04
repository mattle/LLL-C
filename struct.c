#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum fuel{
    Gasoline,
    Diesel,
    Hydrogen,
    Electric,
    Coal,
    Nuclear
};

enum transmission{
    Manual,
    Automatic
};

struct vehicle_t{
    int wheels;
    enum fuel fuel;
    enum transmission transmission;
    float mpg;
    int year;
    char make[32];
    char model[32];
    bool registered;
};

struct vehicle_t new_vehicle(int wheels, enum fuel fuel, enum transmission transmission, float mpg, int year, char make[], char model[], bool registered){
    struct vehicle_t vehicle;
    vehicle.wheels = wheels;
    vehicle.fuel = fuel;
    vehicle.transmission = transmission;
    vehicle.mpg = mpg;
    vehicle.year = year;
    size_t lengthMake = strlcpy(vehicle.make, make, sizeof(vehicle.make));
    size_t lengthModel = strlcpy(vehicle.model, model, sizeof(vehicle.model));
    vehicle.registered = registered;
    return vehicle;
}

int main(){
    struct vehicle_t ourTruck = new_vehicle(4, Gasoline, Automatic, 15.5, 2016, "Ram", "1500", true);
    printf("%s\n",ourTruck.model); // 1500
    return 0;
}

