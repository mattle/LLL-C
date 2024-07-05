#include <stdio.h>

// something is right here! :)
int swap( int *a, int *b) {
    *a = *a + *b; // *a = 30 *b = 20
    *b = *a - *b; // *a = 30 *b = 10
    *a = *a - *b; // *a = 20 *b = 10
}
int main() {
    int x = 10, y = 20;
    printf("%d %d\n", x, y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}