#include <stdio.h>
#include <stdlib.h>

typedef enum{
    false,
    true
} bool;


int main(int argc, char *argv[]) {
    bool x;
    x = true;
    if (x) {
        printf("OK\n");
    }
    return 0;
}