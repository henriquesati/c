#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define n_strings 3
// const char* aloca()


int main(){
    char **vet_strings = malloc(sizeof(const char**) * n_strings);
    for (int i =0; i < n_strings; i++){
        vet_strings[i] = malloc(sizeof(char*) * 50);

    }
    strcpy(vet_strings[0], "pedrogatinhos");
    strcpy(vet_strings[1], "abrobroras");
    strcpy(vet_strings[2], "maças");
    printf("%s", vet_strings[0]);
    printf("%s", vet_strings[1]);
    printf("%s", vet_strings[2]);
}