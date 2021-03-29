#include <stdio.h>
#include <stdlib.h>

#include "Lista.h"

struct lista {
    No *inicio;
    No *fim;
    int n;
};

Lista *criaLista() {
    Lista *lista = malloc(sizeof(Lista));
    lista->inicio =  NULL;
    lista->inicio = lista->fim = NULL;
    lista->n = 0;
    return lista;
}

void liberaLista(Lista* lista) {
    No* atual = lista->inicio;
    while (atual != NULL) {
        No* t = atual->proximo; 
        free(atual);            
        atual = t;              
    }
    free(lista);
    lista = NULL;
}

void insereInicioLista(Lista *lista, int elem) {
    No *no = malloc(sizeof(No));
    no->dado = elem;
    no->proximo = lista->inicio;
    if(lista->fim == NULL)
        lista->fim = no;
    else 
        lista->inicio->anterior = no;
    lista->inicio = no;
    lista->n++;
}

int tamanhoLista(Lista *lista){
    /* Retorna o número de elementos da lista
     *
     * Complexidade: O(n)
    */
    return lista->n;
}

void insereFimLista(Lista *lista, int elem) {
    /* Insere um novo elemento no fim da lista
     *
     * Complexidade: O(1)
    */
    No *novo = malloc(sizeof(No));
    novo->dado = elem;
    novo->proximo = NULL;
    novo->anterior = lista->fim;
    if(lista->fim == NULL) 
        lista->inicio = novo;
    else 
        lista->fim->proximo = novo;
    lista->fim = novo;
    lista->n++;
}

No* primeiroElementoLista(Lista *lista) {
    /* Retorna uma referência para o primeiro no da lista
     *
     * Complexidade: O(1)
    */
    return lista->inicio;
}

No* ultimoElementoLista(Lista *lista) {
    /* Retorna uma referência para o último no da lista
     *
     * Complexidade: O(1)
    */
    return lista->fim;
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

void removeLista(Lista *lista, int valor) {

    if(listaVazia(lista)) return;

    No *p = procuraLista(lista, valor);
    if (p == NULL) // Nó não encontrado
        return;
    if (p == lista->inicio)
        lista->inicio = p->proximo;
    else
        p->anterior->proximo = p->proximo;
    if (p == lista->fim)
        lista->fim = p->anterior;
    else
        p->proximo->anterior = p->anterior;
    lista->n--;
    free(p);
}

void imprimeLista(Lista *lista) {
    No *atual = lista->inicio;
    while(atual != NULL){
    	printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int listaVazia(Lista *l){
    return (l->inicio == NULL);
}

void imprimeReversoLista(Lista *lista) {
    No *atual = lista->fim;
    while(atual != NULL){
    	printf("%d -> ", atual->dado);
        atual = atual->anterior;
    }
    printf("NULL\n");
}