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
        No* t = atual->proximo;
        liberaNo(atual);         
        atual = t;
    }
    free(lista);
    lista = NULL;
}


void insereLista(Lista *lista, No *novo) {
    /* Insere um novo elemento no fim da lista
     *
     * Complexidade: O(1)
    */
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
    if (no->tipo == RET) {
        Retangulo *r = (Retangulo *)no->objeto;
        printf("** Retangulo **\n");
        printf(" -   Base: %.2lf\n", r->b);
        printf(" - Altura: %.2lf\n", r->h);
        printf(" -   Area: %.2lf\n", (r->h * r->b));
    }
    else if(no->tipo == TRI) {
        Triangulo *t = (Triangulo *)no->objeto;
        printf("** Triangulo **\n");
        printf(" -   Base: %.2lf\n", t->b);
        printf(" - Altura: %.2lf\n", t->h);
        printf(" -   Area: %.2lf\n", (t->h * t->b) / 2.0);
    }
    else if (no->tipo == CIRC) {
        Circulo *c = (Circulo *)no->objeto;
        printf("** Circulo **\n");
        printf(" - Raio: %.2lf\n", c->r);
        printf(" - Area: %.2lf\n", 2 * (c->r * c->r) * M_PI);
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

