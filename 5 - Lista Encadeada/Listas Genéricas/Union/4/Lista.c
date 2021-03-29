#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Lista.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

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
        No* t = atual->proximo; /* guarda referência para o próximo elemento */
        free(atual);            /* libera a memória apontada por atual */
        atual = t;              /* faz atual apontar para o próximo */
    }
    free(lista);
    lista = NULL;
}

void insereInicioLista(Lista *lista, Objeto elem) {
    No *no = malloc(sizeof(No));
    no->dado = elem;
    no->proximo = lista->inicio;
    if(lista->fim == NULL)
        lista->fim = no;
    lista->inicio = no;
    lista->n++;
}

void insereFimLista(Lista *lista, Objeto elem) {
    /* Insere um novo elemento no fim da lista
     *
     * Complexidade: O(1)
    */
    No *novo = malloc(sizeof(No));
    novo->dado = elem;
    novo->proximo = NULL;
    if(listaVazia(lista)) {
        lista->inicio = lista->fim = novo;
    }
    else {
        lista->fim->proximo = novo;
        lista->fim = novo;
    }
    lista->n++;
}

void imprimeNo(No *no) {
    if(no->dado.tipo == TRI) {
        Triangulo t = no->dado.triangulo;
        printf("** Triangulo **\n");
        printf(" -   Base: %.2lf\n", t.b);
        printf(" - Altura: %.2lf\n", t.h);
        printf(" -   Area: %.2lf\n", (t.h * t.b) / 2.0);
    }
    else if (no->dado.tipo == RET) {
        Retangulo r = no->dado.retangulo;
        printf("** Retangulo **\n");
        printf(" -   Base: %.2lf\n", r.b);
        printf(" - Altura: %.2lf\n", r.h);
        printf(" -   Area: %.2lf\n", (r.h * r.b));
    }
    else if (no->dado.tipo == CIRC) {
        Circulo c = no->dado.circulo;
        printf("** Circulo **\n");
        printf(" - Raio: %.2lf\n", c.r);
        printf(" - Area: %.2lf\n", 2 * (c.r * c.r)*M_PI);
    }
    else {
        printf("ERRO: Objeto desconhecido\n");
    }
}

void imprimeLista(Lista *lista){
    No *atual = lista->inicio;
    while(atual != NULL){
    	imprimeNo(atual);
        atual = atual->proximo;
    }
    printf("\n\n");
}


int listaVazia(Lista *l){
    return (l->inicio == NULL);
}

int tamanhoLista(Lista *lista){
    /* Retorna o número de elementos da lista
     *
     * Complexidade: O(1)
    */
    return lista->n;
}

