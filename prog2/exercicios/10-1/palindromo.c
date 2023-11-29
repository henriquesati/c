#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char letras[50];
    int n;
} Stack;


void push (Stack *stack, char letra){
    stack->letras[stack->n] = letra;
    stack->n++;
}

char pop(Stack *stack){
    char ret = stack->letras[stack->n];
    stack->n--;
    return ret;
}

int check(Stack *stack, const char* string){
    int i=0;
    stack->n--;
    while (string[i] != '\0'){
        if (pop(stack) != string[i])
            return 0;
        else
            printf("yay\n");
        i++;
    }
    return 1;
}

int add_half(Stack *stack, const char* string){
    int length = strlen(string);
    int i=0;

    while (i<length/2){
        printf("%c\n", string[i]);
        push(stack, string[i]);
    i++;
   }
    for(int i=0; i<stack->n;i++){
        printf("char: %c\n", stack->letras[i]);
    }
    const char *tmp = strlen(string)%2 ==0? string+i: string+i+1;
    return check(stack, tmp);
}


int main(){
    Stack stack;
    stack.n=0;
    int resultado = add_half(&stack, "anilina");
    printf("resultado: %i\n", resultado);

}