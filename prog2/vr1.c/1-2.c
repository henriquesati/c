#include <stdio.h>
#include <stdlib.h>

int combinacao(int n, int k){

    if (n < 0 || k < 0){
        return 0;
    }
    if (n == 0 & k == 0){
        return 1;
    }
    return combinacao(n-1,k-1) + combinacao(n-1,k);
}




int main(){
    printf("%d\n", combinacao(0, 0) );
    printf("%d\n", combinacao(4, 2) );
    printf("%d\n", combinacao(5, 3) );
    printf("%d\n", combinacao(-2, 1) );
    printf("%d\n", combinacao(2, -2) );
}