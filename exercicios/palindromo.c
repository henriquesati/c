#include <stdio.h>
#include <string.h>
 //bug no segundo caso

int palindromo(char* string){

    int len = strlen(string);
    int i=0;
    int j = len-1;
    int is_palindromo = 1;
    int n = 0;
    
    while(i - j != 0 &&  is_palindromo == 1){
        n++;

        if (string[i] == string[j])printf("true\n");
        else is_palindromo = 0;

        if( i - j == 0) break;
        i++;
        j--;
    }
    printf("number of iteractions: %i\n", n);
    return is_palindromo;
}


int main() {

    char* string1 = "radar";
    char* string2 = "enaoéumpalindromoe";
    char* string3 = "level";
    char* string4 = "hello";

    int p1 = palindromo(string1);
    int p2 = palindromo(string2);
    int p3 = palindromo(string3);
    int p4 = palindromo(string4);
    printf("%i\n", p1);
    printf("%i\n", p2);
    printf("%i\n", p3);
    printf("%i\n", p4);

}