#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#define max_size 4

typedef struct{
    char nome[50];
    int prioridade;
} Cell;

typedef struct{
    Cell data[max_size];
    int head;
    int n_itens;
} Fila;


void ordena(Fila *fila){
    int n = fila->n_itens;
        for (int i=0; i<n; i++){
            Cell x = fila->data[i];
            int k = i;
            while(k>0 && fila->data[k-1].prioridade > x.prioridade){
                fila->data[k] = fila->data[k-1];
                k--;
            }
            fila->data[k] = x;
        }
}

void init(Fila *fila){
    fila->head=0;
    fila->n_itens=0;
}

void enqueue(Fila *fila, Cell cell){
    assert(fila->n_itens<max_size);
    int index = (fila->n_itens+fila->head)%max_size;
    printf("%i -> index\n");
    fila->data[index] = cell;
    fila->n_itens++;
    ordena(fila);
}

Cell dequeue(Fila *fila){
    Cell ret = fila->data[fila->head];
    fila->head = (fila->head+1)%max_size;
    return ret;
}

int main(){
     Fila fila;
    init(&fila);

    // Adicionando três itens à fila
    Cell item1 = {"Item 1", 3};
    Cell item2 = {"Item 2", 1};
    Cell item3 = {"Item 3", 2};

    enqueue(&fila, item1);
    enqueue(&fila, item2);
    enqueue(&fila, item3);

    for (int i = 0; i < fila.n_itens; i++){
        printf("Nome: %s, Prioridade: %d\n", fila.data[i].nome, fila.data[i].prioridade);
    }
    puts("pop");
    Cell x = dequeue(&fila);
    printf("Nome: %s, Prioridade: %d\n", x.nome, x.prioridade);
    for (int i = 0; i < fila.n_itens; i++){
        printf("Nome: %s, Prioridade: %d\n", fila.data[i].nome, fila.data[i].prioridade);
    }
}