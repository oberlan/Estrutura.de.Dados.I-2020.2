#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *proximo;
}No;

int main() {
    No *primeiro = malloc(sizeof(No));
    primeiro->dado = 2;
    primeiro->proximo = malloc(sizeof(No));
    primeiro->proximo->dado = 3;
    primeiro->proximo->proximo = malloc(sizeof(No));
    primeiro->proximo->proximo->dado = 5;
    primeiro->proximo->proximo->proximo = malloc(sizeof(No));
    primeiro->proximo->proximo->proximo->dado = 7;
    primeiro->proximo->proximo->proximo->proximo = NULL;

    printf("%d\n", primeiro->dado);
    printf("%d\n", primeiro->proximo->dado);
    printf("%d\n", primeiro->proximo->proximo->dado);
    printf("%d\n", primeiro->proximo->proximo->proximo->dado);

    return 0;
}