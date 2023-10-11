#include <stdlib.h>
#include <stdio.h>


typedef struct{
    float num;
    char letra;
}Dados;

Dados menor(int leng, Dados vetor[]){
    Dados holder = vetor[0];
    int i=0;

    while(i < 5){
        if(vetor[i].num < holder.num) holder = vetor[i];
        i++;
    };

    return holder;
}


int main() {
    Dados D[] = {{1.5, 'a'}, {4.5, 'b'}, {5.7, 'a'}, {0.5, 'b'}, {7.5, 'c'}};

    Dados holder = menor(5, D);

    printf("%.2f, %c", holder.num, holder.letra);



}