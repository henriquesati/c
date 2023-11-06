#include <stdio.h>

void bubble(int array[], int N){
    for(int n = N; n>0; n--){
            for(int i=0; i<N; i++){
                if (array[i-1] > array[i]){
                    int tmp = array[i-1];
                    array[i-1] =  array[i];
                    array[i] = tmp;
                }
            }
    }
}


    
int main(){
    int vetor[] = {2,3,4,5,9,8,1};
    bubble(vetor, 7);
    for(int i=0; i<5; i++){
        printf("%i", vetor[i]);
    }
}


