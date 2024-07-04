#include <stdio.h>
#include <stdbool.h>
#include <string.h>

enum fuel
{
    Gasoline,
    Diesel,
    Hydrogen,
    Electric,
    Coal,
    Nuclear
};

enum transmission
{
    Manual,
    Automatic
};

struct vehicle_t
{
    int wheels;
    enum fuel fuel;
    enum transmission transmission;
    float mpg;
    int year;
    char make[32];
    char model[32];
    bool registered;
};

struct vehicle_t new_vehicle(int wheels, enum fuel fuel, enum transmission transmission, float mpg, int year, char make[], int makeSize, char model[], int modelSize, bool registered)
{
    struct vehicle_t vehicle;
    vehicle.wheels = wheels;
    vehicle.fuel = fuel;
    vehicle.transmission = transmission;
    vehicle.mpg = mpg;
    vehicle.year = year;
    if(makeSize <= sizeof(vehicle.make)){
        memcpy(vehicle.make, make, makeSize);
    } else {
        memcpy(vehicle.make, make, sizeof(vehicle.make));
    }
    if(modelSize <= sizeof(vehicle.model)){
        memcpy(vehicle.model, model, modelSize);
    } else {
        memcpy(vehicle.model, model, sizeof(vehicle.model));
    }
    vehicle.registered = registered;
    return vehicle;
}

int main()
{
    char make[] = "Ram";
    char model[] = "1500";
    size_t makeSize = strlen(make) + 1;
    size_t modelSize = strlen(model) + 1;
    struct vehicle_t ourTruck = new_vehicle(4, Gasoline, Automatic, 15.5, 2016, make, makeSize, model, modelSize, true);
    printf("%s\n", ourTruck.model); // 1500
    return 0;
}
