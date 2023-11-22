#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define max_size 4

typedef struct{
    char *data[max_size];
    int n_itens;
    int head;
} Fila;

void init(Fila *fila){
    fila->n_itens = 0;  
    fila->head = 0;
}

void queue(Fila *fila, char *nome){
    assert(fila->n_itens < max_size);
    char *buffer = malloc(sizeof(char)*50);
    buffer = memcpy(buffer, nome, strlen(nome));
    int index = (fila->head+fila->n_itens) %max_size;
    fila->data[index] = buffer;
    fila->n_itens++;
}

char* dequeue(Fila *fila){
    char* ret = fila->data[fila->head];
    fila->head = (fila->head+1)%max_size;
    fila->n_itens--;
    return ret;
}


void free_fila(Fila *fila){
    for (int i=0; i<fila->n_itens; i++){
        free(fila->data[i]);
    }
}



int main() {
    Fila minhaFila;
    init(&minhaFila);

    queue(&minhaFila, "String1");
    queue(&minhaFila, "String2");
    queue(&minhaFila, "String3");

    printf("Fila após adições:\n");
    for (int i = 0; i < minhaFila.n_itens; i++) {
        int index = (minhaFila.head + i) % max_size;
        printf("%s\n", minhaFila.data[index]);
    }

    free_fila(&minhaFila);
    puts("fila removida");
    printf("%s", minhaFila.data[2]);
    return 0;
}