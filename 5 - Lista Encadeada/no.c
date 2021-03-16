#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *proximo;
}No;

int main() {
    No *primeiro = malloc(sizeof(No));
    No *segundo = malloc(sizeof(No));
    No *terceiro = malloc(sizeof(No));
    No *quarto = malloc(sizeof(No));

    primeiro->dado = 2;
    segundo->dado = 3;
    terceiro->dado = 5;
    quarto->dado = 7;

    printf("%d\n", primeiro->dado);
    printf("%d\n", segundo->dado);
    printf("%d\n", terceiro->dado);
    printf("%d\n", quarto->dado);

    primeiro->proximo = segundo;
    segundo->proximo = terceiro;
    terceiro->proximo = quarto;
    quarto->proximo = NULL;
    printf("\n\n");
    printf("%d\n", primeiro->dado);
    printf("%d\n", primeiro->proximo->dado);
    printf("%d\n", primeiro->proximo->proximo->dado);
    printf("%d\n", primeiro->proximo->proximo->proximo->dado);

    return 0;
}