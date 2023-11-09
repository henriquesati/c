#include <stdlib.h>
#include <stdio.h>
#define max_size 1024


int main(){
    char stack[max_size];
    int n=0;

    stack[n++] = 'A';
    stack[n++] = 'B';
    stack[n++] = 'C';
    stack[n++] = 'D';

    while(n>0){
        printf("%c ", stack[n-1]);
        n--;
    }

}