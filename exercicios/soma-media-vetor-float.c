#include <stdio.h>

float soma_vetor(float* vetor, int len){
    int i =0;
    float acc = 0;
    
    while(i != len){
        acc += vetor[i];
        i++;
    }

    
    // for(int j=0; j<len; j++){

    //       acc += vetor[j];
    // }
    return acc;
    
}

float media_aritimetica (float* vetor, int len){
    float acc = soma_vetor(vetor, len);
    float divisor = len;
    float media = acc/divisor;
    return media;
}

int main(){
    int len = 4;
    float vetor[4] = {1.1, 1.1, 1.1, 1.1};

    float soma = soma_vetor(vetor, len);
    float media = media_aritimetica (vetor, len);

    printf("%f", soma);
    printf("\n");
    printf("%f", media);


}