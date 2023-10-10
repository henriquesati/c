#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int compare(char* string, char* to_compare){

    int i = 0;
    while (1){
        if (string[i] != to_compare[i]) return 0;
        if (string[i] == '\0' && to_compare[i] == '\0') return 1;
        i++;
    }
    return 1;

}

int main() {
    char a[100] = "batata";
    char b[100];
    strcpy(b, "casa");

    char string[] = "batata";

    int is = compare(a, string);

    if (is) printf("is");
    else printf("no");

}
// if (string[i] == '\0' && to_compare[i] == '\0') return 1;