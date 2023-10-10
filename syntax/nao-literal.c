#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main() {


    char* string;

    string = malloc(20 * sizeof(char));
    strcpy(string, "hello world");

    printf("%s", string);
}