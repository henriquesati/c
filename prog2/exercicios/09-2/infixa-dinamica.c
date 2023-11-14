#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    int *data;
    int n;
    int capacity;
} Stack;

Stack init(){
    Stack stack;
    stack.data = malloc(sizeof(int) *1);
    stack.n = 0;
    stack.capacity = 1;
    return stack;
}

int is_empty(Stack *stack){
    return stack->n == 0? 1:0;
}


void push(Stack *stack, int num){
    if (stack->n < stack->capacity){
        puts("if");
        stack->data[stack->n++] = num;
        stack->capacity--;
        return;
    }
        puts("W");
        stack->data = realloc(stack->data, sizeof(int) * (stack->n*2));
        stack->capacity = stack->n*2;
        stack->data[stack->n++] = num;
        stack->capacity--;
}

void pop(Stack *stack){
    assert(stack);
    stack->n--;
    stack->capacity++;
}


int get_top(Stack *stack){
    return stack->data[stack->n-1];
}

void do_op(Stack *stack, char op){
    int acc = 0;
    int n1 = get_top(stack);
    int n2 = stack->data[stack->n-2];
    pop(stack);
    switch(op){
        case '+':
            acc = n1 + n2;
            break;
        case '-':
            acc = n1 - n2;
            break;
        case '*':
            acc = n1*n2;
            break;
        case '/':
            acc = n1/n2;
            break;
    }  
    stack->data[stack->n-1] = acc;

}


void pos_fixa(char *string, Stack *stack){
    int len = strlen(string);
    for (int i=0; i<len; i++){
        if (isdigit(string[i])){
            printf("%c\n", string[i]);
            push(stack, string[i]-'0');
        }
        else{
            do_op(stack, string[i]);
        }
    }
    printf("resultado posfixa: %d", stack->data[stack->n-1]);
}

int main(){
    puts("WO");
    Stack mi = init();
    pos_fixa("29+3+2*", &mi);

}