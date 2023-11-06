#include <stdio.h>
#include <math.h>

void imprime(int n){
    if(n < 1)
        return;

    imprime(n/10);
    printf("%d\n", n%10);
}

int main(){
    // imprime(1875);

    int numero = 1875;
    printf("%d --- %d\n", 1875/10, 1875%10);
    // printf("%d", (1*(10^3)) + (8*(10^2)) + (7*(10^1)) +(5*(10^0)));
   printf("%f", pow(10, 3));
}

