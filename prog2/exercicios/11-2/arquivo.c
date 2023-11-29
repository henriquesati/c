#include <stdio.h>
int main(){
    // abre arquivo teste.txt no modo de escrita
    FILE* f = fopen("teste.txt", "w");

    // escreve uma mensagem no arquivo
    fprintf(f, "oi arquivo");
    fprintf(f, "\nProxima linha");

    // fecha o arquivo
    fclose(f);
}
