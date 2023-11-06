#include <stdio.h>
#define arr_leng 7

int particiona(int array[], int inicio, int fim){
    int pivot = array[inicio];
    int i = inicio;
    int j = fim;

    while(i<=j){
        if (array[i] > pivot){
            int tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            j--;
        }else{
            i++;
        }
    
    }
    array[inicio] = array[j];
    array[j] = pivot; //
    return j;
}


void quick(int array[], int inicio, int fim){
    if (inicio >= fim){
        return;
    }
    int fim_lista = particiona(array, inicio, fim);
    quick(array, inicio, fim_lista-1);  // Correção aqui
    quick(array, fim_lista+1, fim);  
};


    
int main(){
    int array[7] = {8, 3, 12, 5, 9, 17, 5};
    quick(array, 0, 7-1);
     for (int i = 0; i<7; i++){
        printf("%i->", array[i]);
      }
}
        


// por que os pivots são swapados?
//por que i<j termina?