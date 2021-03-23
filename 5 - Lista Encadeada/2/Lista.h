#ifndef __LISTA_H_
#define __LISTA_H_

typedef int TipoItem;

typedef struct no
{
    TipoItem dado;
    struct no *proximo;
} No;

typedef struct lista Lista;

Lista *criaLista();

void liberaLista(Lista *lista);

void insereInicioLista(Lista *lista, int elem);

void imprimeLista(Lista *lista);

void imprimeSeLista(Lista *lista, int (*compara)(int));

int listaVazia(Lista *l);

int tamanhoLista(Lista *lista);

No *primeiroElementoLista(Lista *lista);

No *ultimoElementoLista(Lista *lista);

void insereFimLista(Lista *lista, int elem);

No *n_esimo(Lista *lista, int n);

No *proximoNoLista(Lista *lista, No *p);

No *anteriorNoLista(Lista *lista, No *p);

No *procuraLista(Lista *lista, int valor);

void removeElementoLista(Lista *lista, int valor);

void removeNoLista(Lista *lista, No *p);

Lista *copiaLista(Lista *lista);

void insereMisteriosoLista(Lista *lista, int valor);

#endif