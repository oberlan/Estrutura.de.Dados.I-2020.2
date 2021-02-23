#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int TAM = 100;

int buscaSequencial(int *v, int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int buscaBinariaRec(int *v, int l, int r, int x) {   
    int m = (l + r)/2;
    if (l > r)
        return -1;
    if (v[m] == x)
        return m;
    else if (v[m] < x)
        return buscaBinariaRec(v , m + 1 , r , x);
    else
        return buscaBinariaRec(v, l , m - 1 , x);

}
int buscaBinaria(int *v, int n, int x) {
    return buscaBinariaRec(v, 0, n, x);
}

int main() {
    clock_t inicio, fim;
    srand(time(0));

    int *numeros = malloc(TAM * sizeof(int));
    // Inicializa os valores do array
    for (int i = 0; i < TAM; i++){
        numeros[i] = i;
    }

    int valorProcurado = rand() % (2*TAM); // Sorteia um número entre 0 e 2*TAM
    printf("Valor procurado: %d\n", valorProcurado);

    inicio = clock(); // Pega o tempo atual
    int posicao = buscaSequencial(numeros, TAM, valorProcurado);
    //int posicao = buscaBinaria(numeros, TAM, valorProcurado);
    fim = clock(); // Pega o tempo atual
    
    if  (posicao != -1){
        printf("Valor encontradao na posição %d\n", posicao);
    }
    else {
        printf("Valor não localizado\n");
    }
    
    double tempoGasto = ((double)fim - inicio) / CLOCKS_PER_SEC; // Em segundos
    printf("Tempo gasto: %.10lf seg\n", tempoGasto);

    return 0;
}