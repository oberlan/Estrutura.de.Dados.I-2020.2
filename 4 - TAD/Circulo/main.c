#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "Ponto.h"
#include "Circulo.h"

int main() {
    int a = 16;
    Ponto *p = criaPonto(10.5, 11.8);
    imprimePonto(p);


    Circulo *c = criaCirculo(0, 0, 2);
    printf("Area circulo: %lf\n", areaCirculo(c));

    Ponto *p1 = criaPonto(3, 3);
    if (interiorCirculo (c, p1))
        printf("Está no interior\n");  
    else  {
        printf("Não está no interior\n");
    }

    liberaPonto(p);
    liberaPonto(p1);
    liberaCirculo(c);
    return 0;
}