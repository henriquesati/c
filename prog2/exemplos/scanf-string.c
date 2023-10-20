#include <stdio.h>




int main(){

    char nome[100];

    if (scanf("%99[^:]:", nome) ==1){
        printf("String: %s\n", nome);
    }
    else {printf("somehint wonr");}

}