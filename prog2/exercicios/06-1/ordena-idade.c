#include <stdio.h>

typedef struct {
    int idade;
    float peso;
    float altura;
    char nome[100];
}Dados;

void insert(Dados vet[], int n){
    for(int i=1; i<n; i++){
        Dados x = vet[i];
        int k = i;
            while(k > 0 && vet[k-1].idade > vet[k].idade){
                vet[k] = vet[k-1];
                k--;
            }
        vet[k] = x;
    }
}

int main(){
    Dados D[] = {
        {12, 48.5, 1.54, "Zequinha"},
        {13, 37.8, 1.24, "Marquinhos"},
        {18, 58.5, 1.74, "Luquinhas"},
        {15, 78.5, 1.64, "Zefinha"},
    };

    insert(D, 4);

    puts("Em ordem de idade:");
    for(int i = 0; i < 4; i++)
        printf("%d %g %g %s\n", D[i].idade, D[i].peso, D[i].altura, D[i].nome);

}