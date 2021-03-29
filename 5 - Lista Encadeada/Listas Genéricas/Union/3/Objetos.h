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


typedef struct {
    Tipo tipo;
    union /* Objeto será ou Retangulo ou Triangulo ou Circulo */
    {
        Retangulo r;
        Triangulo t;
        Circulo c;
    } objeto;
    
}Objeto;



#endif