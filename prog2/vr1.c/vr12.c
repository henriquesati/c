#include <stdlib.h>
#include <stdio.h>

int busca(int value, int array[], int init, int end){
    int meio = (init+end) / 2;
    printf("%i %i", init, end);
    if (init >= end){
        return -1;
            
        }
    if (value == array[meio]){
        return meio;
    };
    if (array[meio] < value){
        busca(value, array, init, meio+1);
    }
    if(array[meio] > value){
        busca(value, array, meio, end-1);
    };

}

int main() {
    int v[7] = {5, 46, 47, 48, 58, 75, 122};

    int i = busca(48, v, 0, 6);
    printf("valor de i:%i", i);
    if (i>0){
        puts("valorencontrado");
    }else{
        printf("%i", i);
    }


}