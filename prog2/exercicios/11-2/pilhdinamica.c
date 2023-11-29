#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *letras;
    int n_itens;
    int capacity;
} stack;

void init(stack* stack){
    stack->capacity=1;
    stack->n_itens=0;
    stack->letras = malloc(sizeof(char));
}

void push(stack* stack, char letra){
    if (stack->n_itens == stack->capacity){
        stack->capacity *=2;
        stack->letras = realloc(stack->letras, sizeof(char) *stack->capacity);
        stack->letras[stack->n_itens-1];
        stack->n_itens++;
    }
    stack->letras[stack->n_itens];
    stack->n_itens++;
    stack->capacity--;
}

// char pop(stack){

// }



int main(){
    stack *stack;
    init(stack);
    push(stack, 'a');
    printf("char = %c", stack->letras[0]);
}