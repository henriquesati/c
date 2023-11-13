#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max_size 1024

void result_op(int stack[], int stack_n, char op){
    int acc = 0;
    int n1 = stack[stack_n];
    int n2 = stack[stack_n-1];
    printf("n1 = %i \nn2 = %i \n", n1 , n2);
    switch (op){
    case '+':
        acc = n1 +  n2;
        break;
    case '-':
        acc = n1 - n2;
        break;
    case '*':
        acc = n1 * n2;
        break;
    case '/':
        acc = n1 / n2;
        break;
}
    stack[stack_n-1] = acc;
    printf("%i", acc);
    puts("");
}

void pos_fixa(char *string){
    int len = strlen(string);
    int stack[max_size];
    int stack_n=0;
    for (int i=0; i<len; i++){
        if (isdigit(string[i])){
            printf("%c\n", string[i]);
            stack[stack_n++] = string[i]-'0';
        }
        else{
            stack_n--;
            result_op(stack, stack_n, string[i]);
        }
    }
    printf("resultado posfixa: %d", stack[stack_n-1]);
}


int main(){
    puts("WO");
    pos_fixa("29+2+2*");
    
}