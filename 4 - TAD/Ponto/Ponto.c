#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

#include "Ponto.h"

struct ponto {
    double x;
    double y;
};

Ponto *cria(double x, double y){
    Ponto *p = malloc(sizeof(Ponto));
    if (p == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void libera(Ponto *p){
    free(p);
}

void acessa(Ponto *p, double *x, double *y){
    *x = p->x;
    *y = p->y;
}

void atribui(Ponto *p, double x, double y){
    p->x = x;
    p->y = y;
}

double distancia(Ponto *p1, Ponto *p2){
    double dx = p2->x - p1->x;
    double dy = p2->y - p1->y;
    return sqrt(dx * dx + dy * dy);
}

void imprime(Ponto *p){
    printf("(%lf, %lf)\n", p->x, p->y);
}