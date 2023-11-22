#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


#define max_size 4
typedef struct {
    char data[max_size];
    int n_itens;
    int head;
} Fila;

void init_fila(Fila *fila){
    fila->head = 0;
    fila->n_itens = 0;  
}   

void enqueue(Fila *fila, char letra){
    assert(fila->n_itens < max_size);
    int index = (fila->n_itens+ fila->head) % max_size;
    fila->data[index] = letra;
    fila->n_itens++;
}

char dequeue(Fila *fila){
    assert(fila->n_itens > 0);
    char ret = fila->data[fila->head];
    fila->head = (fila->head+1)%max_size;
    fila->n_itens--;
    return ret;
}


int main(){
    Fila fila;
    init_fila(&fila);
    enqueue(&fila, 'a');
    enqueue(&fila,'b');
    char deq = dequeue(&fila);
    printf("%c", deq);
    char deq2 = dequeue(&fila);
    printf("%c", deq2);

}