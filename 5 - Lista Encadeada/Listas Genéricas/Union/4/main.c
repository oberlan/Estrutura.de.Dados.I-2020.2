#include <stdio.h>
#include <stdlib.h>

#include "Objetos.h"
#include "Lista.h"

int main() {
    Lista *lista = criaLista();
    Objeto obj;
    obj = (Objeto){.tipo = RET, .retangulo = (Retangulo){11, 10}};
    insereFimLista(lista, obj);
    obj = (Objeto){RET, .retangulo = {15, 13}};
    insereFimLista(lista, obj);
    imprimeLista(lista);
    getchar();

    obj = (Objeto){TRI, .triangulo = {20, 10}};
    insereFimLista(lista, obj);
    obj = (Objeto){TRI, .triangulo = {50, 25}};
    insereFimLista(lista, obj);
    imprimeLista(lista);
    getchar();

    obj= (Objeto){CIRC, .circulo = {15}};
    insereFimLista(lista, obj);
    imprimeLista(lista);
    getchar();

    insereFimLista(lista, (Objeto){RET, .retangulo = {11, 11}});
    imprimeLista(lista);

    liberaLista(lista);
    return 0;
}