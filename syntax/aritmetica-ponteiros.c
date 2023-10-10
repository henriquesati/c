#include <stdio.h>

int main(){

    int a[5] = {1, 15, 23, 90, 25};
    int *p = a + 1;

    printf("%d", p[0]);
}