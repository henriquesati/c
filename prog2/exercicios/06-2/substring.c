#include <stdio.h>
#include <stdlib.h>


char* substring(char const *string, int inicio, int fim){
    int j=0;
    char *string_to_return = malloc(sizeof(char) * fim-inicio);
    for(int i=inicio; i<=fim; i++){
        string_to_return[j]= string[i];
        j++;
    }
    return string_to_return;

}


int main(){
    char* s1 = substring("olha que coisa mais linda", 15, 18);
    char* s2 = substring("vem comigo por esse caminho", 4, 9);

    puts(s1);
    puts(s2);
    free(s1);
    free(s2);
}