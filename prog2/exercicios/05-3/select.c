#include <stdlib.h>
#include <stdio.h>
#define arr_leng 15


int main(){
    int array[arr_leng] = {8, 3, 12, 5, 9, 6, 11, 7, 2, 10, 1, 15, 4, 13, 14};
    for (int i = 0; i<=arr_leng; i++){
            for (int j=i; j<arr_leng; j++){
                if (array[i] > array[j]){
                    int tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                }
            }
    }
      for (int i = 0; i<15; i++){
        printf("%i\n", array[i]);
      }

}