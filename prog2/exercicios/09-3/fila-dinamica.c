#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct{
    char *data;
    int head;
    int n_itens;
    int capacity;
} Fila; 

void init(Fila *fila){
    fila->data = malloc(sizeof(char));
    int head = 0;
    int n_itens; 0;
    int capacity =1;
}

void enqueue(Fila *fila, char letra){
        if (fila->n_itens == fila->capacity){
            fila->capacity = fila->capacity *2;
            fila->data = realloc(fila->data, sizeof(char)* fila->capacity);   
        }

    int index = fila->head + fila->capacity;
        if (index >= fila->capacity){
            for (int i =0; i<fila->n_itens; i++){
                fila->data[i] = fila->data[fila->head+i];
            }
            fila->head =0;
            index = fila->n_itens;
        }
    fila->data[index] = letra;
    fila->n_itens++;
    
}

char dequeue(Fila *fila){
    assert(fila->n_itens >0);
    char ret = fila->data[fila->head];
    fila->head++;
    fila->n_itens--;
    return ret;
}



int main(){
    Fila Q;
    init(&Q);
    enqueue(&Q, 'A');
    enqueue(&Q, 'B');
    enqueue(&Q, 'C');
    printf("%c ", dequeue(&Q) );
    enqueue(&Q, 'D');
    printf("%c ", dequeue(&Q) );
    enqueue(&Q, 'E');
    printf("%c ", dequeue(&Q) );
    enqueue(&Q, 'F');
    enqueue(&Q, 'G');
    enqueue(&Q, 'H');
    while(Q.n_itens > 0)
        printf("%c ", dequeue(&Q) );
    free(Q.data);
}