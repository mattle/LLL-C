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
    bool registered;
};

struct vehicle_t new_vehicle(int wheels, enum fuel fuel, enum transmission transmission, float mpg, int year, bool registered)
{
    struct vehicle_t vehicle = {
        .wheels = wheels,
        .fuel = fuel,
        .transmission = transmission,
        .mpg = mpg,
        .year = year,
        .registered = registered
    };
    return vehicle;
}

int main()
{
    char make[] = "Ram";
    char model[] = "1500";
    size_t makeSize = strlen(make) + 1;
    size_t modelSize = strlen(model) + 1;
    struct vehicle_t ourTruck = new_vehicle(4, Gasoline, Automatic, 15.5, 2016, true);
    printf("%f\n", ourTruck.mpg); // 15.500000
    return 0;
}
