#include <stdio.h>


int conta(int value, int array[], int size){

    if (size-1 < 0){
        return 0;
    }
    if (array[size-1] == value){
        return 1 + conta(value, array, size-1);
    }
    return 0 + conta(value, array, size-1);
    
}



int main(){
    int v[10] = {2, 1, 2, 3, 4, 2, 1, 5, 2, 3};
    printf("%d\n", conta(2, v, 10));
    printf("%d\n", conta(3, v, 10));
    printf("%d\n", conta(6, v, 10));


}