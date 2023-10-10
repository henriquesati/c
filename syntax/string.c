//maneiras de inicializar uma string em C
#include <stdio.h>

int main() {
    char *string = "hello world";
    char secondstring[] = "second string";
    char limitedstring[20] = "not nec. 20";
    char overflow[5] = "biiig overflow";

    printf("%s\n", string);
    printf("%s\n", secondstring);
    printf("%s\n", limitedstring);
    printf("%s", overflow);

}