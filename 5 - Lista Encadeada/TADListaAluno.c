#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
  int matricula;
  double nota;
} Aluno;

typedef struct no {
    Aluno aluno;
    struct no *proximo;
} No;

typedef struct lista {
    No *inicio;
}Lista;

Lista *criaLista(){
    Lista *lista = malloc(sizeof(Lista));
    lista->inicio = NULL;
    return lista;
}

void insere(Lista *lista, Aluno a){
    //O(1)

    //Alocar o no
    No *novo = malloc(sizeof(No));
    //Modificar o campo 'dado' do 'no'
    //Campo 'proximo' do no aponta para NULL
    novo->aluno = a;
    novo->proximo = lista->inicio;
    //Inicio aponta para o novo nó
    lista->inicio = novo;
}

void imprimeAluno(Aluno a) {
  printf("Matricula: %d\n", a.matricula);
  printf("     Nota: %.2lf\n\n", a.nota);
}

void imprimeLista(Lista *lista){
    No *atual = lista->inicio;
    while(atual != NULL) {
        imprimeAluno(atual->aluno);
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
    insere(l, (Aluno){123, 10.0});
    insere(l, (Aluno){456, 8.0});
    insere(l, (Aluno){789, 7.5});
    insere(l, (Aluno){753, 4.8});
    insere(l, (Aluno){259, 6.3});

    imprimeLista(l);

    liberaLista(l);

    return 0;
}