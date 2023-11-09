#include <stdio.h>
#include <stdlib.h>


int main(){
    char *check_null;
    char buffer[50];
    char buffer2[50];
    char buffer3[50];
    FILE *nfile = fopen("file.txt", "r");
    // fscanf(nfile, "%s", buffer);
    char *p1 = fgets(buffer, 50, nfile);
    printf("%s", buffer);
    printf("p1: %s", p1);
    puts(" ");
    fgets(buffer2, 50, nfile);
    fgets(buffer3, 50, nfile);
    if( (check_null = fgets(buffer3, 50, nfile)) == NULL){
        puts("null");
    }
}