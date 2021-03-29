#include <stdio.h>
#include <stdlib.h>

#include "Objetos.h"
#include "Lista.h"

int main() {
    Lista *lista = criaLista();
    Objeto obj;
    obj.r = (Retangulo){10, 10};
    insereFimLista(lista, RET, obj);
    obj.r = (Retangulo){15, 13};
    insereFimLista(lista, RET, obj);
    imprimeLista(lista);
    getchar();

    obj.t = (Triangulo){20, 10};
    insereFimLista(lista, TRI, obj);
    obj.t = (Triangulo){50, 25};
    insereFimLista(lista, TRI, obj);
    imprimeLista(lista);
    getchar();

    obj.c = (Circulo){15};
    insereFimLista(lista, CIRC, obj);
    imprimeLista(lista);
    getchar();

    insereFimLista(lista, RET, (Objeto)(Retangulo){11, 11});
    imprimeLista(lista);

    liberaLista(lista);
    return 0;
}