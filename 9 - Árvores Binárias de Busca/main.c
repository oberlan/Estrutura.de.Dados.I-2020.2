#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *esq;
    struct no *dir;
}No;

No *criaNo(int v) {
    No *novo = malloc(sizeof(No));
    novo->dado = v;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

void imprime(No *r) {
    if (r) {
        imprime(r->esq);
        printf("%d ", r->dado);
        imprime(r->dir);
    }
}

void padding( char ch, int n ){
  for (int i = 0; i < n; i++ )
    putchar(ch);
}

void imprimeArvore ( No *root, int nivel ){
  if ( root == NULL ) {
    padding('\t', nivel );
    puts("~");
  } else {
    imprimeArvore ( root->dir, nivel + 1 );
    padding('\t', nivel );
    printf("%d\n", root->dado );
    imprimeArvore ( root->esq, nivel + 1 );
  }
}

void libera(No *r){
    if(r != NULL) {
        libera(r->esq);
        libera(r->dir);
        free(r);
    }
}

No* busca (No* r, int v) {
    if (r == NULL || r->dado == v) 
        return r;
    if (r->dado > v) 
        return busca(r->esq , v);
    else
        return busca(r->dir, v);
}


int altura(No *r) {
    if(r == NULL)
        return -1;
    int hSAE = altura(r->esq);
    int hSAD = altura(r->dir);
    if (hSAE > hSAD)
        return hSAE + 1;
    else
        return hSAD + 1;
}

int numeroNo(No *raiz) {
    if (raiz == NULL)
        return 0;
    else 
        return numeroNo(raiz->esq) + numeroNo(raiz->dir) + 1;
}

// No *insereNo(No *raiz, No *novo) {
//     if(raiz == NULL) 
//         return novo;
    
//     No *pai = NULL;
//     No *atual = raiz;
//     while (atual != NULL) {
//         pai = atual;
//         if (atual->dado > novo->dado)
//             atual = atual->esq;
//         else
//             atual = atual->dir; 
//     }
//     if(pai->dado > novo->dado)
//         pai->esq = novo;
//     else
//         pai->dir = novo;
//     return raiz;
// }

No *insereNo(No *raiz, No *novo){
    if(raiz == NULL)
        return novo;
    if(raiz->dado > novo->dado)
        raiz->esq = insereNo(raiz->esq, novo);
    else
        raiz->dir = insereNo(raiz->dir, novo);
    return raiz;
}

No *removeNo(No *raiz, int chave) {
    No *pai = NULL;
    No *atual = raiz;
    while (atual != NULL && atual->dado != chave) {
        pai = atual;
        if (atual->dado > chave)
            atual = atual->esq;
        else
            atual = atual->dir;
    }
    if(atual == NULL){
        printf("Chave não encontrada!\n");
        return raiz;
    }
    /* Nó é uma folha */
    if(atual->dir == NULL && atual->esq == NULL) {
        if(atual != raiz) {
            if(pai->esq == atual)
                pai->esq = NULL;
            else
                pai->dir = NULL;
        }
        else {
            raiz = NULL;
        }
        free(atual);
    }
    /* Nó tem um único filho à esquerda */
    else if (atual->dir == NULL) {
        if(pai->esq == atual)
            pai->esq = atual->esq;
        else
            pai->dir = atual->esq;
        free(atual);
    }
    /* Nó tem um único filho à direita */
    else if (atual->esq == NULL) {
        if(pai->esq == atual)
            pai->esq = atual->dir;
        else
            pai->dir = atual->dir; 
        free(atual);
    }
    /* Nó tem dois filhos */
    else {
        No *t = atual->esq;
        pai = NULL;
        while(t->dir != NULL) {
            pai = t;
            t = t->dir;
        }
        if (pai != NULL) 
            pai->dir = t->esq;
        else /* ABB com 3 nó e vamos excluir a raiz */
            atual->esq = t->esq;
        atual->dado = t->dado; /*Troca as informações dos nós*/
        free(t);
    }


    return raiz;
}

int main() {
    // No *raiz = criaNo(8);
    // raiz->esq = criaNo(3);
    // raiz->dir = criaNo(10);
    // raiz->esq->esq = criaNo(1);
    // raiz->esq->dir = criaNo(6);
    // raiz->esq->dir->esq = criaNo(4);
    // raiz->esq->dir->dir = criaNo(7);
    // raiz->dir->dir = criaNo(14);
    // raiz->dir->dir->esq = criaNo(13);
    No *raiz = NULL;
    raiz = insereNo(raiz, criaNo(12));
    raiz = insereNo(raiz, criaNo(10));
    raiz = insereNo(raiz, criaNo(15));
    // raiz = insereNo(raiz, criaNo(11));
    // raiz = insereNo(raiz, criaNo(9));
    // raiz = insereNo(raiz, criaNo(13));
    // raiz = insereNo(raiz, criaNo(8));
    // raiz = insereNo(raiz, criaNo(14));
    // raiz = insereNo(raiz, criaNo(16));

    // raiz = insereNo(raiz, criaNo(3));
    // raiz = insereNo(raiz, criaNo(10));
    // raiz = insereNo(raiz, criaNo(1));
    // raiz = insereNo(raiz, criaNo(6));
    // raiz = insereNo(raiz, criaNo(4));
    // raiz = insereNo(raiz, criaNo(7));
    // raiz = insereNo(raiz, criaNo(14));
    // raiz = insereNo(raiz, criaNo(13));
    // raiz = insereNo(raiz, criaNo(0));
    // raiz = insereNo(raiz, criaNo(9));
    // raiz = insereNo(raiz, criaNo(72));
    // raiz = insereNo(raiz, criaNo(-15));
    // raiz = insereNo(raiz, criaNo(8));
    // raiz = insereNo(raiz, criaNo(8));
    // raiz = removeNo(raiz, 14);
    // raiz = removeNo(raiz, 8);
    // raiz = removeNo(raiz, 8);
    // raiz = removeNo(raiz, 9);
    // raiz = removeNo(raiz, 13);
    raiz = removeNo(raiz, 12);
    

    printf("Altura: %d\n", altura(raiz)); //0
    imprimeArvore(raiz, 0);

    No *no = busca(raiz, 1);
    if(no)
        printf("%d? %d\n", 1, no->dado);
    else
        printf("Nao encontrado\n");
    printf("Altura: %d\n", altura(raiz)); //2
    printf("#Nos: %d\n", numeroNo(raiz)); //4

    libera(raiz);
    return 0;
}