#include <stdio.h>

typedef struct{
    int i;
    float v;
}Dados;

int main(){
    Dados d1 = {42, 1.5};
    Dados d2 = {34, 5.1};
    Dados* p = &d1;
    printf("%d %g\n", p->i, p->v);

}