#include <stdio.h>
int main(){   
   FILE* f = fopen("teste.txt", "w");
   int a = 4, b = 23;
   float x = 5.23, y = 4.92;
   char nome[] = "calopsita";

   fprintf(f, "oi arquivo!\n");
   fprintf(f, "%d + %d = %d\n", a, b, a+b);
   fprintf(f, "3*%g*%g = %g\n", x, y, 3*x*y);
   fprintf(f, "%s começa com %c\n", nome, nome[0]);

   fclose(f);
}
