#include <stdlib.h>
#include <stdio.h>

typedef struct{
    int n;
    int n_itens;
    int *data;
} Vetor;

Vetor init(){
    Vetor vetor;
    vetor.n = 1;
    vetor.n_itens=0;
    vetor.data = malloc(sizeof(int));
    return vetor;
};

void add(Vetor *vetor, int n){
    if (vetor->n != vetor->n_itens){
        vetor->data[0] = n;
        vetor->n_itens++;
    }
    else{vetor->data = realloc(vetor->data, sizeof(int)*(n+1));
    vetor->n_itens++;
    vetor->n++;
    vetor->data[vetor->n-1] = n;
    }
}

void open_and_copy(FILE* fileopen, Vetor *vet){
    int holder;
    while( fscanf(fileopen, "%i", &holder) ==1){
        add(vet, holder);
        puts("val added");
    }
}



int main(){
    Vetor vet = init();
    add(&vet, 58);
    add(&vet, 44);
    FILE* file = fopen("dados.txt", "r");
    open_and_copy(file, &vet);

    for (int i=0; i<16; i++){
        printf("%i\n", vet.data[i]);
    }
    

}