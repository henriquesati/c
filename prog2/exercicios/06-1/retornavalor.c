#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float gen(){
   return (((float)rand() / RAND_MAX) * 200) + 1;
}


float busca (float vet[], int inicio, int fim){
    float find = -1;
    for (int i=0; i<10; i++){
        float atual = vet[i];
        if(atual > inicio && atual < fim || atual == inicio || atual == fim){
        find = atual;
        break;
       }

    }
    return find;
}

int main(){
    srand(time(NULL));
    float vet[10];
    printf("Valores: ");
    for (int i=0; i<10; i++){
        vet[i] = gen();
        printf("%f-> ", vet[i]);
    }
    float find = busca(vet, 0.1, 100.1);
    printf("\n num:%f", find);

}

// || atual == inicio || atual == fim