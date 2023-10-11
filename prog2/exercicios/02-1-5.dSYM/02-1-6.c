#include <stdlib.h>
#include <stdio.h>


struct Dados{
    float x;
    char c;
};


int main(){
    struct Dados p = {4.2, 'a'};
    printf("%f, %c\n", p.x, p.c);

    struct Dados r = p;
    printf("%f, %c\n", p.x, p.c);
    

    float f = p.x;
    printf("%f", f);
}   

