#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int array[],int inicio, int value_tofind, int fim){

    int meio =(fim + inicio)/ 2;
    printf("meio: %i", array[meio]);

    if (inicio > fim)
        return -1;
    if (array[meio]==value_tofind)
        return value_tofind;
    
    if (array[meio] > value_tofind){
        return busca_binaria(array, inicio, value_tofind, meio-1);
    }
    if(array[meio] < value_tofind){
        return busca_binaria(array, meio+1, value_tofind, fim);
    }
    return -2;
}



int main(){ 

    int vetor[10] = {5, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int result = busca_binaria(vetor, 0, 18, 10);
    printf("%i", result);

}

//é normal o primeiro meio cair no 12 ao inves do 10?
