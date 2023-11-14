#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct {
    char *stack;
    int n;
    int capacity;
} Stack;

Stack init(){
    Stack stack;
    stack.stack = malloc(sizeof(char) *1);
    stack.n = 0;
    stack.capacity = 0;
    return stack;
}

int is_empty(Stack *stack){
    return stack->n ==0? 1: 0;  
}
void pop(Stack *stack){
    assert(!is_empty(stack));
    puts("Pop");
    stack->n--;
    stack->capacity++;
}

char get_top(Stack *stack){
    assert(!is_empty(stack));
    return stack->stack[stack->n-1];
}

void push(Stack *stack, char letra){
    if (stack->n <= stack->capacity){
        stack->stack[stack->n++] = letra;
    }
    else{
        stack->stack = realloc(stack->stack, sizeof(char) * (stack->n+2));
        stack->capacity = stack->n+2;
        stack->stack[stack->n++] = letra;
    }
}
int main(){
    Stack mi = init();
    push(&mi, 'b');
    printf("%c\n", mi.stack[0]);
    push(&mi, 'a');
    printf("%c\n", mi.stack[1]);
    push(&mi, 'd');
    printf("%c\n", mi.stack[2]);
    push(&mi, 'x');
    printf("%c\n", mi.stack[3]);
    pop(&mi);
    puts("elemento popado");
    char tmp = get_top(&mi);
    printf("%c\n", tmp);


}