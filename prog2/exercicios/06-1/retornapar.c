#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen() {
    return rand() % 100 + 1; // Gera um número entre 1 e 100
}

int encontra_par(int v[10]){
    int par = -1;
    for(int i=0; i<10; i++){
        par = (v[i]%2 == 0) ? v[i] : -1;
    }

    return par;
}
int main(){
    srand(time(NULL));
    int vet[10];
    for (int i=0; i<10; i++){
        vet[i] = gen();
        printf("%i", vet[i]);
    }
    int par = encontra_par(vet);
    printf("\n%i", par);
}
