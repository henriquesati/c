#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insert(float vet[], int size){
    for (int i=0; i<size; i++){
        float x = vet[i];
        int k = i;
        while (k>0 && vet[k-1] > x){
            vet[k] = vet[k-1];
            k--;
        }
        vet[k] = x;
    }
}



int main(){
    srand(time(NULL));
    float vet[10];
    puts("valores");
    for (int i=0; i<10; i++){
        vet[i] = 0.1*(rand()%1000);
        printf("%f", vet[i]);
    }
    puts("");
    insert(vet, 10);
    puts("Ordenado");
    for (int i=0; i<10; i++){
        printf("%f ->", vet[i]);
    }


}