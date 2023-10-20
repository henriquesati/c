#include <stdio.h>
#include <stdlib.h>

int main(){
   FILE* f = fopen("num.txt", "r");
  
   if(f == NULL){
       printf("Erro ao ler arquivo!\n");
       exit(1);
   }

   int x;
   float v;
   fscanf(f, "%d %f", &x, &v);
   fclose(f);
   printf("x = %d, v = %g\n", x, v);


    char holder[15];
    FILE* strings = fopen("strings.txt", "r");
    if (strings ==  NULL){
    printf("erro");
   }
   fscanf(strings,"%s", holder);
   printf("%s", holder);
   
}
