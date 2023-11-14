#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


typedef struct{
    char stack[100];
    int n;
} Stack;

int is_empty(Stack *stack){  
    return stack->n == 0? 1: 0;  
}

char get_top(Stack *stack){
    assert(!is_empty(stack));
    return stack->stack[stack->n-1];
}

Stack init_stack(){
    Stack stack;
    stack.n = 0;
}

void push(Stack *stack, char letra){
    stack->stack[stack->n++] = letra;
}

void pop(Stack *stack){
    stack->n--;
}

int main(){
    Stack mi = init_stack();
    push(&mi, 'b');
    char tmp = get_top(&mi);
    printf("%c", tmp);
    push(&mi, 'c');
    char tmp2= get_top(&mi);
        printf("%c", tmp2);
    pop(&mi);
    char tmp3 = get_top(&mi);
    printf("%c", tmp3);
}