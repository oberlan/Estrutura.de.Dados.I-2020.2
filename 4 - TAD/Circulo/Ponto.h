#ifndef PONTO_H
#define PONTO_H

typedef struct ponto Ponto;

Ponto* criaPonto(double x, double y);

void liberaPonto(Ponto *p);

void acessaPonto(Ponto *p, double *x, double *y);

void atribuiPonto(Ponto *p, double x, double y);

double distanciaPonto(Ponto *p1, Ponto *p2);

void imprimePonto(Ponto *p);

#endif