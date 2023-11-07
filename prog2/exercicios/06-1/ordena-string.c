#include <stdio.h>
#include <string.h>

void insert(const char **vet, int size){
    int i=1;
    puts("jdisjd");
    while(i < size){
        const char *x = vet[i];
        int k = i;
            while(k > 0 && strcmp(vet[k-1],x) > 0){
            vet[k] = vet[k-1];
            k--;
            }
        vet[k] = x;
        i++;
    }
}


int main(){
    const char* vet[4] = {"Mario", "Luigi", "Peach", "Bowser"};
    insert(vet, 4);
    for(int i=0; i<4; i++){
        printf("%s", vet[i]);
    }
}