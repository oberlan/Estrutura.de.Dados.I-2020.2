#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *x;
    int y = 2;
    x = &y;
    printf("%p %p\n", x, &y);
    printf("%d %d\n", *x, y);
    *x = 3; // y = 3
    printf("%d %d\n", *x, y);
    y = 5; // *x = 5
    printf("%d %d\n", *x, y);
    return 0;
}