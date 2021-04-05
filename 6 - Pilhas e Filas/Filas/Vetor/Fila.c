#include <stdio.h>
#include <stdlib.h>

#include "Fila.h"

struct fila {
    int capacidade; //Tamanho do array F
    int ini;        //Posicao do "primeiro" elemento
    int fim;        //Posição livre onde um elemento deve ser inserido
    int n;          //Número de elementos na estrutura
    int *F;         //Array para armazenar os elementos
};


Fila *criaFila(int capacidade) {
    /*Verifique se o valor em capacidade é válido */
    /*Se for, inicialize n, ini e fim com 0 (indicando que a estrutura está vazia) */
    /*Aloque o array 'F' e retorne o ponteiro da estrutura */
    Fila *fila = malloc(sizeof(Fila));
    fila->ini = fila->fim = fila->n = 0;
    fila->capacidade = capacidade;
    fila->F = malloc(capacidade*sizeof(int));
    return fila;


}

void liberaFila(Fila *fila) {
    /* Faz a desalocação de memória */
    free(fila->F);
    free(fila);
    fila = NULL;
}

void enqueue(Fila *fila, int v) {
    /* Adiciona um elemento no fim do vetor */
    /* Lembre-se de verificar se há espaço para adicionar o elemento */
    /* Complexidade: O(1)  */
    if (fila->n < fila->capacidade - 1) {
        fila->n++;
        fila->F[fila->fim] = v;
        fila->fim = (fila->fim + 1) % fila->capacidade;
    }
    else {
        printf("ERRO: Fila cheia!\n");
    }
}

void dequeue(Fila *fila) {
    /* Retira o primeiro elemento*/
    /* Complexidade: O(1)  */
    if (!filaVazia(fila)) {
        fila->ini = (fila->ini + 1) % fila->capacidade;
        fila->n--;
    }
    else{
        printf("ERRO: Fila vazia!\n");
    }
}

int front(Fila *fila){
    /* Retorna o primeiro elemento */
    /* Complexidade: O(1)  */
    if (filaVazia(fila)) {
        printf("ERRO: Fila vazia!");
        return -1;
    }
    return fila->F[fila->ini];
}

int filaVazia(Fila *fila) {
    /* Verifica se a estrutura está vazia */
    /* Complexidade: O(1)  */
    return fila->n == 0; // fila->ini == fila->fim
}

int filaCheia(Fila *fila) {
    /* Verifica se a estrutura está cheia */
    /* Complexidade: O(1)  */

    return fila->n == fila->capacidade; // (fila->fim + 1) % fila->capacidade  == fila->ini;
}

int tamanhoFila(Fila *fila) {
    /* Retorna o número de elementos que a estrutura armazena */
    /* Complexidade: O(1)  */

    return fila->n;
}
