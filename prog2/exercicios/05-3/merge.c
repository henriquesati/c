#include <stdio.h>







void merge_sort(int array[], int inicio, int fim){
    if(inicio >= fim)
        return;
    
    int meio = (inicio + fim)/2;
    merge_sort(array. inicio, meio);
    merge_sort(array, inicio, meio);
    
}