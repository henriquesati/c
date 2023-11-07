#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(char* palavra, const char** vetor, int size){
    int palavra_length = strlen(palavra);
    int i=0;
    int less_count = 0;
    int same_count = 0;
    int more_count = 0;

    const char **less= malloc(sizeof(char *) *5);
    const char **same = malloc(sizeof(char *) *5);
    const char **more = malloc(sizeof(char *) *5);

    while(i < size){
        int palavra_atual_length = strlen(vetor[i]);
        int palavra_length = strlen(palavra);
        
        if (palavra_length < palavra_atual_length){
            more[more_count] = vetor[i];
            more_count +=1;
        }
        if (palavra_length == palavra_atual_length){
            same[same_count] = vetor[i];
            same_count +=1;

        }
        else {
            less[less_count] = vetor[i];
            less_count+=1;
        }
       
        int length = strlen(vetor[i]);
        printf("%i\n", length);
        printf("%s\n", vetor[i]);

        i++;
    }

    printf("less: %s",  more[2‹]);
}


int main(){
    const char* nomes[] = { "galinha", "golfinho", "carpa", "tartaruga", "cavalo", "chita", "mosquito", "elefante", "panda", "bode"};

    imprime("camelo", nomes, 10);


}