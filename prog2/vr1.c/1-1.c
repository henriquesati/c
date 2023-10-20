#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int* ler_digitos(const char *string, int *array){
    int i = 0;
    int array_elementos = 0;

    while (string[i] != '\0') {
        printf("%c", string[i]);
        if (isdigit(string[i])){
            if(array_elementos == 0){
                array = malloc(sizeof(int));
                array[0] = string[i] - '0';
                array_elementos = 1;
                i++;
            }else{
                array = realloc(array, sizeof(int) + (array_elementos*4));
                array[array_elementos] = string[i] - '0';
                i++;
                array_elementos ++;
            }
        
        }
        i++;
      }  return array;
}




int main(){
    int *n;
    int* v = ler_digitos("2 vixe 41 5x4?", n);
    printf("after\n");
    for(int i = 0; i < 10; i++){
        printf("%i\n", v[i]);
    }
        
    free(v);


}
