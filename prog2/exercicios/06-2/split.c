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
    int i=0;
    int words_count = 0;
    int str_arr_count = 0;
    int last = 0;
    char **vet_to_return = malloc(sizeof(char**)* n);

    while(words_count != n){
        printf("%c", string[i]);
        buffer[j] = string[i];
        j++;
        if(string[i] == '\0'){
            strcpy(vet_to_return[n-1], string+last+1);
            words_count++;
        }
        if(string[i] == ' '){
            last = i;
            buffer[j] = '\0';
            vet_to_return[str_arr_count] = strdup(buffer);
            free(buffer);
            buffer = get_buffer();
            str_arr_count++;
            j = 0;
        }
        i++;
    }
    return vet_to_return;
}



int main(){
    int n = 4;
    puts("v");
    char** palavras = split("olha que coisa mais linda", n);
    printf("\n%s", palavras[n-1]);
}