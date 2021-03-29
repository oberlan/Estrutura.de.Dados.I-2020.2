#include <stdio.h>
#include <stdlib.h>

#include "Lista.h"

struct lista {
    No *inicio;
    // No *fim;
    // int n;
};

Lista *criaLista() {
    Lista *lista = malloc(sizeof(Lista));
    lista->inicio =  NULL;
    //lista->inicio = lista->fim = NULL;
    // lista->n = 0;
    return lista;
}

void liberaLista(Lista* lista) {
    No* atual = lista->inicio;
    while (atual != NULL) {
        No* t = atual->proximo; /* guarda referência para o próximo elemento */
        free(atual);            /* libera a memória apontada por atual */
        atual = t;              /* faz atual apontar para o próximo */
    }
    free(lista);
    lista = NULL;
}

void insereInicioLista(Lista *lista, int elem) {
    No *no = malloc(sizeof(No));
    no->dado = elem;
    no->proximo = lista->inicio;
    // if(lista->fim == NULL)
    //     lista->fim = no;
    lista->inicio = no;
    // lista->n++;
}

void imprimeLista(Lista *lista){
    No *atual = lista->inicio;
    while(atual != NULL){
    	printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

void imprimeSeLista(Lista *lista, int (*compara)(int)){
    No *atual = lista->inicio;
    while(atual != NULL){
        if(compara(atual->dado))
    	    printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int listaVazia(Lista *l){
    return (l->inicio == NULL);
}

int tamanhoLista(Lista *lista){
    /* Retorna o número de elementos da lista
     *
     * Complexidade: O(n)
    */
    // return lista->n;

    No *aux = lista->inicio;
    int t = 0;
    while(aux != NULL) {
        t++;
        aux = aux->proximo;
    }
    return t;
}

void insereFimLista(Lista *lista, int elem) {
    /* Insere um novo elemento no fim da lista
     *
     * Complexidade: O(n)
    */
    // No *novo = malloc(sizeof(No));
    // novo->dado = elem;
    // novo->proximo = NULL;
    // if(listaVazia(lista)) {
    //     lista->inicio = lista->fim = novo;
    // }
    // else {
    //     lista->fim->proximo = novo;
    //     lista->fim = novo;
    // }
    // lista->n++;


    No *novo = malloc(sizeof(No));
    novo->dado = elem;
    novo->proximo = NULL;
    if(listaVazia(lista)) {
        lista->inicio = novo;
    }
    else {
        No *aux = lista->inicio;
        while(aux->proximo != NULL) {
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
}

No* primeiroElementoLista(Lista *lista){
    /* Retorna uma referência para o primeiro no da lista
     *
     * Complexidade: O(1)
    */
    return lista->inicio;
}

No* ultimoElementoLista(Lista *lista){
    /* Retorna uma referência para o último no da lista
     *
     * Complexidade: O(n)
    */
    if(listaVazia(lista)) return NULL;
    No *aux = lista->inicio;
    while(aux->proximo != NULL) {
        aux = aux->proximo;
    }
    return aux;
    return NULL;
}


No* proximoNoLista(Lista *lista, No *p){
    /* Retorna uma referência para o nó posterior àquele referenciado por p
     *
     * Complexidade: O(n)
    */
    if(listaVazia(lista)) return NULL;

    No *aux = lista->inicio;
    while(aux != p)
        aux = aux->proximo;
    return aux->proximo;
    return NULL;
}

No* anteriorNoLista(Lista *lista, No *p){
    /* Retorna uma referência para o nó anterior àquele referenciado por p
     *
     * Complexidade: O(n)
    */
    if(listaVazia(lista)) return NULL;
    // No *aux = lista->inicio;
    // No *anterior = NULL;
    // while(aux != p) {
    //     anteior = aux;
    //     aux = aux->proximo;

    // }
    // return anterior;
    No *aux = lista->inicio;
    while(aux->proximo != p)
        aux = aux->proximo;
    return aux;
    return NULL;
}

No* n_esimo(Lista *lista, int n) {
    /* Retorna uma referência para o n-esimo nó da lista
     *
     * Complexidade: O(??)
    */
    return NULL;
}

No* procuraLista(Lista *lista, int valor){
    /* Retorna uma referência para o nó tal que no->dado == valor
     *
     * Complexidade: O(n)
    */
    for (No *p = lista->inicio; p != NULL; p = p->proximo)
        if (p->dado == valor)
            return p;
    return NULL;

    /*
    if(listaVazia(lista)) return NULL;

    No *aux = lista->inicio;
    while(aux && aux->dado != valor)
        aux = aux->proximo;
    return aux;
    */
}

void removeElementoLista(Lista *lista, int valor){
    /* Remove os nós tal que no->dado == valor
     *
     * Complexidade: O(n)
    */
    if(listaVazia(lista)) return;

    No *p = lista->inicio;
    No *anterior = NULL;

    while(p) {
        if(p->dado == valor) {
            if(p == lista->inicio) { //Primeiro nó
                lista->inicio = lista->inicio->proximo;
                free(p);
                p = lista->inicio;
            }
            else if(p->proximo == NULL) { //Ultimo nó
                anterior->proximo = NULL;
                free(p);
                p = NULL;
            }
            else {
                anterior->proximo = p->proximo;
                free(p);
                p = anterior->proximo;
            }
        }
        else {
            anterior = p;
            p = p->proximo;
        }
    }

    //Complexidade: O(n^2)
    // No *p = lista->inicio;
    // if (p->dado == valor) {
    //     lista->inicio = lista->inicio->proximo;
    //     free(p);
    // }
    // p = procuraLista(lista, valor);
    // while(p) {
    //     No *anterior = anteriorNoLista(lista, p);
    //     anterior->proximo = p->proximo;
    //     free(p);
    //     p = procuraLista(lista, valor);
    // }
}

void removeNoLista(Lista *lista, No* p) {
    /* Remove o nó referenciado por p
     *
     * Complexidade: O(n)
    */
    if(listaVazia(lista)) return;

    No *aux = lista->inicio;
    No *anterior = NULL;

    while (aux && aux != p) {
        anterior = aux;
        aux = aux->proximo;
    }

    if(aux == NULL){
        return;
    }
    if(aux == lista->inicio /*ou anterior == NULL*/) {
        lista->inicio = lista->inicio->proximo;
        free(aux);
    }
    else if(aux->proximo == NULL) {
        anterior->proximo = NULL;
        free(aux);
    }
    else {
        anterior->proximo = aux->proximo;
        free(aux);
    }



}

Lista * copiaLista(Lista *lista) {
    /* Retorna um cópia da lista.
     *
     * Complexidade: O(??)
    */
    return NULL;
}

void insereMisteriosoLista(Lista *lista, int valor) {
    /* Insere ...
     *
     * Complexidade: O(n)
    */
    No *no = malloc(sizeof(No));
    no->dado = valor;
    no->proximo = NULL;
    if(listaVazia(lista)) {
        no->proximo = lista->inicio;
        lista->inicio = no;
    }
    else {
        No *atual = lista->inicio;
        No *anterior = NULL;
        while (atual && atual->dado < no->dado){
            anterior = atual;
            atual = atual->proximo;
        }
        if (anterior == NULL) {
            no->proximo = lista->inicio;
            lista->inicio = no;
        }
        else if (atual == NULL) {
            anterior->proximo = no;
        }
        else {
            anterior->proximo = no;
            no->proximo = atual;
        }
    }
}