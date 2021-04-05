#ifndef __TADP_H
#define __TADP_H

typedef struct pilha Pilha;

Pilha *criaPilha(int);

void liberaPilha(Pilha *);

void push(Pilha *, int);

void pop(Pilha *);

int top(Pilha *);

int pilhaVazia(Pilha *);

int pilhaCheia(Pilha *);

int tamanhoPilha(Pilha *);

#endif