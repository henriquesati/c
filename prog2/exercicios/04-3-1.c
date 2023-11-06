#include <stdlib.h>
#include <stdio.h>

int fat(int n){
    if (n < 0){
        return -1;
    }
    if (n == 1)
        return 1;
    return n * fat(n-1);
}

int mdc(int n1, int n2){
    if (n1 < 0 || n2 < 0 || n2 == 0)
        return -1;
    int resto = n1%n2;
    if (resto == 0)
        return  n2;
    mdc(n1 - resto, resto);

}



int main(){
    int n = 5;
    int result = fat(n);
    printf("%i\n", result);

    int mdc_input[2] = {40,24};
    int result2 = mdc(mdc_input[0], mdc_input[1]);
    printf("%i", result2);

}