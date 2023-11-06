#include <stdio.h>

float soma(float array[], int length){
    if (length ==1){
        return array[0];
        }
    return array[length-1] + soma(array, length-1);
    
}


int main(){
    float v[] = {2.7, 1.2, 6.7, 5.1, 4.8, 8.9, 7.1, 9.2, 6.1, 5.1};
    float m = soma(v, 10);
    printf("%g ", m);

}