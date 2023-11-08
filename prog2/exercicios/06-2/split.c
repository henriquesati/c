#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* get_buffer(){
    char *buffer = malloc(sizeof(char) * 50);
    return buffer;

}

char** split(const char* string, int n){
    char *buffer = get_buffer();
    int j=0;
    int size = n;
    int str_arr_count = 0;
    char **vet_to_return = malloc(sizeof(char*)* size);

    for (int i=0; i<size; i++){
        buffer[j] = string[i];
        j++;
        if(string[i] == ' '){
            vet_to_return[str_arr_count] = strdup(buffer);
            free(buffer);
            buffer = get_buffer();
            str_arr_count++;
            j = 0;
        }

    }
    return vet_to_return;
}



int main(){
    int n = 4;
    puts("v");
    char** palavras = split("olha que coisa mais linda", n);
    for(int i = 0; i < n; i++){
        printf("%s\n", palavras[i]);
    }
}