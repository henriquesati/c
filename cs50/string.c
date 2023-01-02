#include <stdio.h>
#include <stdlib.h>

int get_length(char* str){

    for (int i=0; i<1000; i++){
    printf("%c\n", str[i]);
        if (str[i] == '\0') {
            return i;
        }
    }
}

int main (void) {
 char *p = "pedro";

  get_length(p);

}


