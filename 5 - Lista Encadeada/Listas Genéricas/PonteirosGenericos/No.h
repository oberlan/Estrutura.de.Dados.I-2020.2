#ifndef __NO_H_
#define __NO_H_

#include "Objetos.h"

typedef struct no{
    Tipo tipo;
    void* objeto;
    struct no *proximo;
} No;

No *criaNoRetangulo(double, double);

No *criaNoTriangulo(double, double);

No *criaNoCirculo(double);

void liberaNo(No *);

#endif