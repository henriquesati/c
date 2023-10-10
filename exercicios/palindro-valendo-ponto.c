#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int sub_palindrome(char* s, int l1, int l2){
    int  is_bool;

    if (l1 - l2 == 0){
        return 1;
    }
    if(!isalpha(s[l1])) return sub_palindrome(s, l1+1, l2);

    if(!isalpha(s[l2])) return sub_palindrome(s, l1, l2-1);
    
    if(s[l1] == s[l2]) is_bool = 1;
    else is_bool = 0;
    printf("%i\n", is_bool);

    return is_bool && sub_palindrome(s, l1+1, l2-1); //por que quando duas letras nao sao palindromas, a recursão para?
}

int is_palindrome(char* s){
    int len = strlen(s);
    return sub_palindrome(s, 0, len-1);
}

int main(){
    printf("working..\n");
    if(is_palindrome("asocorram-me, subi no onibus em marrocos!b")) printf("é palindromo");
    else printf("não é palindromo");
    


}