#include <stdio.h>
#include <string.h>

enum bikes{
    road,
    mountain,
    bmx
};

// using the struct attribute packed prevents different
// compilers from changing the structure of the struct.
struct __attribute__((__packed__)) bicycle_t{
    int gears;
    int wheels;
    enum bikes kind;
    float age;
    char color[32];
};

int main(){
    struct bicycle_t myBike;
    myBike.gears = 10;
    myBike.wheels = 2;
    myBike.kind = mountain;
    myBike.age = 2.5;
    char color[] = "black";
    int colorSize = sizeof(color);
    memcpy(myBike.color, color, colorSize);
    printf("%f\n", myBike.age); // 2.5
}