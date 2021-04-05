#ifndef __FILA_H
#define __FILA_H

typedef struct fila Fila;

Fila *criaFila(int);

void liberaFila(Fila *);

void enqueue(Fila *, int v);

void dequeue(Fila *);

int front(Fila *);

int filaVazia(Fila *);

int filaCheia(Fila *);

int tamanhoFila(Fila *);

#endif