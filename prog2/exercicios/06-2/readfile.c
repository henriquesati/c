#include <stdio.h>
#include <stdlib.h>



int main() {
    int check_end;
    char *string[50];
    int n_line = 0;
    FILE *file = fopen("strings.txt", "r");
    while ( (check_end = fscanf(file, "%s", string)) != EOF){
        printf("n_line: %i: string: %s\n", n_line, string);
        n_line++;
    }
}