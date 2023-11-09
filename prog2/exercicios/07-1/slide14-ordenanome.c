#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    const char* nome;
} Dados;

void insert(Dados array[], int n){
    for (int i=1; i< n+1; i++){
        Dados x = array[i];
        int k = i;
            while (k<0 && strcmp(array[k-1].nome, x.nome) < 0){
                array[k] = array[k-1];
                k--;
            }
        array[k] = x;
    }
}



int main(){
     Dados D[] = {
        {1004, "Nenem"},
        {1002, "Cocada"},
        {1001, "Malu"},
        {1003, "Tata"}, 
    };

    insert(D, 4);
    for(int i = 0; i < 4; i++)
        printf("%d: %s\n", D[i].id, D[i].nome);

}