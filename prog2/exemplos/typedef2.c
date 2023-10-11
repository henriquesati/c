#include <stdlib.h>
#include <stdio.h>

typedef int Vetor[2];

typedef struct{
    int* ints;
    char chars;
}Dados;

int main(){
    Vetor  vet = {1,2};

    Dados i1 = {(int[]){1,2,3,4,5}, 'b'};

}