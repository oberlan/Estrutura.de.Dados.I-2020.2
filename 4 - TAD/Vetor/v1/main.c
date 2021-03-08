#include <stdio.h>
#include <stdlib.h>

typedef struct vetor Vetor;

struct vetor{
    int *_dados;     //Array com os dados
    int _tamanho;    //Numero de elementos no array
    int _capacidade; //Capacidade do array
};

Vetor *criaVetor(int capacidade){ //Alocar o espaço para o vetor
    if (capacidade < 1){
        return NULL;
    }
    Vetor *v = malloc(sizeof(Vetor));
    if(v == NULL){
        printf("Sem memoria!\n");
        exit(1);
    }
    v->_capacidade = capacidade;
    v->_tamanho = 0;
    v->_dados = malloc(capacidade*sizeof(int));
    if(v->_dados == NULL){
        free(v);
        printf("Sem memoria!\n");
        exit(1);
    }
    return v;
}

void liberaVetor(Vetor *v) {
    if(v == NULL)
        return;

    if(v->_dados != NULL)
        free(v->_dados);

    free(v);
    v = NULL;
}

void insereNoFimVetor(Vetor *v, int valor) {
    if(v == NULL || v->_dados == NULL) {
        printf("Vetor não alocado!\n");
        return;
    }
    if(v->_tamanho < v->_capacidade) {
        v->_dados[v->_tamanho] = valor;
        v->_tamanho++;
    }
    else {
        printf("Vetor sem espaço!\n");
    }
}

Vetor *copiaVetor(Vetor *v){
    if(v == NULL) {
        printf("Vetor não alocado!\n");
        return NULL;
    }
    Vetor *cpy = criaVetor(v->_capacidade);
    cpy->_capacidade = v->_capacidade;
    cpy->_tamanho = v->_tamanho;
    //cpy->_dados = v->_dados;
    //cpy->_dados = malloc(cpy->_capacidade*sizeof(int));

    for (int i = 0; i < v->_tamanho; i++)
         cpy->_dados[i] = v->_dados[i];
    return cpy;
}
void imprimeVetor(Vetor *v) {
    if(v == NULL) {
        printf("Vetor não alocado!\n");
        return;
    }

    for (int i = 0; i < v->_tamanho; i++)
        printf("%d ", v->_dados[i]);
    printf("\n");
}

int tamanhoVetor(Vetor *v){
    if(v == NULL) {
        printf("Vetor não alocado!\n");
        return 0;
    }
    return v->_tamanho;
}

int capacidadeVetor(Vetor *v){
    if(v == NULL) {
        printf("Vetor não alocado!\n");
        return 0;
    }
    return v->_capacidade;
}

int main() {
    int n = 10;
    Vetor *v = criaVetor(n);
    printf("   Tamanho: %d\n", v->_tamanho);
    printf("Capacidade: %d\n", v->_capacidade);

    for(int i = 0; i < 5; i++)
        insereNoFimVetor(v, i + 1);
    imprimeVetor(v);

    Vetor *v1 = copiaVetor(v);
    imprimeVetor(v1);

    insereNoFimVetor(v, 123);



    // insereNoFimVetor(v, 123);
    // insereNoFimVetor(v, 124);
    // insereNoFimVetor(v, 125);
    // imprimeVetor(v);

    // insereNoFimVetor(v1, -1);
    // insereNoFimVetor(v1, -2);
    // insereNoFimVetor(v1, -3);
    // imprimeVetor(v1);

    // imprimeVetor(v);

    //Vetor *v1 = malloc(sizeof(Vetor));
    //liberaVetor(v1);

    liberaVetor(v);
    liberaVetor(v1);
    return 0;
}