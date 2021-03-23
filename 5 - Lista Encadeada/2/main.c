#include <stdio.h>
#include <stdlib.h>

#include "Lista.h"

int ehPar(int x) {
    return x%2 == 0;
}

int ehImpar(int x) {
    return x%2 != 0;
}

int main() {
    /** Exercício 1 **/
    printf("** Exercício 1 **\n");
    Lista *lista1 = criaLista();
    insereInicioLista(lista1, 1);
    insereInicioLista(lista1, 2);
    insereInicioLista(lista1, 3);
    insereInicioLista(lista1, 3);
    insereInicioLista(lista1, 3);
    insereInicioLista(lista1, 4);
    insereInicioLista(lista1, 5);
    imprimeLista(lista1);
    imprimeSeLista(lista1, ehPar);
    imprimeSeLista(lista1, ehImpar);
    // imprimeLista(lista1);
    // printf("Tamanho da lista: %d\n\n", tamanhoLista(lista1));
    // liberaLista(lista1);
    /*****************/

    /** Exercicio 2 **/
    // printf("** Exercício 2 **\n");
    // Lista *lista2 = criaLista();
    // insereInicioLista(lista2, 1);
    // insereInicioLista(lista2, 2);
    // insereInicioLista(lista2, 3);
    // insereInicioLista(lista2, 3);
    // insereInicioLista(lista2, 3);
    // insereInicioLista(lista2, 4);
    // insereInicioLista(lista2, 5);
    // printf("Inserido 6 no fim da lista\n");
    // insereFimLista(lista2, 6);
    // imprimeLista(lista2);
    // printf("Inserido 7 no fim da lista\n");
    // insereFimLista(lista2, 7);
    // imprimeLista(lista2);
    // printf("Inserido 8 no fim da lista\n");
    // insereFimLista(lista2, 8);
    // imprimeLista(lista2);
    // liberaLista(lista2);
    // printf("\nCriando uma lista vazia\n");
    // Lista *lex2 = criaLista();
    // imprimeLista(lex2);
    // printf("Inserido 123 no fim da lista (vazia)\n");
    // insereFimLista(lex2, 123);
    // imprimeLista(lex2);
    // printf("Inserido 456 no fim da lista\n");
    // insereFimLista(lex2, 456);
    // imprimeLista(lex2);
    // printf("Inserido 789 no fim da lista\n");
    // insereFimLista(lex2, 789);
    // imprimeLista(lex2);
    // liberaLista(lex2);
    /*****************/

    /** Exercício 3 **/
    // printf("** Exercício 3 **\n");
    // Lista *lista3 = criaLista();
    // No *uL3 = ultimoElementoLista(lista3);
    // if (uL3 != NULL) {
    //     printf("Sua função ultimoElementoLista não está correta!\n");
    //     printf("Ela encontou o nó com a seguinte informação no->dado = %d", uL3->dado);
    // }
    // else {
    //     printf("Parece que a função ultimoElementoLista está correta!\n");
    // }
    // insereFimLista(lista3, 3);
    // insereFimLista(lista3, 2);
    // imprimeLista(lista3);
    // uL3 = ultimoElementoLista(lista3);
    // printf("Informação do último nó: %d\n", uL3->dado);
    // liberaLista(lista3);
    /*****************/

    /** Exercício 4 **/
    // printf("** Exercício 4 **\n");
    // Lista *lista4 = criaLista();
    // insereInicioLista(lista4, 1);
    // insereInicioLista(lista4, 2);
    // insereInicioLista(lista4, 3);
    // insereInicioLista(lista4, 3);
    // insereInicioLista(lista4, 3);
    // insereInicioLista(lista4, 4);
    // insereInicioLista(lista4, 5);
    // insereFimLista(lista4, 6);
    // insereFimLista(lista4, 7);
    // insereFimLista(lista4, 8);
    // imprimeLista(lista4);
    // No *primeiro = primeiroElementoLista(lista4);
    // No *ultimo = ultimoElementoLista(lista4);
    // printf("Primeiro elemento: %d\n", primeiro->dado);
    // printf("Ultimo elemento: %d\n", ultimo->dado);
    // No *segundo = proximoNoLista(lista4, primeiro);
    // if (segundo)
    //     printf("Segundo elemento: %d\n", segundo->dado);
    // No *penultimo = anteriorNoLista(lista4, ultimo);
    // if (penultimo)
    //     printf("Penúltimo elemento: %d\n\n", penultimo->dado);
    // liberaLista(lista4);
    /*****************/

    /** Exercício 5 **/
    // printf("** Exercício 5 **\n");
    // Lista *lista5 = criaLista();
    // insereInicioLista(lista5, 1);
    // insereInicioLista(lista5, 2);
    // insereInicioLista(lista5, 3);
    // insereInicioLista(lista5, 3);
    // insereInicioLista(lista5, 3);
    // insereInicioLista(lista5, 4);
    // insereInicioLista(lista5, 5);
    // imprimeLista(lista5);
    // No *no = n_esimo(lista5, 4);
    // if (no != NULL) {
    //     printf("Quarto elemento: %d\n", no->dado);
    // }
    // no = n_esimo(lista5, 10);
    // if (no != NULL) {
    //     printf("Decimo elemento: %d\n\n", no->dado);
    // }
    // else {
    //     printf("Não existe o decimo elemento\n\n");
    // }
    // liberaLista(lista5);
    /*****************/

    /** Exercício 6 **/
    // printf("** Exercício 6 **\n");
    // Lista *lista6 = criaLista();
    // insereInicioLista(lista6, 1);
    // insereInicioLista(lista6, 2);
    // insereInicioLista(lista6, 3);
    // insereInicioLista(lista6, 3);
    // insereInicioLista(lista6, 3);
    // insereInicioLista(lista6, 4);
    // insereInicioLista(lista6, 5);
    // insereFimLista(lista6, 6);
    // insereFimLista(lista6, 7);
    // insereFimLista(lista6, 8);
    // int chave = 8; //Valor a ser procurado na lista
    // imprimeLista(lista6);
    // No *no2 = procuraLista(lista6, chave);
    // if (no2 != NULL) {
    //     printf("Valor %d está na lista\n", chave);
    // }
    // else {
    //     printf("Valor %d não está na lista\n", chave);
    // }
    // chave = 11;
    // no2 = procuraLista(lista6, chave);
    // if (no2 != NULL) {
    //     printf("Valor %d está na lista\n", chave);
    // }
    // else {
    //     printf("Valor %d não está na lista\n", chave);
    // }
    // liberaLista(lista6);
    /*****************/

    /** Exercício 7 **/
    // printf("** Exercício 7 **\n");
    // Lista *lista7 = criaLista();
    // imprimeLista(lista7);
    // printf("Removendo os nós com valor 4 de uma lista vazia\n");
    // removeElementoLista(lista7, 4);
    // printf("Inserindo um nó com valor 4 na lista\n");
    // insereInicioLista(lista7, 4);
    // imprimeLista(lista7);
    // printf("Removendo os nós com valor 4\n");
    // removeElementoLista(lista7, 4);
    // imprimeLista(lista7);
    // liberaLista(lista7);

    // lista7 = criaLista();
    // insereInicioLista(lista7, 1);
    // insereInicioLista(lista7, 2);
    // insereInicioLista(lista7, 3);
    // insereInicioLista(lista7, 3);
    // insereInicioLista(lista7, 3);
    // insereInicioLista(lista7, 4);
    // insereInicioLista(lista7, 5);
    // printf("\nRemoção de elementos de 'lista7'\n");
    // imprimeLista(lista7);
    // printf("Removendo os nós com valor 357\n");
    // removeElementoLista(lista7, 357);
    // imprimeLista(lista7);
    // printf("Removendo os nós com valor 3\n");
    // removeElementoLista(lista7, 3);
    // imprimeLista(lista7);
    // printf("Removendo os nós com valor 5\n");
    // removeElementoLista(lista7, 5);
    // imprimeLista(lista7);
    // printf("Removendo os nós com valor 1\n");
    // removeElementoLista(lista7, 1);
    // imprimeLista(lista7);
    // liberaLista(lista7);
    /*****************/

    /** Exercício 8 **/
    // printf("** Exercício 8 **\n");
    // Lista *lista8 = criaLista();
    // insereInicioLista(lista8, 1);
    // insereInicioLista(lista8, 2);
    // insereInicioLista(lista8, 3);
    // insereInicioLista(lista8, 3);
    // insereInicioLista(lista8, 4);
    // insereInicioLista(lista8, 5);
    // imprimeLista(lista8);
    // removeNoLista(lista8, primeiroElementoLista(lista8));
    // imprimeLista(lista8);
    // removeNoLista(lista8, ultimoElementoLista(lista8));
    // imprimeLista(lista8);
    // removeNoLista(lista8, primeiroElementoLista(lista8));
    // imprimeLista(lista8);
    // removeNoLista(lista8, primeiroElementoLista(lista8));
    // imprimeLista(lista8);
    // removeNoLista(lista8, primeiroElementoLista(lista8));
    // imprimeLista(lista8);
    // removeNoLista(lista8, primeiroElementoLista(lista8));
    // imprimeLista(lista8);
    // removeNoLista(lista8, primeiroElementoLista(lista8));
    // imprimeLista(lista8);
    // liberaLista(lista8);

    // lista8 = criaLista();
    // insereInicioLista(lista8, 1);
    // insereInicioLista(lista8, 2);
    // insereInicioLista(lista8, 3);
    // insereInicioLista(lista8, 3);
    // insereInicioLista(lista8, 4);
    // insereInicioLista(lista8, 5);
    // No *noEx8 = malloc(sizeof(No));
    // noEx8->dado = 3;
    // noEx8->proximo = NULL;
    // imprimeLista(lista8);
    // removeNoLista(lista8, noEx8); // Nada deve ser feito, pois esse nó *não* faz parte da lista
    // imprimeLista(lista8);
    // free(noEx8);
    // liberaLista(lista8);
    /*****************/

    /** Exercício 9 **/
    // printf("** Exercício 9 **\n");
    // Lista *lista9 = criaLista();
    // insereMisteriosoLista(lista9, 1);
    // insereMisteriosoLista(lista9, 5);
    // insereMisteriosoLista(lista9, 0);
    // insereMisteriosoLista(lista9, 10);
    // insereMisteriosoLista(lista9, 2);
    // insereMisteriosoLista(lista9, 7);
    // insereMisteriosoLista(lista9, 3);
    // imprimeLista(lista9);
    // liberaLista(lista9);
    /*****************/

    /** Exercício 10 - Desafio **/
    // printf("** Exercício 10 **\n");
    // Lista *lista10 = criaLista();
    // insereInicioLista(lista10, 1);
    // insereInicioLista(lista10, 2);
    // insereInicioLista(lista10, 3);
    // insereInicioLista(lista10, 3);
    // insereInicioLista(lista10, 4);
    // insereInicioLista(lista10, 5);
    // Lista *copia = copiaLista(lista10); //Deve ser *independente* da 'lista10'
    // insereFimLista(copia, 123);
    // insereFimLista(copia, 456);
    // insereFimLista(copia, 789);
    // printf("Lista original: ");
    // imprimeLista(lista10);
    // printf(" Lista copiada: ");
    // imprimeLista(copia);
    // liberaLista(lista10);
    // liberaLista(copia);
    /*****************/

    return 0;
}