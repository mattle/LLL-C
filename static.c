#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct Employee_t{
    int id;
    float hourly;
    bool manager;
};

int initialize_employee(struct Employee_t *employee){
    static int numEmployees = 0;
    numEmployees++;
    employee->hourly = 25.44;
    employee->id = numEmployees;
    employee->manager = false;

    return numEmployees;
}

int main(){
    int numberEmployees = 3;
    struct Employee_t *employees = malloc(sizeof(struct Employee_t) * numberEmployees);
    if(employees == NULL){
        printf("Error: no memory allocated.\n");
        return -1;
    }
    for( int i = 0; i < numberEmployees; i++ ){
        int id = initialize_employee(&employees[i]);
        printf("New employee ID is %d\n", id);
    }
    free(employees);
    employees = NULL;
    return 0;
}