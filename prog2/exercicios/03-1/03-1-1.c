#include <stdlib.h>
#include <stdio.h>

typedef struct{
    float num;
    char letra;
}Dados;

void procura_char(int leng, Dados vetor[], char letra){
    int i=0;
    while(i<leng){
        if (vetor[i].letra == letra){
            printf("%f, %c\n", vetor[i].num, vetor[i].letra);
        }

        i++;
    }
}





int main(){
    Dados input[] = {{1.5, 'a'}, {4.5, 'b'},{5.7, 'a'}, {0.5, 'b'}, {7.5, 'c'}};

    procura_char(5, input, 'a');
    procura_char(5, input, 'b');
}