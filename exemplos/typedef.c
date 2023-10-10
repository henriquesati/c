#include <stdlib.h>
#include <stdio.h>


typedef struct{
    float num;
    char letra;
}Dados;

int main(){

    Dados  dado = {2.1, 'w'};

    printf("%f, %c", dado.num, dado.letra);

}