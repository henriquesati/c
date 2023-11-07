#include <stdio.h>
#include <stdlib.h>



int* aloca(int n){
    int *pointer = malloc(sizeof(int) *n);

    for(int i=0; i<n; i++){
        pointer[i] = i;
    }
    return pointer;
}

int main(){
    int size = 10;
    int *pointer = aloca(size);
    for(int i=0; i<size; i++){
        printf("%n", pointer[i]);
   
    }
    return pointer;



}