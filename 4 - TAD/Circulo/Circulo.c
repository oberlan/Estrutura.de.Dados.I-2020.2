#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Ponto.h"
#include "Circulo.h"

#define PI 3.1415

struct circulo {
    Ponto *p;
    double r;
};

Circulo *criaCirculo(double x, double y, double r){
    Circulo *c = malloc(sizeof(Circulo));
    if (c == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    c->p = criaPonto(x, y);
    c->r = r;
    return c;   
}

void liberaCirculo(Circulo *c){
    free(c);
}

double areaCirculo(Circulo *c){
    return PI * c->r * c->r;
}

int interiorCirculo(Circulo *c, Ponto *p) {
    double d = distanciaPonto(c->p, p);
    return (d < c->r);
}