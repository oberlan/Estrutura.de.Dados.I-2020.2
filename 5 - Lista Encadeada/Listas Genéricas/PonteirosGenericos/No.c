#include <stdio.h>
#include <stdlib.h>

#include "No.h"

No *criaNoRetangulo(double b, double h) {
    Retangulo *r = malloc(sizeof(Retangulo));
    r->b = b;
    r->h = h;

    No *no = malloc(sizeof(No));
    no->tipo = RET;
    no->objeto = r;
    no->proximo = NULL;
    return no;
}

No *criaNoTriangulo(double b, double h) {
    Triangulo *t = malloc(sizeof(Triangulo));
    t->b = b;
    t->h = h;

    No *no = malloc(sizeof(No));
    no->tipo = TRI;
    no->objeto = t;
    no->proximo = NULL;
    return no;
}

No *criaNoCirculo(double r) {
    Circulo *c = malloc(sizeof(Circulo));
    c->r = r;

    No *no = malloc(sizeof(No));
    no->tipo = CIRC;
    no->objeto = c;
    no->proximo = NULL;
    return no;
};

void liberaNo(No *no) {
    free(no->objeto);
    free(no);
    no = NULL;
}