#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define size_input 4

typedef struct{
    int idade;
    float peso;
    float altura;
    char nome[50];
}Pessoa;

void ordena(Pessoa *array, int qtd){
    for (int i =0; i<qtd; i++){
        for (int j =i; j<qtd; j++){
            if (strcmp(array[i].nome, array[j].nome) < 0){
                Pessoa tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;

            }
            
        }
    }
}

int main(){
   char string[100];
   int qtd = 0;
    scanf("%i", &qtd);

   
   Pessoa *pessoas = malloc(sizeof(Pessoa) * qtd);
    for (int i=0; i<qtd; i++){
        scanf("%i %f %f %[^\n]", &pessoas[i].idade, &pessoas[i].peso, &pessoas[i].altura, &pessoas[i].nome);
        printf("%i %.2f %.2f %s\n", pessoas[i].idade, pessoas[i].peso, pessoas[i].altura, pessoas[i].nome);
   };

    ordena (pessoas, qtd);
     for (int i=0; i<qtd; i++){
        printf("%i %.2f %.2f %s\n", pessoas[i].idade, pessoas[i].peso, pessoas[i].altura, pessoas[i].nome);
   };

}

