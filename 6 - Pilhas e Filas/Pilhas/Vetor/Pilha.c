#include <stdio.h>
#include <stdlib.h>

#include "Pilha.h"

struct pilha {
    int capacidade; 
    int t;          
    int *P;         
};

Pilha *criaPilha(int capacidade) {
    /*Verifique se o valor em capacidade é válido */
    /*Se for, inicialize n com -1 (indicando que a estrutura está vazia) */
    /*Aloque o array 'P' e retorne o ponteiro da estrutura */
    Pilha *pilha = malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha->t = -1;
    pilha->P = malloc(sizeof(int)*capacidade);
    return pilha;
}

void liberaPilha(Pilha *pilha) {
    /* Faz a desalocação de memória */
    free(pilha->P);
    free(pilha);
    pilha = NULL;
}

void push(Pilha *pilha, int v) {
    /* Adiciona um elemento no fim do vetor */
    /* Lembre-se de verificar se há espaço para adicionar o elemento */
    /* Complexidade: O(1)  */     

    if (pilha->t < pilha->capacidade - 1){
        pilha->t++;
        pilha->P[pilha->t] = v;
    }
    else{
        printf("ERRO: Pilha cheia!\n");
    }

}

void pop(Pilha *pilha) {
    /* Retira o ultimo elemento*/
    /* Complexidade: O(1)  */
    if (pilhaVazia(pilha)) {
        printf("ERRO: Pilha Vazia!");
    }
    else{
        pilha->t--;
    }
}

int top(Pilha *pilha){
    /*Retorna o elemento ultimo */
    /* Complexidade: O(1)  */
    if(pilhaVazia(pilha)) {
        printf("ERRO: Pilha Vazia!");
        return -1;
    }
    return pilha->P[pilha->t];
}

int pilhaVazia(Pilha *pilha) {
    /* Verifica se a estrutura possui algum elemento ou está vazia */
    /* Complexidade: O(1)  */
    return pilha->t == -1;
}

int pilhaCheia(Pilha *pilha) {
    /* Verifica se a estrutura está cheia */
    /* Complexidade: O(1)  */
    return pilha->t == pilha->capacidade;
}

int tamanhoPilha(Pilha *pilha) {
    /* Retorna o número de elementos que a estrutura armazena */
    /* Complexidade: O(1)  */
    return pilha->t + 1;
}
