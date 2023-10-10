#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 521;
    int *p1 = &numero;
    int **p2 = &p1;

    printf("numero: %i\n", numero);
    printf("number adress: %p\n\n", &numero);
    
    printf("p1 adress: %p\n", p1);
    printf("first pointer own adress: %p\n", &p1);
    printf("\n");

    printf("second pointer: %p\n", *p2);
    printf("second pointer own adress: %p\n", &p2);
}