#include <stdio.h>
#include <stdlib.h>

#include "Vetor.h"

int main() {
    int n = 10;
    Vetor *v = criaVetor(n);
    printf("   Tamanho: %d\n", tamanhoVetor(v));
    printf("Capacidade: %d\n", capacidadeVetor(v));

    for(int i = 0; i < 5; i++)
        insereNoFimVetor(v, i + 1);
    imprimeVetor(v);

    Vetor *v1 = copiaVetor(v);
    imprimeVetor(v1);

    insereNoFimVetor(v, 123);

    printf("v = %p\n", v);
    Vetor *tmp = v;
    printf("tmp = %p\n", tmp);
    v = copiaVetor(v);
    liberaVetor(tmp);

    printf("%p\n", v);

    // insereNoFimVetor(v, 123);
    // insereNoFimVetor(v, 124);
    // insereNoFimVetor(v, 125);
    // imprimeVetor(v);

    // insereNoFimVetor(v1, -1);
    // insereNoFimVetor(v1, -2);
    // insereNofimVetor(v1, -3);
    // imprimeVetor(v1);

    // imprimeVetor(v);

    //Vetor *v1 = malloc(sizeof(Vetor));
    //liberaVetor(v1);

    liberaVetor(v);
    liberaVetor(v1);
    return 0;
}