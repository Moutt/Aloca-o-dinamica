#include <stdio.h>
#include <stdlib.h>

//criando celula
struct reg {
    int valor;
    struct reg *proximo;
};
typedef struct reg celula;


//função para imprimir valores
void imprimir(celula *inicio){
    celula *p = inicio;
    while(p != NULL){
        printf("%d\n", p->valor);
        p = p->proximo;
    }
}

// Função para remover elementos da lista
void remover(celula *inicio){
    celula *p = inicio;
    while(p != NULL){
        celula *temp = p;
        p = p->proximo;
        free(temp);
    }
}

int main(){
    // criando 3 células
    celula *c1 = (celula*)malloc(sizeof(celula));
    celula *c2 = (celula*)malloc(sizeof(celula));
    celula *c3 = (celula*)malloc(sizeof(celula));
    
    // Atribuindo valores
    c1->valor = 10;
    c2->valor = 20;
    c3->valor = 30;

    // Encadeando as células
    c1->proximo = c2;
    c2->proximo = c3;
    c3->proximo = NULL;
    
    //imprimindo valores
    printf("Valores na lista: \n");
    imprimir(c1);
    
    //removendo valores
    remover(c1);
}