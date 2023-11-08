#include <stdlib.h>
#include <stdio.h>

int soma2(int num){
    return num + 2;
}

int* in(int vet[], int (*f)(int), int n ){
    int *vet_alocado = malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        vet_alocado[i] = f(vet[i]);
    }
    puts("Ts");
    return vet_alocado;
}





int main(){
    int (*p_soma2)(int);
    p_soma2 = soma2;
    int vet[5] = {1, 2, 3, 4, 5};

    int *vetor_retornado = in(vet, p_soma2, 5);
    for(int i=0; i<5; i++){
        printf("%i", vetor_retornado[i]);
    }
}