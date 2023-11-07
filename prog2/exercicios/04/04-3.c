//recebe uma string e retorna um vetor de strings com cada palavra
#include <stdio.h>
#include  <stdlib.h>
#include <string.h>


char ** retorna_palavras(const char *string, int palavras){
    int length = strlen(string);
    char ** arr_to_return = malloc(sizeof(const char**) * palavras);
    int arr_count_malloc =0;
    int current_index = 0;
    int space_buffer;
    for (int i=0; i<length; i++){
        space_buffer ++;
        if (string[i] == ' '){
           char *destiny = arr_to_return[arr_count_malloc] = malloc(sizeof(char) * space_buffer);
            strncpy(destiny, &string[current_index +1], space_buffer-1);
            current_index = i;
            space_buffer =0;
            arr_count_malloc ++;
        }
    }

    return arr_to_return;
}


int main(){
    int n = 3;
    printf("depois do n\n");
    char **palavras = retorna_palavras("amigo estou aqui ", n);
    int i=0;
    while (palavras[0][i]){
        printf("char: %c\n", palavras[2][i]);
        i++;
    }
    // for(int i=0; i<n; i++){
    //     printf("%s", palavras[i]);
    // }


}