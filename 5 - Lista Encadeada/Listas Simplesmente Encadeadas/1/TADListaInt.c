#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *proximo;
}No;

typedef struct  lista {
    No *inicio;
} Lista;

Lista *criaLista(){
    Lista *lista = malloc(sizeof(Lista));
    lista->inicio = NULL;

    return lista;
}

void insere(Lista *lista, int valor){
    //O(1)

    //Alocar o no
    No *novo = malloc(sizeof(No));
    //Modificar o campo 'dado' do 'no'
    //Campo 'proximo' do no aponta para NULL
    novo->dado = valor;
    novo->proximo = lista->inicio;
    //Inicio aponta para o novo nó
    lista->inicio = novo;
}

void imprimeLista(Lista *lista){
    No *atual = lista->inicio;
    while(atual != NULL) {
        printf("Dado: %d\n", atual->dado);
        atual = atual->proximo;
    }
}

void liberaLista(Lista *lista) {
    No *atual = lista->inicio;
    while(atual != NULL) {
        No *tmp = atual->proximo;
        free(atual);
        atual = tmp;
    }
    free(lista);
    lista = NULL;
}

int vazia(Lista *lista){
    return (lista->inicio == NULL);
}

int main() {
    Lista *l = criaLista();
    
    insere(l, 2);
    insere(l, 3);
    insere(l, 5);

    imprimeLista(l);

    liberaLista(l);

    return 0;
}