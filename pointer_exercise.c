#include <stdio.h>
#include <string.h>

// something is wrong here :(
int swap( int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}