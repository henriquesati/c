#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct{
    int espaço;
    int n_itens;
    int *array;
}Vetor;

Vetor init_vetor(){
    //work
    Vetor vetor;
    vetor.array = malloc(sizeof(int) *1);
    vetor.espaço = 1;
    vetor.n_itens = 0;
    printf("fill %i %i\n", vetor.espaço, vetor.n_itens);
    
    return vetor;
}

void fill_vetor(Vetor *vetor, int num){
    // vetor->espaço +=1;
    printf("%i %i\n", vetor->espaço, vetor->n_itens);
    if(vetor->espaço != vetor->n_itens){
        vetor->array[0] = num;
        printf("inside if");
        vetor->n_itens +=1;
    }
    else{
        vetor->n_itens +=1;
        vetor->array = realloc(vetor->array, vetor->n_itens * sizeof(int) );
        vetor->espaço +=1;
        vetor->array[vetor->n_itens -1] = num;
    }

}

Vetor numeros_aleatorios_fill(int num){
    
    Vetor vetor = init_vetor();
    for(int i=0; i<num; i++){
        int numero_aleatorio = rand();
        fill_vetor(&vetor, numero_aleatorio);

    }

    return vetor;
}

void imprime_vetor (Vetor vetor){
    for(int i = 0; i < vetor.n_itens; i++) {
        printf("%d\n", vetor.array[i]);
    }
}


int main() {
    srand(time(NULL));
    Vetor v = numeros_aleatorios_fill(10);
    imprime_vetor(v);

    
}