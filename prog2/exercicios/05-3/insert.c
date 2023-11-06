#include <stdlib.h>
#include <stdio.h>

void insertion_sort(int v[], int N){
    for(int i = 1; i < N; i++){
        int x = v[i];
        int k = i;
        while(k > 0 && v[k-1] > x){
            v[k] = v[k-1];
            k--;
        }
        v[k] = x;
    }
}




int main(){

}