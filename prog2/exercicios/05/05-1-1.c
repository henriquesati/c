#include <stdlib.h>
#include <stdio.h>

float potencia(float base, float multiplicador){
    if (multiplicador == 1){
        return base;
    }
    
    return base * potencia(base, multiplicador -1);
}


int main(){
    printf("%f\n", potencia(5.4, 3));


}