#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    int one = 1;    
    printf("one: %d\n\n",one); // one

    int *pOne = &one; // a pointer to one
    printf("pOne: %p\n",pOne);  // the address of one
    printf("*pOne: %d\n\n",*pOne); // dereference pOne to get the value of one

    int **ppOne = &pOne; // a pointer to the pointer to one
    printf("ppOne: %p\n",ppOne); // the address of pOne
    printf("*ppOne: %p\n",*ppOne); // dereference ppOne to get the value of pOne
    printf("**ppOne: %d\n\n",**ppOne); // dereference ppOne twice to get the value of one
    
    return;
}