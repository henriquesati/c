#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int random_intervalo(int min, int max) {

    return min + rand() % (max - min);
}


typedef struct{
    int espaço;
    int n_itens;
    int *array;
}Vetor;

Vetor init_vetor(){
    Vetor vetor;
    vetor.espaço = 1;
    vetor.n_itens = 0;
    vetor.array = malloc(sizeof(int));
    return vetor;
}

void fill(Vetor *vetor, int num){
    printf("%i %i\n", vetor->espaço, vetor->n_itens);
    if(vetor->espaço != vetor->n_itens){
        vetor->array[0] = num;
        vetor->n_itens +=1;
    }
    else{
        vetor->espaço +=1;
        vetor->n_itens +=1;
        vetor->array = realloc(vetor->array, vetor->n_itens * sizeof(int));
        vetor->array[vetor->n_itens -1] = num;
    }
}

Vetor aleatorios(int num){
    printf("here");
    Vetor vetor = init_vetor();
    for(int i=0; i<num; i++){
        int numero_aleatorio = random_intervalo(1, 1000);
        fill(&vetor, numero_aleatorio);

    }
    return vetor;
}

Vetor menores_que(int num, Vetor vetor){
    Vetor vetor_return = init_vetor();
    for(int i=0; i<vetor.n_itens; i++){
        if (vetor.array[i] < 500){
            fill(&vetor_return, vetor.array[i]);
        }
    }
    return vetor_return;
}
void imprime_vetor (Vetor vetor){
    for(int i = 0; i < vetor.n_itens; i++) {
        printf("%d\n", vetor.array[i]);
    }
}
int main(){
    srand(time(NULL));
    Vetor v = aleatorios(10);
    Vetor u = menores_que(500, v);
    // printf("\nValores menores do que 500:\n");

    imprime_vetor(v);
     printf("\nValores menores do que 500:\n");
    imprime_vetor(u);



}