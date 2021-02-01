#include <stdio.h>
#include <stdlib.h>

struct ponto {
    double  x, y;
};
typedef struct ponto Ponto;

typedef struct pontoInt {
    int x, y;
} PontoInteiro;

int main(int argc, char *argv[]) {
    struct ponto p;
    Ponto p1;
    PontoInteiro pi;
    scanf("%d %d", &pi.x, &pi.y);
    printf("%d %d\n", pi.x, pi.y);
    return 0;
}