#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#define max_size 1024

typedef struct{
    int data[max_size];
    int n;
} Stack;

Stack init_stack(){
    Stack stack;
    stack.n = 0;
}
int is_empty(Stack *stack){
    return stack->n == 0 ?1:0;
}

void pop(Stack *stack){
    assert(is_empty(stack));
    stack->n--;
}

void push(Stack *stack, int num){
    stack->data[stack->n++] = num-'0';
}

int get_top(Stack *stack){
    return stack->data[stack->n-1];
}

void do_op(Stack *stack, char op){
    stack->n--;
    int acc = 0;
    int n1 = stack->data[stack->n];
    int n2 = stack->data[stack->n-1];
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
        if(isdigit(string[i]))
            push(stack, string[i]);
        else{
            do_op(stack, string[i]);
            printf("resultado :%i\n", stack->data[stack->n-1]);
        }
    }
}

int main(){
    puts("WO");
    Stack mi = init_stack();
    pos_fixa("", &mi);

}