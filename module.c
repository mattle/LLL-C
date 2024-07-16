#include <stdio.h>
#include "module.h"

int say_hello(char name[]){
    printf("Hello, %s!\n", name);
    return 0;
}