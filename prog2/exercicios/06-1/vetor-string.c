#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int retorna_string(const char *string, const char **vet, int n_elements){
    puts("in");
    int i =0    ; 
    while (i != n_elements){
        if (! strcmp(string, vet[i]))
            return i;
        i++;
    }
    puts("");


    return -1;

}


int main(){
    const char *vet[4] = {"mario", "luigi", "peach", "mamao"};
    int resultado = retorna_string("luigi", vet, 4);
    printf("Resultado: %i", resultado);
}