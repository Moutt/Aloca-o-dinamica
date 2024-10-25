# Aloca-o-dinamica

1. Considerando a estrutura de dados celula, crie três instâncias do objeto célula (três valores na lista); 
celula *c1 = (celula*)malloc(sizeof(celula));
celula *c2 = (celula*)malloc(sizeof(celula));
celula *c3 = (celula*)malloc(sizeof(celula));

3. Construa uma função que imprima todos os valores da lista; 
//função para imprimir valores
void imprimir(celula *inicio){
    celula *p = inicio;
    while(p != NULL){
        printf("%d\n", p->valor);
        p = p->proximo;
    }
}

4. Calcule a quantidade de memória gasta por cada instância da célula
float gastos = sizeof(celula);
printf("gasto de memória para cada célula é de: %f bits\n", gastos );

gatando um total de 16 bits por célula

6. Construa uma função que remove os elementos da lista;
void removeLista(celula *inicio) {
    celula *p = inicio;
    while (p != NULL) {
        celula *temp = p;
        p = p->prox;
        free(temp);
    }
}
7. Incremente sua função liberando a memória quando um elemento é liberado;
void removeLista(celula *inicio) {
    celula *p = inicio;
    while (p != NULL) {
        celula *temp = p;
        p = p->prox;
        free(temp);
    }
}
8. Calcule o máximo de elementos possíveis na fila, considerando a memória disponível no computador.
tenho 16 gigas de RAM, dando um total de 128000000000 bits, podendo ter um máximo de 8.000.000.000 elemetnos.

