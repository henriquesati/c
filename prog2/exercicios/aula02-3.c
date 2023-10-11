#include <stdio.h>

#define VETOR_SIZE 7

    void jump_begin(int* array, int jump, int size){
        int i = 0 ;
        int *start_print = array + jump;

        while (i < size - jump){
            printf("%d\n", start_print[i]);

            i++;
        }
    }

int main(){

    // const int vetor_size = 7;
    int vetor[VETOR_SIZE] = {10, 20, 30, 40, 50, 60, 70};

    jump_begin(vetor, 1, VETOR_SIZE);
    
}