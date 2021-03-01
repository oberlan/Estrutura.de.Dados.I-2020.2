#include <stdio.h>

#include "Ponto.h"

int main(){
    Ponto *p = cria(1.5, 2.8);
    double x, y;
    acessa(p, &x, &y);
    imprime(p);
    atribui(p, x, y+1.5);
    acessa(p, &x, &y);
    imprime(p);
    return 0;
}