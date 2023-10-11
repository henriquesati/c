#include <stdio.h>
#include <string.h>

void imprime_vetor(int n, int array[n]){  //a syntaxe comum int* array tambem funciona
    for(int i=0; i< n; i++){
        printf("%i", array[i]);
        puts("");
    }

}

int main(){
     int vetor[10] = {3, 51, 42, 63, 52, 78, 67, 82, 43, 26};
     int size = 10;
     int cut = 4;

    int *vetor2  = vetor+cut;
    imprime_vetor(4, vetor);
    printf("segundo vetor\n");
    imprime_vetor(size-cut, vetor2);

}