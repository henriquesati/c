#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


typedef struct{
    char stack[100];
    int n;
} Stack;

int is_empty(Stack *stack){  
    return stack->n ==0? 1: 0;  
}

char get_top(Stack *stack){
    assert(!is_empty);
    return stack->stack[stack->n-1];
}

void init_stack(Stack *stack){
    stack->n = 0;
}

void push(Stack *stack, char letra){
    stack->stack[stack->n++] = letra;
}

void pop(Stack *stack){
    stack->n--;
}

int main(){

}