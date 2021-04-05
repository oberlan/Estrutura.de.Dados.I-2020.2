#include <stdio.h>
#include <stdlib.h>

#include "Fila.h"

typedef struct no {
    int dado;
    struct no *proximo;
} No;

struct fila {
    No *inicio;
    No *fim;
    int n;
};


Fila *criaFila() {
    /*Verifique se o valor em capacidade é válido */
    Fila *fila = malloc(sizeof(Fila));
    fila->inicio = fila->fim = NULL;
    fila->n = 0;
    return fila;
}

void liberaFila(Fila *fila) {
    /* Faz a desalocação de memória */
    No *aux = fila->inicio;
    while(aux) {
        No *t = aux->proximo;
        free(aux);
        aux = t;
    }
    free(fila);
    fila = NULL;
}

void enqueue(Fila *fila, int v) {
    /* Adiciona um elemento no fim do fila */
    /* Complexidade: O(1)  */       
    No *novo = malloc(sizeof(No));
    novo->dado = v;
    novo->proximo = NULL;
    if(filaVazia(fila))
        fila->inicio = novo;
    else
        fila->fim->proximo = novo;

    fila->fim = novo;
    fila->n++;
}

void dequeue(Fila *fila) {
    /* Retira o primeiro elemento */
    /* Complexidade: O(1)  */
    if (!filaVazia(fila)) {
        No *tmp = fila->inicio;
        fila->inicio = fila->inicio->proximo;
        fila->n--;
        free(tmp);
    }
    else
        printf("ERRO: Fila vazia!\n");
}

int front(Fila *fila){
    /*Retorna o primeiro elemento */
    /* Complexidade: O(1)  */
    if(filaVazia(fila)){
        printf("ERRO: Fila vazia!");
        return -1;
    }
    else
        return fila->inicio->dado;
}

int filaVazia(Fila *fila) {
    /* Verifica se a estrutura está vazia */
    /* Complexidade: O(1)  */
    return fila->n == 0; 
}

int filaCheia(Fila *fila) {
    /* Verifica se a estrutura está cheia */
    /* Complexidade: O(1)  */

    return 0;
}

int tamanhoFila(Fila *fila) {
    /* Retorna o número de elementos que a estrutura armazena */
    /* Complexidade: O(1)  */

    return fila->n;
}
