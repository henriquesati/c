#include <stdio.h>

int main(){
    int a = 521;
    int *p1 = &a;
    printf("%d\n", *p1);

    char letra = 'a';
    char *p2 = &letra;
    printf("%c\n", *p2);

    float flutuante =  2.2;
    float *p3 = &flutuante;
    printf("%f\n", *p3);

}