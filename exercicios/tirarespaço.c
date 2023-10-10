#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 //remover espaços de uma string e retornar um novo endereço de memoria dinamicamente alocado

char* copia_letras(char* string){

    int len = strlen(string);
    char* newstring = malloc(len);
    int i = 0;
    int j = 0;

    while (string[i] != '\0'){
        if (string[i] != ' '){
            newstring[j] = string[i];
            j++;
        }
        i++;
    }
    return newstring;
}

int main(){
    printf("main\n");

    char* string_input = "quem? eu? eu nao, oxe!";
    char* resultado = copia_letras(string_input);
    printf("resultado: %s", resultado);

}