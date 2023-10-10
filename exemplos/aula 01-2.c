#include <stdio.h>


int main(){
    int acc = 0;
    int n;
    while(scanf("%d", &n) == 1){
        acc += n;
    }
    printf("resultado:%d", acc);
}

//echo " 5 2 1 4 5 3 2" >numeros.txt
//main.c <numeros.txt