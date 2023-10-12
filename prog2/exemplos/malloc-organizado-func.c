#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int tamanho;
    int n_itens;
    float *itens;
}Vetor;

Vetor vetor_init(float num){

    float *vet = malloc(sizeof(float));
    vet[0] = num;
    Vetor vetor = {1, 1, vet};
    return vetor;
}

void* adiciona_vetor(Vetor *vetor, float num){
    float tmp = 0;
    
        vetor->tamanho = vetor->tamanho ++;
        vetor->n_itens = vetor->n_itens+=1;
        vetor->itens = realloc(vetor->itens, sizeof(float) + vetor->n_itens+1);
        vetor->itens[vetor->n_itens-1] = num;

}
void imprime_vetor(Vetor vetor) {

    for (int i = 0; i < vetor.n_itens; i++) {
        printf("%f\n", vetor.itens[i]);
    }
}



int main() {
    
    Vetor vetor = vetor_init(2.2);

    float x;
    while(scanf("%f", &x) == 1){

        adiciona_vetor(&vetor, x);
    }

    puts("numero de itens:");
    printf("%i\n", vetor.n_itens);
    imprime_vetor(vetor);



}