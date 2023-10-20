#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size_buffer 10

typedef struct{
    char nome;
    char cidade;
    int idade;
}Info;


 int  get_some_info(Info object){
    char buffer_string[size_buffer];
    puts("digite seu nome, cidade e cidade confirmando com enter a cada dado");
    while(1){
        if(scanf("%s", buffer_string) == 1) break;
    };

}
int main(){
    Info pessoa;
    get_some_info(pessoa);

}