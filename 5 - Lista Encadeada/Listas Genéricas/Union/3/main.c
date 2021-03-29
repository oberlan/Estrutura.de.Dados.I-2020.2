#include <stdio.h>
#include <stdlib.h>

#include "Objetos.h"
#include "Lista.h"

int main() {
    Lista *lista = criaLista();
    Objeto obj;
    obj = (Objeto){.tipo = RET, .objeto.r = (Retangulo){11, 10}};
    insereFimLista(lista, obj);
    obj = (Objeto){RET, .objeto.r = {15, 13}};
    insereFimLista(lista, obj);
    imprimeLista(lista);
    getchar();

    obj = (Objeto){TRI, .objeto.t = {20, 10}};
    insereFimLista(lista, obj);
    obj = (Objeto){TRI, .objeto.t = {50, 25}};
    insereFimLista(lista, obj);
    imprimeLista(lista);
    getchar();

    obj= (Objeto){CIRC, .objeto.c = {15}};
    insereFimLista(lista, obj);
    imprimeLista(lista);
    getchar();

    insereFimLista(lista, (Objeto){RET, .objeto.r = {11, 11}});
    imprimeLista(lista);

    liberaLista(lista);
    return 0;
}