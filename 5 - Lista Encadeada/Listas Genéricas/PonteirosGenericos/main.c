#include <stdio.h>
#include <stdlib.h>

#include "Objetos.h"
#include "Lista.h"

int main() {
    Lista *lista = criaLista();
    insereLista(lista, criaNoRetangulo(10, 10));
    insereLista(lista, criaNoRetangulo(15, 13));
    imprimeLista(lista);
    getchar();

    insereLista(lista, criaNoTriangulo(20, 10));
    insereLista(lista, criaNoTriangulo(50, 25));
    imprimeLista(lista);
    getchar();

    insereLista(lista, criaNoCirculo(15));
    imprimeLista(lista);


    liberaLista(lista);
    return 0;
}