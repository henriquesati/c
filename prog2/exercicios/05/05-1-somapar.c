#include <stdio.h>


int somapar(int array[], int size){
    if(size == 0){
        return 0;
    }
    if(array[size-1]%2 ==0){
        return array[size-1] + somapar(array, size-1);
    }
    return 0 + somapar(array, size-1);
}


int main(){
    int v[10] = {2, 1, 2, 3, 4, 2, 1, 5, 2, 3};
    printf("%d\n", somapar(v, 10));

}