#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* procura(const char* frase, int *array_to_return){
    int max_length = strlen(frase);
    int arr_count = 0;
    array_to_return = malloc(sizeof(int) * max_length);
    int count = 0;
    while (frase[count] != '\0'){
        if (frase[count] == ' '){
            printf("%i", count);
            array_to_return[arr_count] = count;
            arr_count++;
        }
        count++;
    }
    array_to_return = realloc(array_to_return, sizeof(int) * (arr_count + 1));
    return array_to_return;


}


int main(){
    int n;
    int *s = procura("uma string qualquer", &n);
    printf("of-\n");
    for (int i=0; i<5; i++){
           printf("%i", s[i]);

    }
    
}