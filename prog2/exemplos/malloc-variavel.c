// #include <stdlib.h>
// #include <stdio.h>





// int main(){

//     int capacidade = 1; 
//     float* vetor = malloc(sizeof(float));  
//     int n = 0;

//     while (scanf("%f", &x) == 1){
//         if (n == capacidade){
//             capacidade +=1;
//             vetor = realloc(vetor, sizeof(int)*capacidade); 
//         }
//     }
// }

#include <stdio.h>
#include <stdlib.h>
int main(){
    int capacidade = 1;
    float* v = malloc(sizeof(float));
    int n = 0; // quantidade de valores inseridos no vetor
    float x;
    while(scanf("%f", &x) == 1){
        if(n == capacidade){
            // Opa! Preciso de mais memória
            capacidade +=1;
            v = realloc(v, capacidade*sizeof(float));
        }
        v[n] = x;
        n++;
    }
    printf("foram lidos %d valores: ", n);
    for(int i = 0; i < n; i++)
        printf("%g ", v[i]);
    free(v); // vai prá lá
}
