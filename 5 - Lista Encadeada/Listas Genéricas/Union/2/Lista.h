#ifndef __LISTA_H_
#define __LISTA_H_

#include "Objetos.h"

typedef struct no{
    Objeto dado;
    struct no *proximo;
} No;

typedef struct lista Lista;

Lista *criaLista();

void liberaLista(Lista *lista);

void insereInicioLista(Lista *lista, Objeto elem);

void insereFimLista(Lista *lista, Objeto elem);

void imprimeLista(Lista *lista);

int listaVazia(Lista *l);

int tamanhoLista(Lista *lista);




#endif