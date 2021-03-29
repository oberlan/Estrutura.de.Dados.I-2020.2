#ifndef __OBJETOS_H_
#define __OBJETOS_H_

typedef enum tipo {
    RET,
    TRI,
    CIRC
} Tipo;

typedef struct retangulo {
    double b;
    double h;
} Retangulo;

typedef struct triangulo {
    double b;
    double h;
} Triangulo;

typedef struct circulo {
    double r;
} Circulo;

/* Objeto será ou Retangulo ou Triangulo ou Circulo */
typedef union obj {
    Retangulo r;
    Triangulo t;
    Circulo c;
} Objeto;



#endif