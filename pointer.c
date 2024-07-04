#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int num = 42;
    int *pNum = &num;

    printf("%d\n",*pNum); // 42

    return 0;
}