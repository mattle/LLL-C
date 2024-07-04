#include <stdio.h>
#include <string.h>

// create a structure named 'struct Employee'
// it should have a name, and an age

struct Employee{
    char name[32];
    int age;
};

int main(int argc, char **argv) {

    // Initialize an employee, name him "Steve"
    // Steve is 42

    struct Employee emp = {.name = "Steve", .age = 42};

    // print his name and age
    printf("%s, aged %d years\n", emp.name, emp.age);

    return 0;

}