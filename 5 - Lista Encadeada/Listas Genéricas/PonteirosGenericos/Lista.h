#ifndef __LISTA_H_
#define __LISTA_H_

#include "Objetos.h"
#include "No.h"

typedef struct lista Lista;

Lista *criaLista();

void liberaLista(Lista *lista);

No *criaNoCriculo(double);

void insereLista(Lista *lista, No*);

void imprimeLista(Lista *lista);

int listaVazia(Lista *l);

int tamanhoLista(Lista *lista);




#endif