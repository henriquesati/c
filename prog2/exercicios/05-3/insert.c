#include <stdlib.h>
#include <stdio.h>

void insertion_sort(int v[], int N){
    for(int i = 1; i < N; i++){
        int x = v[i];
        int k = i;
        while(k > 0 && v[k-1] > x){
            v[k] = v[k-1];
            k--;
        }
        v[k] = x;
    }
}

int main(){
    int numeros[10] = {9, 3, 7, 1, 5, 8, 2, 6, 4, 0};
    insertion_sort(numeros, 10);
     printf("Array desordenado: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
}