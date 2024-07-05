#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct Employee_t{
    int id;
    float hourly;
    bool manager;
};

void initialize_employees(struct Employee_t *employee){
    employee->hourly = 25.44;
    employee->id = 7;
    employee->manager = false;
}

int main(){
    int numberEmployees = 3;
    struct Employee_t *employees = malloc(sizeof(struct Employee_t) * numberEmployees);
    if(employees == NULL){
        printf("Error: no memory allocated.\n");
        return -1;
    }
    initialize_employees(&employees[0]);
    printf("The employee's starting hourly wage is: %f\n", employees[0].hourly);
    free(employees);
    employees = NULL;
    return 0;
}