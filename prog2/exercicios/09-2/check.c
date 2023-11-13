#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_size 1024

int is_open(char letra){
   if ((letra == '(') || (letra == '[') || (letra == '{'))
        return 1;
    return 0;
}

int is_close(char letra){
    if ((letra == ')') || (letra == ']') || (letra == '}'))
        return 1;
    return 0;
}

int add_to_stack(char* stack, int index, char letra){
    stack[index] = letra;
    return index;
}

int check_and_pop(char* stack, int i, char letra){
    printf("abre: %c   fecha: %c\n", stack[i-1], letra);
    if (stack[i-1] == '(' && letra ==')'){
        // printf("abre: %c   fecha: %c\n", stack[i], letra);
        return 1;
    }
    if (stack[i-1] == '[' && letra ==']'){
        // printf("abre: %c   fecha: %c\n", stack[i], letra);
        return 1;
    }
    if (stack[i-1] == '{' && letra =='}'){
        // printf("abre: %c   fecha: %c\n", stack[i], letra);
        return 1;
    }
    return 0;
}

int iter(const char *string, char *stack){
    int str_len = strlen(string);
    int j=0;
    for (int i=0; i<str_len; i++){
        if ( is_open(string[i]) ){
            printf("adicionado: %c -> j=%i\n", string[i], j);
            add_to_stack(stack, j, string[i]);
             j++;
        }
        if ( is_close(string[i]) ){
                if (!check_and_pop(stack, j, string[i]))
                    return 0;
                j--;
            printf("pop-> j: %i\n", j);
        }
    }
    return 1;
}


int main(){

    const char* str = "(23+[45*{26[2]-18}])";
    char stack[max_size];
    if(iter(str, stack)){
        puts("bao");
    }else{
        puts("ruim");
    }

}