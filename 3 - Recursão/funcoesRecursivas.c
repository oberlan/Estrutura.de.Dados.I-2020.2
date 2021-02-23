#include <stdio.h>
#include <stdlib.h>

int fat(int n); //Protótipo da função fat
int soma(int n);
int contaDigitos(int n);
int somaDigitos(int n);
int procura(int x[], int n, int y);

int main(){
    // for (int i = 0; i <= 10000; i+= 100)
    //     printf("%d = %d\n", i, contaDigitos(i));
    int x[] = {0, 1, 2, 3, 4, 5, 6, 11};
    int pos = procura(x, 8, 11);
    if (pos != -1) {
        printf("O valor %d está na posicao: ", 11);
        printf("%d\n", pos);
    }
    else {
        printf("O valor %d não está no vetor\n", 11);
    }

    //printf("%d = %d\n", 456, somaDigitos(456));
    return 0;
}

int procura(int x[], int n, int y){
    if (n == 0){
        return -1;
    }
    else if (x[n - 1]  == y){
        return n - 1; 
    }
    else {
        return procura(x, n - 1, y);
    }
}

    int fat(int n)
{
    if (n < 0){
        return -1;
    }
    if (n == 0) { //Caso base
        return 1;
    }
    else{ //Passo recursivo
        return n * fat(n - 1);
    }
}

int soma(int n){
    if (n == 0){
        return 0;
    }
    else {
        return n + soma(n - 1);
    }
}

int contaDigitos(int n){
    printf("%d ", n);
    if (n < 10){
        return 1; 
    }
    else {
        return 1 + contaDigitos(n / 10);
    }
}

int somaDigitos(int n){
    printf("%d ", n);
    if (n < 10){
        return n; 
    }
    else {
        return n%10 + somaDigitos(n / 10);
    }
}


