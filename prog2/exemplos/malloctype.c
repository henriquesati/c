#include <stdlib.h>
#include <stdio.h>




int main(){


    char **mychar = (char**)malloc(sizeof(void*));
    char *string = "pedir";
    mychar = &string;

    printf("%p", mychar);
}