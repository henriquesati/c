#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_size 1024

void add_to_stack(char* stack, int index, char letra){
    stack[index] = letra;
}
int check_and_pop(char* stack, int i, char letra){
    printf("ab: %c   fc: %c\n", stack[i], letra);
    if (stack[i] == '(' && letra ==')'){
        printf("ab: %c   fc: %c\n", stack[i], letra);
        return 1;
    }
    if (stack[i] == '[' && letra ==']'){
        printf("ab: %c   fc: %c\n", stack[i], letra);
        return 1;
    }
    if (stack[i] == '{' && letra =='}'){
        printf("ab: %c   fc: %c", stack[i], letra);
        return 1;
    }
    return 0;
}

int iter(const char *string, char *stack){
    int str_len = strlen(string);
    int j=0;

    for (int i=0; i<str_len; i++){
        if ( (string[i] == '(') || (string[i] == '[') || (string[i] == '{')){
            add_to_stack(stack, j, string[i]);
            j++;
        }
        if ( (string[i] == ')') || (string[i] ==']') || (string[i] =='}') ){
            check_and_pop(stack, j, string[i]);
            if (!check_and_pop(stack, j, string[i]))
                return 0;
            j--;
        }
    }
    return 1;
}



int main(){

    const char* str = "(23+[45*{26-18}])";
    char stack[max_size];
    if(iter(str, stack)){
        puts("bao");
    }else{
        puts("ruim");
    }

}