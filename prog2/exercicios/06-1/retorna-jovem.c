#include <stdio.h>

typedef struct {
    int idade;
    float peso;
    float altura;
    char nome[100];
}Dados;

Dados retorna_index(Dados vet[], int n){
    puts("i");
    Dados *ponteiro = &vet[0];
    for(int i=1; i<n+1; i++){
        if(vet[i].idade < ponteiro->idade){
            printf("%i", i-1);
        }
    }
}

int main(){
    Dados D[] = {
        {18, 48.5, 1.54, "Zequinha"},
        {13, 37.8, 1.24, "Marquinhos"},
        {18, 58.5, 1.74, "Luquinhas"},
        {15, 78.5, 1.64, "Zefinha"},
    };
    Dados *p = &D[0];
    retorna_index(D, 4);
    printf("Idade: %d\n", p->idade);

}