#ifndef VETOR_H
#define VETOR_H

typedef struct vetor Vetor;

Vetor *criaVetor(int capacidade);

void liberaVetor(Vetor *v);

void insereNoFimVetor(Vetor *v, int valor);

Vetor *copiaVetor(Vetor *v);

void imprimeVetor(Vetor *v);

int tamanhoVetor(Vetor *v);

int capacidadeVetor(Vetor *v);


#endif