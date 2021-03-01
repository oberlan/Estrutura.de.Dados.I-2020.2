#ifndef CIRCULO_H
#define CIRCULO_H

typedef struct circulo Circulo;

Circulo* criaCirculo(double x, double y, double r);

void liberaCirculo(Circulo *c);

double areaCirculo(Circulo *c);

int interiorCirculo(Circulo *c, Ponto *p);

#endif