#include <stdio.h>
#include <stdlib.h>




int main(){

     FILE* f = fopen("saida.txt", "w");
   if(f == NULL){
      printf("Erro ao ler arquivo!\n");
      exit(1);
   }
   int x = 34, y = 18;
   float v = 5.12;
   fprintf(f, "Olha: %d, %f\n", x+y, v/2);
   fputc('m', f);
   fputc('a', f);
   fputc('x', f);
   fputs(" batatinha", f);
   fclose(f);

}