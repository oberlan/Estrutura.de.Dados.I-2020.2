#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *esq;
    struct no *dir;
}No;

No *criaNo(int v) {
    No *novo = malloc(sizeof(No));
    novo->dado = v;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

void imprime(No *r) {
    if (r) {
        printf("%d ", r->dado);
        imprime(r->esq);
        imprime(r->dir);
    }
}

void libera(No *r){
    if(r != NULL) {
        libera(r->esq);
        libera(r->dir);
        free(r);
    }
}

int pertence(No *r, int v) {
    if (r == NULL)
        return 0; //false
    if(r->dado == v)
        return 1; //true
    else if (pertence(r->esq, v))
        return 1;
    else 
        return pertence(r->dir, v);
}

int altura(No *r) {
    if(r == NULL)
        return -1;
    int hSAE = altura(r->esq);
    int hSAD = altura(r->dir);
    if (hSAE > hSAD)
        return hSAE + 1;
    else
        return hSAD + 1;
}

int main() {
    No *raiz = criaNo(1);
    printf("Altura: %d\n", altura(raiz)); //0
    raiz->esq = criaNo(2);
    raiz->dir = criaNo(3);
    raiz->esq->esq = criaNo(4);
    raiz->dir->esq = criaNo(5);
    imprime(raiz);

    printf("\n5? %d\n", pertence(raiz, 5));
    printf("6? %d\n", pertence(raiz, 6));
    printf("Altura: %d\n", altura(raiz)); //2

    libera(raiz);
    return 0;
}