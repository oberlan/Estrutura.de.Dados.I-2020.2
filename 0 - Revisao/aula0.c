#include <stdio.h>
#include <stdlib.h>

// const int TAM = 10;
#define TAM 10

int main(int argc, char *argv[]) {
    
    int t;
    printf("Tamanho: ");
    scanf("%d", &t);
    int v[t];
    v[t-1] = 13;
    t++;
    printf("%d\n", v[t-1]);

    int *x = malloc(10*sizeof(int));
    if (x == NULL){
        printf("malloc deu erro!\n");
        return 1;
    }

    int i = 1;
    x[i] = 10; // x[0] = 10
    x[1] = 11;
    
    printf("%d\n", x[i]); //*(i + x)
    printf("%d\n", x[1]); //x[1]

    free(x);
    return 0;
}