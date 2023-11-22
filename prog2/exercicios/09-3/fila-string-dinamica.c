#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>


typedef struct{
    char **data;
    int n_itens;
    int capacity;
    int head;
} Fila;

void init(Fila *fila){
    fila->capacity = 1;
    fila->n_itens =0;
    fila->data = malloc(sizeof(char*));
    fila->head = 0;
}

void enqueue(Fila *fila, char *string){
    if (fila->n_itens == fila->capacity){
        fila->capacity*=2;
        fila->data = realloc(fila->data, sizeof(char*)*fila->capacity);
    }
    char *buffer = malloc(sizeof(char) *50);
    memcpy(buffer, string, strlen(string));

    int index = fila->head+fila->capacity;
    if(index >=fila->capacity){
        for(int i=0; i<fila->n_itens; i++){
            fila->data[i] = fila->data[fila->head+i];
        }
        fila->head = 0;
        index = fila->n_itens;
    }
    fila->data[index]= buffer;
    fila->n_itens++;
    fila->capacity--;
}

char* dequeue(Fila *fila){
    char *ret = fila->data[fila->head];
    fila->head++;
    fila->capacity++;
    fila->n_itens--;
    return ret;
}



int main() {
    puts("super sitema de atendimento!!");
    Fila fila;
    init(&fila);
    int input;
    while(1){
        printf("Digite a opcao (0-inserir, 1-remover, outros-encerrar): ");
        scanf("%d", &input);
        printf("input:%i \n", input);
        if (input == 0){
            // puts("insira o nome");
            char buffer[50];
            scanf(" %[^\n]", buffer);
            enqueue(&fila, buffer);
            // puts("adicionado na fila com sucesso");
        }
        else if (input == 1){
            printf("removido: %s", dequeue(&fila));
            puts("");
        }
        else
            break;
        
        
    }

    return 0;
}