#include <stdio.h>
#include <stdlib.h>

// const int TAM = 10;
#define TAM 10

int main(int argc, char *argv[]) {

    int *x = malloc(sizeof(int));
    if (x == NULL){
        printf("malloc deu erro!\n");
        return 1;
    }
    x[0] = 13; //*x = 13 ==> *(x + 0) = 13
    int *y = x;

    printf("%p %p\n", x, y);
    printf("%d\n", x[0]); //*(i + x)
    printf("%d\n", y[0]);

    printf("%p\n", y);

    return 0;
}