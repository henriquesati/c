#include <stdio.h>

void manipulate(int n, float v1[n], float v2[n], float v3[n]){
    int i = 0;
    float resultado_soma;

    while(i != n){

        if (i%2 == 0) resultado_soma = v1[i] + v2[i];
        else resultado_soma = v1[i] - v2[i];
        v3[i] = resultado_soma;

        i++;
    }

}


int main(){
    float U[5] = {1.5, 3.4, 9.0, 8.1, 4.4};
    float V[5] = {9.3, 7.9, 1.9, 6.8, 2.6};
    float W[5];
    manipulate(5, U, V, W);
    for(int i = 0; i < 5; i++)
        printf("%g ", W[i]);

}